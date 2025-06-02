#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/utils.hpp>
#include <texts/TextKeysAndLanguages.hpp> // for T_LED_ON, etc.
#include <touchgfx/TypedText.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::turn_on()
{
    touchgfx_printf("led on\n");

    // 切換圖示
    img_on.setVisible(true);
    img_off.setVisible(false);

    // 更新文字
    text_status.setTypedText(TypedText(T_LED_ON));
    text_status.invalidate();

    // 刷新圖片
    img_on.invalidate();
    img_off.invalidate();
}

void Screen1View::turn_off()
{
    touchgfx_printf("led off\n");

    // 切換圖示
    img_on.setVisible(false);
    img_off.setVisible(true);

    // 更新文字
    text_status.setTypedText(TypedText(T_LED_OFF));
    text_status.invalidate();

    // 刷新圖片
    img_on.invalidate();
    img_off.invalidate();
}


