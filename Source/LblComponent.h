/*
  ==============================================================================

    LblComponent.h
    Created: 22 Jun 2020 10:43:38pm
    Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class LblComponent : public Component
{
public:
	LblComponent()
	{
		lbl.reset(new Label("lblKey", TRANS("lblkey")));
		addAndMakeVisible(lbl.get());
		lbl->setFont(Font(15.00f, Font::plain).withTypefaceStyle("Regular"));
		lbl->setJustificationType(Justification::centred);
		lbl->setEditable(false, false, false);
		lbl->setColour(TextEditor::textColourId, Colours::black);
		lbl->setColour(TextEditor::backgroundColourId, Colour(0x00000000));
		lbl->setSize(75, 25);
	}
	~LblComponent() { lbl = nullptr; }


	void setText(String s )
	{
		lbl->setText(s, dontSendNotification);
	}

	void paint(Graphics& g) override
	{
		g.setColour(Colours::white);
		g.drawRect(getLocalBounds(), 1);
	}

	void resized() override
	{

	}

private:
	std::unique_ptr<Label> lbl;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(LblComponent)

};
