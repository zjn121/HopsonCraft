#include "Function_Toggle_Key.h"

Toggle::Toggle(sf::Keyboard::Key key, sf::Time delay)
:   m_toggleKey     (key)
,   m_toggleDelay   (delay)
{

}

void Toggle::checkInput()
{
    if (m_toggleDelay.asMilliseconds() <
        m_toggleTimer.getElapsedTime().asMilliseconds())
    {
        if (sf::Keyboard::isKeyPressed(m_toggleKey))
        {
            m_isToogleOn = !m_isToogleOn;
            m_toggleTimer.restart();
        }
    }
}
