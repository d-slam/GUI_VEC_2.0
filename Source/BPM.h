/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.7

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include <JuceHeader.h>
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class BPM  : public Component,
             public Slider::Listener,
             public Button::Listener
{
public:
    //==============================================================================
    BPM ();
    ~BPM() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<GroupComponent> groupComponent;
    std::unique_ptr<Slider> slider;
    std::unique_ptr<Label> label;
    std::unique_ptr<Label> label2;
    std::unique_ptr<Label> label3;
    std::unique_ptr<Label> label4;
    std::unique_ptr<Label> label5;
    std::unique_ptr<GroupComponent> groupComponent2;
    std::unique_ptr<Label> label6;
    std::unique_ptr<Label> label7;
    std::unique_ptr<Label> label8;
    std::unique_ptr<Label> label9;
    std::unique_ptr<TextButton> textButton;
    std::unique_ptr<Label> label10;
    std::unique_ptr<Label> label11;
    std::unique_ptr<Label> label12;
    std::unique_ptr<Label> label13;
    std::unique_ptr<TextButton> textButton2;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BPM)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

