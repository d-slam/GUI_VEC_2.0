/*
  ==============================================================================

	WaveComponent.h
	Created: 27 Jun 2020 6:48:12pm
	Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class WaveComponent : public Component
{
public:
	WaveComponent()
	{


	}

	~WaveComponent()
	{}

	void paint(Graphics& g) override
	{
		g.fillAll(Colour(0xff323e44));
		g.setColour(Colours::yellowgreen);
		g.drawRect(getLocalBounds(), 1);   // draw an outline around the component


		g.setColour(Colours::yellowgreen);

		Path path;

		for (int i = 0; i < nLoop; ++i)
		{
			x = i / div;
			y = -1 * (sin(x * (bpm / 10)));

			Point <float> p(x * scale * 2, y * scale + scale);
			if (i == 0)
				path.startNewSubPath(p);
			else
				path.lineTo(p);
			//cout << i << "\t\t" << x << "\t\t" << y << endl;
		}

		g.strokePath(path, PathStrokeType(2.0f));

		//g.drawText(currentSize, getLocalBounds(), Justification::topLeft, true);

	}

	void setBpm(int b)
	{
		bpm = b;
	}

	void resized() override
	{
		currentSize = String(getWidth()) + " x " + String(getHeight());


	}

private:

	int bpm = 90;


	const float pi = 3.14f;
	const float pi2 = pi * 2;

	float x, y;

	int nLoop = 200;

	int scale = 30;

	float div = nLoop / pi2;

	String currentSize;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WaveComponent)
};
