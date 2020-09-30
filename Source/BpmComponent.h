/*
  ==============================================================================

	BpmComponent.h
	Created: 21 Jun 2020 6:55:32pm
	Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "LblComponent.h"
#include "WaveComponent.h"
#include "BpmPaths.h"



//==============================================================================
/*
*/

class BpmComponent : public Component, public Slider::Listener, public Button::Listener

{
public:
	BpmComponent()
	{

		addAndMakeVisible(&waveComponent);
		addAndMakeVisible(&bpmPaths);

		initInterface();


		int i = 0;
		do
		{
			addAndMakeVisible(&lblMs[i]);			i++;
		} while (i < 4);
		i = 0;
		do
		{
			addAndMakeVisible(&lblLfo[i]);			i++;
		} while (i < 4);

	}

	~BpmComponent()
	{
		sldrBpm = nullptr;
		txtFull = nullptr;
		lblBpm = nullptr;
		txbx2 = nullptr;
		txbd2 = nullptr;
	}

	void paint(Graphics& g) override
	{

		g.fillAll(Colour(0xff323e44));
		g.setColour(Colours::blue);
		//g.drawRect(getLocalBounds(), 1);   // draw an outline around the component
		g.drawText(currentSize, getLocalBounds(), Justification::bottomRight, true);

	}

	void resized() override
	{
		setLables();

		txbx2->setBounds(475, 0, 75, 25);
		txbd2->setBounds(475, 125, 75, 25);


		waveComponent.setBounds(25, 28, 250, 60);
		waveComponent.setAlpha(0.5f);

		bpmPaths.setBounds(380, 25, 100, 75);

		currentSize = String(getWidth()) + " x " + String(getHeight());
	}

	void buttonClicked(Button* buttonThatWasClicked)
	{
		if (buttonThatWasClicked == txbx2.get())	  { scale *= 2;		}
		else if (buttonThatWasClicked == txbd2.get()) { scale *= 0.5f;	}
		setValues(bpm);
	}

	void sliderValueChanged(Slider* sliderThatWasMoved)
	{
		if (sliderThatWasMoved == sldrBpm.get())
		{
			bpm = sliderThatWasMoved->getValue();
			setValues(bpm);
			waveComponent.setBpm(bpm);
			waveComponent.repaint();
		}
	}

	void setValues(int bpm)
	{
		int i = 0;
		int mul = 1;
		ms = 60.0f / bpm;
		hz = 1.0f / ms;

		do
		{
			lblMs[i].setText(String(ms, 3));
			ms *= 0.5f;
			i++;

		} while (i < 4);	  //write ms

		i = 0;
		do
		{
			if (scale < 0.25f) 	lblLfo[i].setText(String(hz * scale, 3));
			
			else				lblLfo[i].setText(String(hz * scale, 2));



			hz *= 2.0f;
			i++;
		} while (i < 4);

		ms = 60.0f / bpm;
		hz = 1.0f / ms;

	}

	void setLables()
	{
		int i = 0;
		int inc = 0;
		do
		{
			lblMs[i].setBounds(300, inc, 75, 25);
			i++;
			inc = inc + 25;

		} while (i < 4);
		i = 0;
		inc = 25;
		do
		{
			lblLfo[i].setBounds(475, inc, 75, 25);
			inc = inc + 25;
			i++;
		} while (i < 4);
	}

	void initInterface()
	{
		sldrBpm.reset(new Slider("sliderBpm"));
		addAndMakeVisible(sldrBpm.get());
		sldrBpm->setRange(90, 290, 1);
		sldrBpm->setSliderStyle(Slider::LinearHorizontal);
		sldrBpm->setTextBoxStyle(Slider::TextBoxBelow, false, 80, 20);
		sldrBpm->addListener(this);
		sldrBpm->setBounds(25, 75, 250, 40);

		lblBpm.reset(new Label("labelBpm", TRANS("bpm")));
		addAndMakeVisible(lblBpm.get());
		lblBpm->setFont(Font(Font::getDefaultSansSerifFontName(), 32.50f, Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.113f));
		lblBpm->setJustificationType(Justification::centred);
		lblBpm->setEditable(false, false, false);
		lblBpm->setColour(TextEditor::textColourId, Colours::black);
		lblBpm->setColour(TextEditor::backgroundColourId, Colour(0x00000000));
		lblBpm->setBounds(25, 4, 250, 40);

		txbx2.reset(new TextButton("textButtonx2"));
		addAndMakeVisible(txbx2.get());
		txbx2->setButtonText(TRANS("x2"));
		txbx2->addListener(this);

		txbd2.reset(new TextButton("textButtond2"));
		addAndMakeVisible(txbd2.get());
		txbd2->setButtonText(TRANS("/2"));
		txbd2->addListener(this);

	}


private:

	const int div = 60;

	int bpm = 90;
	float ms = 1.0f;
	float hz = 0;

	float scale = 1;

	BpmPaths bpmPaths;

	LblComponent lblMs[4];

	LblComponent lblLfo[4];


	std::unique_ptr<Slider> sldrBpm;
	std::unique_ptr<Label> lblBpm;

	std::unique_ptr<TextEditor> txtFull;

	std::unique_ptr<TextButton> txbx2;
	std::unique_ptr<TextButton> txbd2;

	WaveComponent waveComponent;

	String currentSize;



	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(BpmComponent)
};




