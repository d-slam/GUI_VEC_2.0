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
class KEY  : public Component,
             public Button::Listener,
             public ComboBox::Listener
{
public:
    //==============================================================================
    KEY ();
    ~KEY() override;

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> label;
    std::unique_ptr<Label> label2;
    std::unique_ptr<Label> label3;
    std::unique_ptr<Label> label4;
    std::unique_ptr<Label> label5;
    std::unique_ptr<Label> label6;
    std::unique_ptr<Label> label7;
    std::unique_ptr<Label> label8;
    std::unique_ptr<TextButton> textButton;
    std::unique_ptr<Label> _1;
    std::unique_ptr<Label> _2;
    std::unique_ptr<Label> _3;
    std::unique_ptr<Label> _4;
    std::unique_ptr<Label> _5;
    std::unique_ptr<Label> _6;
    std::unique_ptr<Label> _7;
    std::unique_ptr<Label> _8;
    std::unique_ptr<Label> a;
    std::unique_ptr<Label> s;
    std::unique_ptr<Label> d;
    std::unique_ptr<Label> f;
    std::unique_ptr<Label> g;
    std::unique_ptr<Label> h;
    std::unique_ptr<Label> j;
    std::unique_ptr<Label> k;
    std::unique_ptr<ComboBox> mode;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KEY)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

