/*
  ==============================================================================

	SpecComponent.h
	Created: 26 Jun 2020 12:27:18am
	Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/

class SpecComponent : public Component
{
public:

	SpecComponent() {}
	~SpecComponent() {}


	void paint(Graphics& g) override
	{
		g.setColour(Colours::yellowgreen);
		g.drawRect(getLocalBounds());


		int mul = 1;

		for (int i = 0; i < 8; ++i)
		{

			Point <float> p1((75 * mul), 0);
			Point <float> p2((75 * mul), 200);
			mul++;

			Line <float> l(p1.x, p1.y, p2.x, p2.y);
			g.drawLine(l, 3.0f);

		}


	}
	void resized() override
	{
		currentSize = String(getWidth()) + " x " + String(getHeight());
	}

	void setHz(int hz)
	{
		currentKey = hz;
	}

	float getAbsPosition(float hz)
	{
		return (hz * scaleFac) + 33;
	}


private:

	const float scaleFac = 600 / 7936;

	int currentKey = 33;


	String currentSize;
	int width = getWidth();
	int height = getHeight();

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SpecComponent)
};