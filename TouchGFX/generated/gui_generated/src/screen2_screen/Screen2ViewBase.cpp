/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen2ViewBase::Screen2ViewBase() :
    buttonCallback(this, &Screen2ViewBase::buttonCallbackHandler)
{

    swipeContainer1.setXY(0, 0);
    swipeContainer1.setPageIndicatorBitmaps(touchgfx::Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_NORMAL_ID), touchgfx::Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_HIGHLIGHT_ID));
    swipeContainer1.setPageIndicatorXY(225, 248);
    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);

    swipeContainer1Page2.setWidth(480);
    swipeContainer1Page2.setHeight(272);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(223, 242, 239));
    swipeContainer1Page2.add(box1);

    buttonWithLabel3.setXY(282, 188);
    buttonWithLabel3.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID));
    buttonWithLabel3.setLabelText(touchgfx::TypedText(T_SINGLEUSEID21));
    buttonWithLabel3.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel3.setAction(buttonCallback);
    swipeContainer1Page2.add(buttonWithLabel3);

    textArea1_1.setXY(34, 133);
    textArea1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID17));
    swipeContainer1Page2.add(textArea1_1);

    textArea1.setXY(74, 71);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID16));
    swipeContainer1Page2.add(textArea1);

    textProgress_freq.setXY(324, 133);
    textProgress_freq.setProgressIndicatorPosition(0, 0, 84, 34);
    textProgress_freq.setRange(0, 100);
    textProgress_freq.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textProgress_freq.setNumberOfDecimals(0);
    textProgress_freq.setTypedText(touchgfx::TypedText(T_SINGLEUSEID15));
    textProgress_freq.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_TEXT_PROGRESS_BG_SQUARE_ID));
    textProgress_freq.setValue(20);
    swipeContainer1Page2.add(textProgress_freq);

    buttonDecrementFreq.setXY(266, 120);
    buttonDecrementFreq.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonDecrementFreq.setLabelText(touchgfx::TypedText(T_SINGLEUSEID14));
    buttonDecrementFreq.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonDecrementFreq.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonDecrementFreq.setAction(buttonCallback);
    swipeContainer1Page2.add(buttonDecrementFreq);

    buttonIncrementFreq.setXY(408, 120);
    buttonIncrementFreq.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonIncrementFreq.setLabelText(touchgfx::TypedText(T_SINGLEUSEID13));
    buttonIncrementFreq.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonIncrementFreq.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonIncrementFreq.setAction(buttonCallback);
    swipeContainer1Page2.add(buttonIncrementFreq);

    textProgress_peep.setXY(326, 71);
    textProgress_peep.setProgressIndicatorPosition(0, 0, 84, 34);
    textProgress_peep.setRange(0, 100);
    textProgress_peep.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textProgress_peep.setNumberOfDecimals(0);
    textProgress_peep.setTypedText(touchgfx::TypedText(T_SINGLEUSEID12));
    textProgress_peep.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_TEXT_PROGRESS_BG_SQUARE_ID));
    textProgress_peep.setValue(5);
    swipeContainer1Page2.add(textProgress_peep);

    buttonDecrementPEEP.setXY(266, 58);
    buttonDecrementPEEP.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonDecrementPEEP.setLabelText(touchgfx::TypedText(T_SINGLEUSEID11));
    buttonDecrementPEEP.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonDecrementPEEP.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonDecrementPEEP.setAction(buttonCallback);
    swipeContainer1Page2.add(buttonDecrementPEEP);

    buttonIncrementPEEP.setXY(410, 58);
    buttonIncrementPEEP.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    buttonIncrementPEEP.setLabelText(touchgfx::TypedText(T_SINGLEUSEID10));
    buttonIncrementPEEP.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonIncrementPEEP.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonIncrementPEEP.setAction(buttonCallback);
    swipeContainer1Page2.add(buttonIncrementPEEP);

    box2.setPosition(0, 0, 480, 40);
    box2.setColor(touchgfx::Color::getColorFrom24BitRGB(49, 61, 79));
    swipeContainer1Page2.add(box2);

    box2_2.setPosition(0, 0, 480, 40);
    box2_2.setColor(touchgfx::Color::getColorFrom24BitRGB(49, 61, 79));
    swipeContainer1Page2.add(box2_2);

    textArea2.setXY(34, 9);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(176, 172, 172));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID18));
    swipeContainer1Page2.add(textArea2);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_ICONS_SETTINGS_32_ID));
    scalableImage1.setPosition(9, 11, 17, 17);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    swipeContainer1Page2.add(scalableImage1);
    swipeContainer1.add(swipeContainer1Page2);

    swipeContainer1Page3.setWidth(480);
    swipeContainer1Page3.setHeight(272);

    box1_1.setPosition(0, 0, 480, 272);
    box1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(223, 242, 239));
    swipeContainer1Page3.add(box1_1);

    box2_1.setPosition(0, 0, 480, 40);
    box2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(49, 61, 79));
    swipeContainer1Page3.add(box2_1);

    textArea2_1.setXY(34, 10);
    textArea2_1.setColor(touchgfx::Color::getColorFrom24BitRGB(176, 172, 172));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));
    swipeContainer1Page3.add(textArea2_1);

    scalableImage1_1.setBitmap(touchgfx::Bitmap(BITMAP_DARK_ICONS_ALERT_32_ID));
    scalableImage1_1.setPosition(9, 11, 17, 17);
    scalableImage1_1.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    swipeContainer1Page3.add(scalableImage1_1);

    scalableImage2.setBitmap(touchgfx::Bitmap(BITMAP_IMG_225476_ID));
    scalableImage2.setPosition(26, 68, 70, 65);
    scalableImage2.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    swipeContainer1Page3.add(scalableImage2);

    image1.setXY(160, 82);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_KLTXKSHB_ID));
    swipeContainer1Page3.add(image1);
    swipeContainer1.add(swipeContainer1Page3);
    swipeContainer1.setSelectedPage(1);

    modalWindow1.setBackground(touchgfx::BitmapId(BITMAP_BLUE_TEXTFIELDS_TEXT_FIELD_FULL_480X272PX_ID), 22, 46);
    modalWindow1.setShadeColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    modalWindow1.setShadeAlpha(150);
    modalWindow1.hide();

    buttonWithLabel4.setXY(14, 112);
    buttonWithLabel4.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel4.setLabelText(touchgfx::TypedText(T_SINGLEUSEID22));
    buttonWithLabel4.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4.setAction(buttonCallback);
    modalWindow1.add(buttonWithLabel4);

    buttonWithLabel4_1.setXY(250, 112);
    buttonWithLabel4_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel4_1.setLabelText(touchgfx::TypedText(T_SINGLEUSEID23));
    buttonWithLabel4_1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4_1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel4_1.setAction(buttonCallback);
    modalWindow1.add(buttonWithLabel4_1);

    textArea3.setXY(18, 6);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID24));
    modalWindow1.add(textArea3);

    textArea1_2.setPosition(18, 43, 203, 21);
    textArea1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_2.setLinespacing(0);
    Unicode::snprintf(textArea1_2Buffer, TEXTAREA1_2_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID27).getText());
    textArea1_2.setWildcard(textArea1_2Buffer);
    textArea1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID25));
    modalWindow1.add(textArea1_2);

    textArea1_1_1.setPosition(18, 73, 231, 28);
    textArea1_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1_1_1.setLinespacing(0);
    Unicode::snprintf(textArea1_1_1Buffer, TEXTAREA1_1_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID28).getText());
    textArea1_1_1.setWildcard(textArea1_1_1Buffer);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID26));
    modalWindow1.add(textArea1_1_1);

    add(swipeContainer1);
    add(modalWindow1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel3)
    {
        //Interaction2
        //When buttonWithLabel3 clicked show modalWindow1
        //Show modalWindow1
        modalWindow1.setVisible(true);
        modalWindow1.invalidate();
    }
    else if (&src == &buttonDecrementFreq)
    {
        //Interaction8
        //When buttonDecrementFreq clicked call virtual function
        //Call decrementFreq
        decrementFreq();
    }
    else if (&src == &buttonIncrementFreq)
    {
        //Interaction7
        //When buttonIncrementFreq clicked call virtual function
        //Call incrementFreq
        incrementFreq();
    }
    else if (&src == &buttonDecrementPEEP)
    {
        //Interaction6
        //When buttonDecrementPEEP clicked call virtual function
        //Call decrementPEEP
        decrementPEEP();
    }
    else if (&src == &buttonIncrementPEEP)
    {
        //Interaction5
        //When buttonIncrementPEEP clicked call virtual function
        //Call incrementPEEP
        incrementPEEP();
    }
    else if (&src == &buttonWithLabel4)
    {
        //Interaction3
        //When buttonWithLabel4 clicked hide modalWindow1
        //Hide modalWindow1
        modalWindow1.setVisible(false);
        modalWindow1.invalidate();
    }
    else if (&src == &buttonWithLabel4_1)
    {
        //Interaction4
        //When buttonWithLabel4_1 clicked hide modalWindow1
        //Hide modalWindow1
        modalWindow1.setVisible(false);
        modalWindow1.invalidate();
    }
}