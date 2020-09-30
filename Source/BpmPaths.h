/*
  ==============================================================================

    BpmPaths.h
    Created: 27 Jun 2020 10:04:26pm
    Author:  damsc

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class BpmPaths    : public Component
{
public:
    BpmPaths()
    {
		internalPath1.startNewSubPath(59.0f, 58.0f);
		internalPath1.lineTo(57.0f, 58.0f);
		internalPath1.lineTo(57.0f, 49.0f);
		internalPath1.lineTo(48.0f, 49.0f);
		internalPath1.lineTo(48.0f, 58.0f);
		internalPath1.lineTo(46.0f, 58.0f);
		internalPath1.lineTo(46.0f, 41.0f);
		internalPath1.lineTo(48.0f, 41.0f);
		internalPath1.lineTo(48.0f, 47.0f);
		internalPath1.lineTo(57.0f, 47.0f);
		internalPath1.lineTo(57.0f, 41.0f);
		internalPath1.lineTo(59.0f, 41.0f);
		internalPath1.closeSubPath();
		internalPath1.startNewSubPath(79.0f, 58.0f);
		internalPath1.lineTo(69.0f, 58.0f);
		internalPath1.lineTo(69.0f, 56.0f);
		internalPath1.lineTo(76.0f, 47.0f);
		internalPath1.lineTo(69.0f, 47.0f);
		internalPath1.lineTo(69.0f, 45.0f);
		internalPath1.lineTo(79.0f, 45.0f);
		internalPath1.lineTo(79.0f, 47.0f);
		internalPath1.lineTo(72.0f, 56.0f);
		internalPath1.lineTo(79.0f, 56.0f);
		internalPath1.closeSubPath();

		internalPath2.startNewSubPath(30.0f, 25.0f);
		internalPath2.lineTo(28.0f, 25.0f);
		internalPath2.lineTo(28.0f, 18.0f);
		internalPath2.cubicTo(28.0f, 17.0f, 28.0f, 16.0f, 28.0f, 16.0f);
		internalPath2.cubicTo(27.0f, 15.0f, 27.0f, 15.0f, 27.0f, 15.0f);
		internalPath2.cubicTo(27.0f, 14.0f, 27.0f, 14.0f, 26.0f, 14.0f);
		internalPath2.cubicTo(26.0f, 14.0f, 26.0f, 14.0f, 25.0f, 14.0f);
		internalPath2.cubicTo(24.0f, 14.0f, 24.0f, 14.0f, 23.0f, 14.0f);
		internalPath2.cubicTo(23.0f, 14.0f, 22.0f, 15.0f, 22.0f, 15.0f);
		internalPath2.cubicTo(22.0f, 16.0f, 22.0f, 16.0f, 22.0f, 16.0f);
		internalPath2.cubicTo(22.0f, 16.0f, 22.0f, 16.0f, 22.0f, 17.0f);
		internalPath2.lineTo(22.0f, 25.0f);
		internalPath2.lineTo(19.0f, 25.0f);
		internalPath2.lineTo(19.0f, 18.0f);
		internalPath2.cubicTo(19.0f, 17.0f, 19.0f, 16.0f, 19.0f, 16.0f);
		internalPath2.cubicTo(19.0f, 15.0f, 19.0f, 15.0f, 19.0f, 15.0f);
		internalPath2.cubicTo(19.0f, 14.0f, 19.0f, 14.0f, 18.0f, 14.0f);
		internalPath2.cubicTo(18.0f, 14.0f, 18.0f, 14.0f, 17.0f, 14.0f);
		internalPath2.cubicTo(16.0f, 14.0f, 16.0f, 14.0f, 15.0f, 14.0f);
		internalPath2.cubicTo(15.0f, 14.0f, 14.0f, 15.0f, 13.0f, 15.0f);
		internalPath2.lineTo(13.0f, 25.0f);
		internalPath2.lineTo(11.0f, 25.0f);
		internalPath2.lineTo(11.0f, 12.0f);
		internalPath2.lineTo(13.0f, 12.0f);
		internalPath2.lineTo(13.0f, 13.0f);
		internalPath2.cubicTo(14.0f, 13.0f, 15.0f, 13.0f, 15.0f, 12.0f);
		internalPath2.cubicTo(16.0f, 12.0f, 17.0f, 12.0f, 18.0f, 12.0f);
		internalPath2.cubicTo(18.0f, 12.0f, 19.0f, 12.0f, 20.0f, 12.0f);
		internalPath2.cubicTo(20.0f, 13.0f, 21.0f, 13.0f, 21.0f, 14.0f);
		internalPath2.cubicTo(22.0f, 13.0f, 23.0f, 13.0f, 23.0f, 12.0f);
		internalPath2.cubicTo(24.0f, 12.0f, 25.0f, 12.0f, 26.0f, 12.0f);
		internalPath2.cubicTo(27.0f, 12.0f, 28.0f, 12.0f, 29.0f, 13.0f);
		internalPath2.cubicTo(29.0f, 14.0f, 30.0f, 15.0f, 30.0f, 17.0f);
		internalPath2.closeSubPath();
		internalPath2.startNewSubPath(50.0f, 21.0f);
		internalPath2.cubicTo(50.0f, 22.0f, 49.0f, 23.0f, 48.0f, 24.0f);
		internalPath2.cubicTo(47.0f, 25.0f, 46.0f, 25.0f, 44.0f, 25.0f);
		internalPath2.cubicTo(44.0f, 25.0f, 43.0f, 25.0f, 42.0f, 25.0f);
		internalPath2.cubicTo(41.0f, 24.0f, 40.0f, 24.0f, 40.0f, 24.0f);
		internalPath2.lineTo(40.0f, 22.0f);
		internalPath2.lineTo(40.0f, 22.0f);
		internalPath2.cubicTo(41.0f, 22.0f, 41.0f, 22.0f, 42.0f, 23.0f);
		internalPath2.cubicTo(43.0f, 23.0f, 44.0f, 23.0f, 45.0f, 23.0f);
		internalPath2.cubicTo(46.0f, 23.0f, 46.0f, 23.0f, 47.0f, 23.0f);
		internalPath2.cubicTo(47.0f, 22.0f, 48.0f, 22.0f, 48.0f, 21.0f);
		internalPath2.cubicTo(48.0f, 21.0f, 47.0f, 20.0f, 47.0f, 20.0f);
		internalPath2.cubicTo(47.0f, 20.0f, 46.0f, 20.0f, 46.0f, 20.0f);
		internalPath2.cubicTo(45.0f, 19.0f, 45.0f, 19.0f, 44.0f, 19.0f);
		internalPath2.cubicTo(44.0f, 19.0f, 43.0f, 19.0f, 43.0f, 19.0f);
		internalPath2.cubicTo(42.0f, 19.0f, 41.0f, 18.0f, 41.0f, 18.0f);
		internalPath2.cubicTo(40.0f, 17.0f, 40.0f, 16.0f, 40.0f, 16.0f);
		internalPath2.cubicTo(40.0f, 15.0f, 40.0f, 15.0f, 40.0f, 14.0f);
		internalPath2.cubicTo(41.0f, 14.0f, 41.0f, 13.0f, 41.0f, 13.0f);
		internalPath2.cubicTo(42.0f, 13.0f, 42.0f, 12.0f, 43.0f, 12.0f);
		internalPath2.cubicTo(44.0f, 12.0f, 44.0f, 12.0f, 45.0f, 12.0f);
		internalPath2.cubicTo(46.0f, 12.0f, 47.0f, 12.0f, 47.0f, 12.0f);
		internalPath2.cubicTo(48.0f, 12.0f, 49.0f, 12.0f, 49.0f, 13.0f);
		internalPath2.lineTo(49.0f, 15.0f);
		internalPath2.lineTo(49.0f, 15.0f);
		internalPath2.cubicTo(49.0f, 15.0f, 48.0f, 14.0f, 47.0f, 14.0f);
		internalPath2.cubicTo(46.0f, 14.0f, 46.0f, 14.0f, 45.0f, 14.0f);
		internalPath2.cubicTo(44.0f, 14.0f, 43.0f, 14.0f, 43.0f, 14.0f);
		internalPath2.cubicTo(42.0f, 14.0f, 42.0f, 15.0f, 42.0f, 15.0f);
		internalPath2.cubicTo(42.0f, 16.0f, 42.0f, 16.0f, 43.0f, 17.0f);
		internalPath2.cubicTo(43.0f, 17.0f, 43.0f, 17.0f, 44.0f, 17.0f);
		internalPath2.cubicTo(45.0f, 17.0f, 45.0f, 17.0f, 45.0f, 17.0f);
		internalPath2.cubicTo(46.0f, 18.0f, 46.0f, 18.0f, 47.0f, 18.0f);
		internalPath2.cubicTo(48.0f, 18.0f, 48.0f, 18.0f, 49.0f, 19.0f);
		internalPath2.cubicTo(49.0f, 19.0f, 50.0f, 20.0f, 50.0f, 21.0f);
		internalPath2.closeSubPath();


		//[UserPreSize]
		//[/UserPreSize]

		setSize(100, 75);

    }

    ~BpmPaths()
    {
    }

    void paint (Graphics& g) override
    {
		g.fillAll(Colour(0xff323e44));

		{
			float x = 0, y = 0;
			Colour fillColour = Colours::white;
			Colour strokeColour = Colours::red;
			//[UserPaintCustomArguments] Customize the painting arguments here..
			//[/UserPaintCustomArguments]
			g.setColour(fillColour);
			g.fillPath(internalPath1, AffineTransform::translation(x, y));
			g.setColour(strokeColour);
			g.strokePath(internalPath1, PathStrokeType(7.000f), AffineTransform::translation(x, y));
		}

		{
			int x = 25, y = 35, width = 75, height = 25;
			String text(TRANS("Hz"));
			Colour fillColour = Colours::white;
			//[UserPaintCustomArguments] Customize the painting arguments here..
			//[/UserPaintCustomArguments]
			g.setColour(fillColour);
			g.setFont(Font(28.00f, Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
			g.drawText(text, x, y, width, height,
				Justification::centred, true);
		}

		{
			float x = 0, y = 0;
			Colour fillColour = Colours::white;
			Colour strokeColour = Colour(0xff5100ff);
			//[UserPaintCustomArguments] Customize the painting arguments here..
			//[/UserPaintCustomArguments]
			g.setColour(fillColour);
			g.fillPath(internalPath2, AffineTransform::translation(x, y));
			g.setColour(strokeColour);
			g.strokePath(internalPath2, PathStrokeType(8.000f), AffineTransform::translation(x, y));
		}

		{
			int x = -7, y = 3, width = 75, height = 25;
			String text(TRANS("ms"));
			Colour fillColour = Colours::white;
			//[UserPaintCustomArguments] Customize the painting arguments here..
			//[/UserPaintCustomArguments]
			g.setColour(fillColour);
			g.setFont(Font(28.00f, Font::plain).withTypefaceStyle("Regular").withExtraKerningFactor(0.250f));
			g.drawText(text, x, y, width, height,
				Justification::centred, true);
		}
    }

    void resized() override
    {


    }

private:
	Path internalPath1;
	Path internalPath2;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BpmPaths)
};
