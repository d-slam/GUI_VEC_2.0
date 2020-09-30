/*
  ==============================================================================

	KeyComponent.h
	Created: 21 Jun 2020 6:44:00pm
	Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "LblComponent.h"
#include "SpecComponent.h"

//==============================================================================
/*
*/


class KeyComponent : public Component, public ComboBox::Listener
{
public:
	KeyComponent()
	{

		initCbb();
		initLbl();

		//addAndMakeVisible(&specComponent);
		//setSize(600, 400);

	}

	~KeyComponent()
	{
		cbbKey = nullptr;
		cbbMode = nullptr;

	}

	void paint(Graphics& g) override
	{
		g.fillAll(Colour(0xff323e44));

		{
			int x = 0, y = 50, width = 600, height = 200;
			Colour fillColour = Colour(0xff16650a);
			//[UserPaintCustomArguments] Customize the painting arguments here..
			//[/UserPaintCustomArguments]
			g.setColour(fillColour);
			g.fillRect(x, y, width, height);
		}


	}

	void resized() override
	{
		specComponent.setBounds(cbbOffx + 0, cbbOffy + cbbH, 8 * cbbW, cbbH * 8);
		specComponent.setAlpha(0.5f);
	}



	void KeyComponent::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
	{

		if (comboBoxThatHasChanged == cbbKey.get())
		{
			if (cbbKey->getSelectedId() == 1) { setValue(C); }
			if (cbbKey->getSelectedId() == 2) { setValue(Cs); }
			if (cbbKey->getSelectedId() == 3) { setValue(D); }
			if (cbbKey->getSelectedId() == 4) { setValue(Ds); }
			if (cbbKey->getSelectedId() == 5) { setValue(E); }
			if (cbbKey->getSelectedId() == 6) { setValue(F); }
			if (cbbKey->getSelectedId() == 7) { setValue(Fs); }
			if (cbbKey->getSelectedId() == 8) { setValue(G); }
			if (cbbKey->getSelectedId() == 9) { setValue(Gs); }
			if (cbbKey->getSelectedId() == 10) { setValue(A); }
			if (cbbKey->getSelectedId() == 11) { setValue(As); }
			if (cbbKey->getSelectedId() == 12) { setValue(B); }

		}

		if (comboBoxThatHasChanged == cbbMode.get())
		{

			if (cbbMode->getSelectedId() == 1)
			{
				qTri = tMinDiv;
			}
			if (cbbMode->getSelectedId() == 2)
			{
				qTri = tMajDiv;
			}
			if (cbbMode->getSelectedId() == 3)
			{
				qTri = tQuaDiv;
			}

			setValue(currentKey);



		}
	}

	void setValue(int k)
	{
		currentKey = k;

		int i = 0;
		int m = 1;
		do
		{
			lblKey[i].setText(String(k * m));
			m *= 2;
			i++;

		} while (i < 8);

		m = 1;
		for (int i = 0; i < 8; ++i)
		{

			lblQKey[i].setText(String(k * m * qDiv));			//quint
			m *= 2;


		}

		m = 1;
		for (int i = 0; i < 8; ++i)
		{
			lblTKey[i].setText(String(k * m * qTri));			//checkboxselection
			m *= 2;
		}
	}



	void initLbl() 
	{
	
		int i = 0;
		do
		{
			addAndMakeVisible(&lblKey[i]);
			i++;
		} while (i < 8);

		lblKey[0].setText("Root");
		lblKey[1].setText("1st");
		lblKey[2].setText("2nd");
		lblKey[3].setText("3rd");
		lblKey[4].setText("4rd");
		lblKey[5].setText("5rd");
		lblKey[6].setText("6rd");
		lblKey[7].setText("7rd");

		i = 0;
		do
		{
			lblKey[i].setBounds(i * 75, 25, 75, 25);
			i++;
		} while (i < 8);
		i = 0;
		do
		{
			addAndMakeVisible(&lblQKey[i]);
			lblQKey[i].setBounds(i * 75, 75, 75, 25);
			lblQKey[i].setText("5th");
			i++;
		} while (i < 8);
		i = 0;
		do
		{
			addAndMakeVisible(&lblTKey[i]);
			lblTKey[i].setBounds(i * 75, 175, 75, 25);
			lblTKey[i].setText("3rd");
			i++;
		} while (i < 8);
	}

	void initCbb() 
	{
		cbbMode.reset(new ComboBox("new combo box"));
		addAndMakeVisible(cbbMode.get());
		cbbMode->setEditableText(false);
		cbbMode->setJustificationType(Justification::centredLeft);
		cbbMode->setTextWhenNothingSelected(String());
		cbbMode->setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
		cbbMode->addItem(TRANS("min"), 1);
		cbbMode->addItem(TRANS("maj"), 2);
		cbbMode->addItem(TRANS("quart"), 3);
		cbbMode->addListener(this);
		cbbMode->setBounds(640, 125, 75, 25);
		cbbMode->setSelectedId(1);
		qTri = tMinDiv;

		cbbKey.reset(new ComboBox("comboKey"));
		addAndMakeVisible(cbbKey.get());
		cbbKey->setEditableText(false);
		cbbKey->setJustificationType(Justification::centred);
		cbbKey->setTextWhenNothingSelected(TRANS("Key"));
		cbbKey->setTextWhenNoChoicesAvailable(TRANS("(no choices)"));
		cbbKey->addItem(TRANS("C"), 1);
		cbbKey->addItem(TRANS("C#"), 2);
		cbbKey->addItem(TRANS("D"), 3);
		cbbKey->addItem(TRANS("D#"), 4);
		cbbKey->addItem(TRANS("E"), 5);
		cbbKey->addItem(TRANS("F"), 6);
		cbbKey->addItem(TRANS("F#"), 7);
		cbbKey->addItem(TRANS("G"), 8);
		cbbKey->addItem(TRANS("G#"), 9);
		cbbKey->addItem(TRANS("A"), 10);
		cbbKey->addItem(TRANS("A#"), 11);
		cbbKey->addItem(TRANS("B"), 12);
		cbbKey->addListener(this);
		cbbKey->setBounds(0, 0, 75, 25);
	
	}


private:

	const float qDiv = (3.0f / 2.0f);
	const float tMajDiv = (5.0f / 4.0f);
	const float tMinDiv = (6.0f / 5.0f);
	const float tQuaDiv = (4.0f / 3.0f);


	const int wConst = 75;
	const int cbbW = 75;
	const int cbbH = 25;
	const int cbbOffx = 40;
	const int cbbOffy = 35;


	float qTri;
	int currentKey = 0;

	SpecComponent specComponent;

	std::unique_ptr<ComboBox> cbbKey;

	std::unique_ptr<ComboBox> cbbMode;


	LblComponent lblKey[8];

	LblComponent lblQKey[8];

	LblComponent lblTKey[8];





	const int  C = 33;
	const int  Cs = 35;
	const int  D = 37;
	const int  Ds = 39;
	const int  E = 41;
	const int  F = 44;
	const int  Fs = 46;
	const int  G = 49;
	const int  Gs = 52;
	const int  A = 55;
	const int  As = 58;
	const int  B = 62;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(KeyComponent)
};
