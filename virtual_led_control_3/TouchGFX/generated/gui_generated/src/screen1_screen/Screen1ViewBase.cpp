/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    buttonCallback(this, &Screen1ViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    img_on.setXY(96, 49);
    img_on.setBitmap(touchgfx::Bitmap(BITMAP_LIGHT_ON_ID));
    add(img_on);

    img_off.setXY(96, 49);
    img_off.setBitmap(touchgfx::Bitmap(BITMAP_LIGHT_OFF_ID));
    add(img_off);

    text_status.setXY(35, 126);
    text_status.setColor(touchgfx::Color::getColorFromRGB(3, 24, 255));
    text_status.setLinespacing(0);
    text_status.setTypedText(touchgfx::TypedText(T___SINGLEUSE_SW0Q));
    add(text_status);

    btn_on.setXY(0, 220);
    btn_on.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTION_ID));
    btn_on.setLabelText(touchgfx::TypedText(T___SINGLEUSE_XD2Q));
    btn_on.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_on.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_on.setAction(buttonCallback);
    add(btn_on);

    btn_off.setXY(130, 220);
    btn_off.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_TINY_ROUND_ACTION_ID));
    btn_off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_5Q9B));
    btn_off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btn_off.setAction(buttonCallback);
    add(btn_off);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btn_on)
    {
        //turn_on
        //When btn_on clicked call virtual function
        //Call turn_on
        turn_on();
    }
    if (&src == &btn_off)
    {
        //turn_off
        //When btn_off clicked call virtual function
        //Call turn_off
        turn_off();
    }
}
