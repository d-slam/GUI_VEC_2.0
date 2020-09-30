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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "BPM.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
BPM::BPM ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    groupComponent.reset (new GroupComponent ("new group",
                                              TRANS("Wave")));
    addAndMakeVisible (groupComponent.get());

    groupComponent->setBounds (25, 28, 250, 60);

    slider.reset (new Slider ("new slider"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (25, 75, 250, 40);

    label.reset (new Label ("new label",
                            TRANS("bpm")));
    addAndMakeVisible (label.get());
    label->setFont (Font (32.50f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (25, 4, 250, 40);

    label2.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (300, 0, 75, 25);

    label3.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (300, 25, 75, 25);

    label4.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (300, 50, 75, 25);

    label5.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (300, 75, 75, 25);

    groupComponent2.reset (new GroupComponent ("new group",
                                               TRANS("path")));
    addAndMakeVisible (groupComponent2.get());

    groupComponent2->setBounds (375, 25, 100, 75);

    label6.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (475, 25, 75, 25);

    label7.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (475, 50, 75, 25);

    label8.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (475, 75, 75, 25);

    label9.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label9.get());
    label9->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label9->setBounds (475, 100, 75, 25);

    textButton.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton.get());
    textButton->addListener (this);

    textButton->setBounds (475, 1, 75, 25);

    label10.reset (new Label ("new label",
                              TRANS("label text")));
    addAndMakeVisible (label10.get());
    label10->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label10->setBounds (300, 0, 75, 25);

    label11.reset (new Label ("new label",
                              TRANS("label text")));
    addAndMakeVisible (label11.get());
    label11->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label11->setBounds (300, 25, 75, 25);

    label12.reset (new Label ("new label",
                              TRANS("label text")));
    addAndMakeVisible (label12.get());
    label12->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label12->setBounds (300, 50, 75, 25);

    label13.reset (new Label ("new label",
                              TRANS("label text")));
    addAndMakeVisible (label13.get());
    label13->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label13->setBounds (300, 75, 75, 25);

    textButton2.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton2.get());
    textButton2->addListener (this);

    textButton2->setBounds (475, 125, 75, 25);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (550, 150);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

BPM::~BPM()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    groupComponent = nullptr;
    slider = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    groupComponent2 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    textButton = nullptr;
    label10 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    textButton2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void BPM::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void BPM::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void BPM::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void BPM::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton.get())
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == textButton2.get())
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
        //[/UserButtonCode_textButton2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="BPM" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="550"
                 initialHeight="150">
  <BACKGROUND backgroundColour="ff323e44"/>
  <GROUPCOMPONENT name="new group" id="862a41f749c8f053" memberName="groupComponent"
                  virtualName="" explicitFocusOrder="0" pos="25 28 250 60" title="Wave"/>
  <SLIDER name="new slider" id="dac58735a8e0bac2" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="25 75 250 40" min="0.0" max="10.0"
          int="0.0" style="LinearHorizontal" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="4ab66aa55e409903" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="25 4 250 40" edTextCol="ff000000"
         edBkgCol="0" labelText="bpm" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="32.5"
         kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="dd0a43238c103db5" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="300 0 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="305c726057abd624" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="300 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="88921489626e0f5" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="300 50 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="67ec7c117890753a" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="300 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <GROUPCOMPONENT name="new group" id="6ab2ea9f9e93298b" memberName="groupComponent2"
                  virtualName="" explicitFocusOrder="0" pos="375 25 100 75" title="path"/>
  <LABEL name="new label" id="bdcf1489697a869b" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="475 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="220bf986b1357b22" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="475 50 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a87884f80da2c368" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="475 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="14b1e60d03da02da" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="475 100 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="8ca7551c3f4dc589" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="475 1 75 25" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="8dac4acf4ceb8b52" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="300 0 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="363f2ef87672fe72" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="300 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b0965103df8f9eb7" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="300 50 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6cd220b4a654d6a6" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="300 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="532c903e7b92b74b" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="475 125 75 25" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

