#include <SFML/Window.hpp>
#include <iostream>
using namespace std;

int main(void)
{
    sf::Window window(sf::VideoMode(800, 600), "My window",sf::Style::Default);


    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event))
        {
            //Resize Window Arlam
            if (event.type == sf::Event::Resized)
            {
                cout << "new width: " << event.size.width << endl;
                cout << "new height: " << event.size.height << endl;
            }
            //Focus on the window
            if (event.type == sf::Event::LostFocus)
                cout << "Lost Focus" << endl;

            if (event.type == sf::Event::GainedFocus)
                cout << "Get Focus" << endl;

            //Text input
            if (event.type == sf::Event::TextEntered)
            {
                if (event.text.unicode < 128) //not output unwared key val
                    cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << endl;
            }
            /*
            Many programmers use the KeyPressed event to get user input, and start to implement crazy algorithms that try to interpret all the possible key combinations to produce correct characters. 
            Don't do that!
            */

            //system key
            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Enter)
                {
                    cout << "the escape key was pressed" << endl;
                    cout << "control:" << event.key.control << endl;
                    cout << "alt:" << event.key.alt << endl;
                    cout << "shift:" << event.key.shift << endl;
                    cout << "system:" << event.key.system << endl;
                }
            }

            //Mouse Event
            if (event.type == sf::Event::MouseWheelScrolled)
            {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                    cout << "wheel type: vertical" << endl;
                else if (event.mouseWheelScroll.wheel == sf::Mouse::HorizontalWheel)
                    cout << "wheel type: horizontal" << endl;
                else
                    cout << "wheel type: unknown" << endl;
                cout << "wheel movement: " << event.mouseWheelScroll.delta << endl;
                cout << "mouse x: " << event.mouseWheelScroll.x << endl;
                cout << "mouse y: " << event.mouseWheelScroll.y << endl;
            }

            if (event.type == sf::Event::MouseButtonPressed)
            {
                if (event.mouseButton.button == sf::Mouse::Right)
                {
                    cout << "the right button was pressed" << endl;
                    cout << "mouse x: " << event.mouseButton.x << endl;
                    cout << "mouse y: " << event.mouseButton.y << endl;
                }
            }

            if (event.type == sf::Event::MouseMoved)
            {
                cout << "new mouse x: " << event.mouseMove.x << endl;
                cout << "new mouse y: " << event.mouseMove.y << endl;
            }

            if (event.type == sf::Event::MouseEntered)
                cout << "the mouse cursor has entered the window" << endl;

            if (event.type == sf::Event::MouseLeft)
                cout << "the mouse cursor has left the window" << endl;

            /*
            On the Learn page show Joystick code but i don't add the code (usually i'm not use joystick 
            */

            //Window closed
            if (event.type == sf::Event::Closed)
                window.close();

        }
    }

	return 0;
}