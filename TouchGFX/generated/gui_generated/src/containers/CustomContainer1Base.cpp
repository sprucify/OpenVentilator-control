/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

CustomContainer1Base::CustomContainer1Base() :
    trigger1Callback(0)
{
    setWidth(480);
    setHeight(272);
    swipeContainer1.setXY(0, 0);
    swipeContainer1.setPageIndicatorBitmaps(touchgfx::Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_NORMAL_ID), touchgfx::Bitmap(BITMAP_BLUE_PAGEINDICATOR_DOT_INDICATOR_SMALL_HIGHLIGHT_ID));
    swipeContainer1.setPageIndicatorXY(225, 252);
    swipeContainer1.setSwipeCutoff(50);
    swipeContainer1.setEndSwipeElasticWidth(50);

    swipeContainer1Page3.setWidth(480);
    swipeContainer1Page3.setHeight(272);
    swipeContainer1.add(swipeContainer1Page3);

    swipeContainer1Page1.setWidth(480);
    swipeContainer1Page1.setHeight(272);

    textArea3_1_1.setXY(399, 88);
    textArea3_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3_1_1.setLinespacing(0);
    textArea3_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID8));
    swipeContainer1Page1.add(textArea3_1_1);

    textArea3_2.setXY(292, 89);
    textArea3_2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3_2.setLinespacing(0);
    textArea3_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID7));
    swipeContainer1Page1.add(textArea3_2);

    button1_1_1.setXY(385, 85);
    button1_1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    swipeContainer1Page1.add(button1_1_1);

    button1_2.setXY(271, 85);
    button1_2.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    swipeContainer1Page1.add(button1_2);

    textProgress1_1.setXY(331, 105);
    textProgress1_1.setProgressIndicatorPosition(0, 0, 54, 20);
    textProgress1_1.setRange(0, 100);
    textProgress1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textProgress1_1.setNumberOfDecimals(0);
    textProgress1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID6));
    textProgress1_1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_TEXT_PROGRESS_BG_ROUND_ID));
    textProgress1_1.setValue(20);
    swipeContainer1Page1.add(textProgress1_1);

    textArea3_1.setXY(399, 25);
    textArea3_1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3_1.setLinespacing(0);
    textArea3_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));
    swipeContainer1Page1.add(textArea3_1);

    textArea3.setXY(292, 26);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID4));
    swipeContainer1Page1.add(textArea3);

    button1_1.setXY(385, 22);
    button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    swipeContainer1Page1.add(button1_1);

    button1.setXY(271, 22);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    swipeContainer1Page1.add(button1);

    textProgress1.setXY(331, 40);
    textProgress1.setProgressIndicatorPosition(0, 0, 54, 20);
    textProgress1.setRange(0, 100);
    textProgress1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textProgress1.setNumberOfDecimals(0);
    textProgress1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));
    textProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_TEXT_PROGRESS_BG_SQUARE_ID));
    textProgress1.setValue(5);
    swipeContainer1Page1.add(textProgress1);

    textArea2.setXY(33, 99);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));
    swipeContainer1Page1.add(textArea2);

    textArea1.setXY(31, 40);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    swipeContainer1Page1.add(textArea1);
    swipeContainer1.add(swipeContainer1Page1);
    swipeContainer1.setSelectedPage(0);

    add(swipeContainer1);
}

void CustomContainer1Base::initialize()
{

}

void CustomContainer1Base::action1()
{

}
