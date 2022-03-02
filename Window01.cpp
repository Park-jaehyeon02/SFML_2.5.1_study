#include <SFML/Window.hpp>

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    unsigned long long n = 0;
    // 윈도우 창이 열여있을때까지 윈도우를 유지
    while (window.isOpen())
    {
        //loop문의 반복 방지를 위해 모든 윈도우의 이벤트를 체크한다.
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            printf("%u\n",n);
            n++;
            // 윈도우 창이 닫히는 이벤트가 발생하면 윈도우 창을 닫는다.
            if (event.type == sf::Event::Closed)
                window.close();
            
        }
        
    }

    return 0;
}