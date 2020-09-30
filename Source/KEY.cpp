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

#include "KEY.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
KEY::KEY ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    label.reset (new Label ("new label",
                            TRANS("label text")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (0, 25, 75, 25);

    label2.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label2.get());
    label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label2->setBounds (75, 25, 75, 25);

    label3.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label3.get());
    label3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label3->setBounds (150, 25, 75, 25);

    label4.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label4.get());
    label4->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label4->setBounds (225, 25, 75, 25);

    label5.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label5.get());
    label5->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label5->setBounds (300, 25, 75, 25);

    label6.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label6.get());
    label6->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label6->setBounds (375, 25, 75, 25);

    label7.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label7.get());
    label7->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label7->setBounds (450, 25, 75, 25);

    label8.reset (new Label ("new label",
                             TRANS("label text")));
    addAndMakeVisible (label8.get());
    label8->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label8->setBounds (525, 25, 75, 25);

    textButton.reset (new TextButton ("new button"));
    addAndMakeVisible (textButton.get());
    textButton->addListener (this);

    textButton->setBounds (0, 0, 75, 25);

    _1.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_1.get());
    _1->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _1->setJustificationType (Justification::centredLeft);
    _1->setEditable (false, false, false);
    _1->setColour (TextEditor::textColourId, Colours::black);
    _1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _1->setBounds (0, 75, 75, 25);

    _2.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_2.get());
    _2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _2->setJustificationType (Justification::centredLeft);
    _2->setEditable (false, false, false);
    _2->setColour (TextEditor::textColourId, Colours::black);
    _2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _2->setBounds (75, 75, 75, 25);

    _3.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_3.get());
    _3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _3->setJustificationType (Justification::centredLeft);
    _3->setEditable (false, false, false);
    _3->setColour (TextEditor::textColourId, Colours::black);
    _3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _3->setBounds (150, 75, 75, 25);

    _4.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_4.get());
    _4->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _4->setJustificationType (Justification::centredLeft);
    _4->setEditable (false, false, false);
    _4->setColour (TextEditor::textColourId, Colours::black);
    _4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _4->setBounds (225, 75, 75, 25);

    _5.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_5.get());
    _5->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _5->setJustificationType (Justification::centredLeft);
    _5->setEditable (false, false, false);
    _5->setColour (TextEditor::textColourId, Colours::black);
    _5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _5->setBounds (300, 75, 75, 25);

    _6.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_6.get());
    _6->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _6->setJustificationType (Justification::centredLeft);
    _6->setEditable (false, false, false);
    _6->setColour (TextEditor::textColourId, Colours::black);
    _6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _6->setBounds (375, 75, 75, 25);

    _7.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_7.get());
    _7->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _7->setJustificationType (Justification::centredLeft);
    _7->setEditable (false, false, false);
    _7->setColour (TextEditor::textColourId, Colours::black);
    _7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _7->setBounds (450, 75, 75, 25);

    _8.reset (new Label ("new label",
                         TRANS("label text")));
    addAndMakeVisible (_8.get());
    _8->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    _8->setJustificationType (Justification::centredLeft);
    _8->setEditable (false, false, false);
    _8->setColour (TextEditor::textColourId, Colours::black);
    _8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    _8->setBounds (525, 75, 75, 25);

    a.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (a.get());
    a->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    a->setJustificationType (Justification::centredLeft);
    a->setEditable (false, false, false);
    a->setColour (TextEditor::textColourId, Colours::black);
    a->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    a->setBounds (0, 175, 75, 25);

    s.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (s.get());
    s->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    s->setJustificationType (Justification::centredLeft);
    s->setEditable (false, false, false);
    s->setColour (TextEditor::textColourId, Colours::black);
    s->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    s->setBounds (75, 175, 75, 25);

    d.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (d.get());
    d->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    d->setJustificationType (Justification::centredLeft);
    d->setEditable (false, false, false);
    d->setColour (TextEditor::textColourId, Colours::black);
    d->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    d->setBounds (150, 175, 75, 25);

    f.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (f.get());
    f->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    f->setJustificationType (Justification::centredLeft);
    f->setEditable (false, false, false);
    f->setColour (TextEditor::textColourId, Colours::black);
    f->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    f->setBounds (225, 175, 75, 25);

    g.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (g.get());
    g->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    g->setJustificationType (Justification::centredLeft);
    g->setEditable (false, false, false);
    g->setColour (TextEditor::textColourId, Colours::black);
    g->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    g->setBounds (300, 175, 75, 25);

    h.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (h.get());
    h->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    h->setJustificationType (Justification::centredLeft);
    h->setEditable (false, false, false);
    h->setColour (TextEditor::textColourId, Colours::black);
    h->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    h->setBounds (375, 175, 75, 25);

    j.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (j.get());
    j->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    j->setJustificationType (Justification::centredLeft);
    j->setEditable (false, false, false);
    j->setColour (TextEditor::textColourId, Colours::black);
    j->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    j->setBounds (450, 175, 75, 25);

    k.reset (new Label ("new label",
                        TRANS("label text")));
    addAndMakeVisible (k.get());
    k->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    k->setJustificationType (Justification::centredLeft);
    k->setEditable (false, false, false);
    k->setColour (TextEditor::textColourId, Colours::black);
    k->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    k->setBounds (525, 175, 75, 25);

    mode.reset (new ComboBox ("new combo box"));
    addAndMakeVisible (mode.get());
    mode->setEditableText (false);
    mode->setJustificationType (Justification::centredLeft);
    mode->setTextWhenNothingSelected (String());
    mode->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    mode->addItem (TRANS("min"), 1);
    mode->addItem (TRANS("maj"), 2);
    mode->addItem (TRANS("xxx"), 3);
    mode->addListener (this);

    mode->setBounds (600, 125, 75, 25);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

KEY::~KEY()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    textButton = nullptr;
    _1 = nullptr;
    _2 = nullptr;
    _3 = nullptr;
    _4 = nullptr;
    _5 = nullptr;
    _6 = nullptr;
    _7 = nullptr;
    _8 = nullptr;
    a = nullptr;
    s = nullptr;
    d = nullptr;
    f = nullptr;
    g = nullptr;
    h = nullptr;
    j = nullptr;
    k = nullptr;
    mode = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void KEY::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        int x = 0, y = 50, width = 600, height = 200;
        Colour fillColour = Colour (0xff16650a);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillRect (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void KEY::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void KEY::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton.get())
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void KEY::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == mode.get())
    {
        //[UserComboBoxCode_mode] -- add your combo box handling code here..
        //[/UserComboBoxCode_mode]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="KEY" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44">
    <RECT pos="0 50 600 200" fill="solid: ff16650a" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="d351076bc58a9359" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="0 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7ba576d8628103b9" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="75 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="976c9f0c0b641a17" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="150 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="281eca7c285abd5e" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="225 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="68a02225f6c4f4af" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="300 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cef5c67f0bbe32e3" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="375 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fabb7a2cee90dbf8" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="450 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f34cf65d3c178d6a" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="525 25 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="50adf820fe9b6db7" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 0 75 25" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="4a20825c888f2f6c" memberName="_1" virtualName=""
         explicitFocusOrder="0" pos="0 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="621eeeb892e57fa4" memberName="_2" virtualName=""
         explicitFocusOrder="0" pos="75 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="dd49d9c165251b7d" memberName="_3" virtualName=""
         explicitFocusOrder="0" pos="150 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4fc0a2416e158c3f" memberName="_4" virtualName=""
         explicitFocusOrder="0" pos="225 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="421bca98a3e3fb3a" memberName="_5" virtualName=""
         explicitFocusOrder="0" pos="300 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="339eb5aa2c2de0c0" memberName="_6" virtualName=""
         explicitFocusOrder="0" pos="375 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="228b869ba6d4b26a" memberName="_7" virtualName=""
         explicitFocusOrder="0" pos="450 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9eb348a4269b2052" memberName="_8" virtualName=""
         explicitFocusOrder="0" pos="525 75 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8f0c2238c9a4fb88" memberName="a" virtualName=""
         explicitFocusOrder="0" pos="0 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1cdd22a92834ce61" memberName="s" virtualName=""
         explicitFocusOrder="0" pos="75 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c44bfe1b9d47438e" memberName="d" virtualName=""
         explicitFocusOrder="0" pos="150 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e4e4cb5624f87d0d" memberName="f" virtualName=""
         explicitFocusOrder="0" pos="225 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="445a609e267661db" memberName="g" virtualName=""
         explicitFocusOrder="0" pos="300 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="170e6f1454c3ef75" memberName="h" virtualName=""
         explicitFocusOrder="0" pos="375 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="144293346f60f6bb" memberName="j" virtualName=""
         explicitFocusOrder="0" pos="450 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3b09103c99335a53" memberName="k" virtualName=""
         explicitFocusOrder="0" pos="525 175 75 25" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15.0"
         kerning="0.0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="new combo box" id="72f666dcc1c826aa" memberName="mode"
            virtualName="" explicitFocusOrder="0" pos="600 125 75 25" editable="0"
            layout="33" items="min&#10;maj&#10;xxx" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

