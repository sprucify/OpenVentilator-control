#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();

    
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::incrementPEEP()
{
    textProgress_peep.setValue(textProgress_peep.getValue()+1);
    updateModalText();
}

void Screen2View::decrementPEEP()
{
    textProgress_peep.setValue(textProgress_peep.getValue() - 1);
    updateModalText();
}

void Screen2View::incrementFreq()
{
    textProgress_freq.setValue(textProgress_freq.getValue() + 1);
    updateModalText();
}

void Screen2View::decrementFreq()
{
    textProgress_freq.setValue(textProgress_freq.getValue() - 1);
    updateModalText();
}

void Screen2View::updateModalText()
{
    Unicode::snprintf(textArea1_2Buffer, 10, "%d", textProgress_peep.getValue());
    textArea1_2.invalidate();

    Unicode::snprintf(textArea1_1_1Buffer, 10, "%d", textProgress_freq.getValue());
    textArea1_1_1.invalidate();

}