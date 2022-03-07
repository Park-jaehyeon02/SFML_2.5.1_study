#include <SFML/Window.hpp>
#include <stdio.h>

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    unsigned long long n = 0;

    // ������ â�� �������������� �����츦 ����
    while (window.isOpen())
    {
        
        //loop���� �ݺ� �Ǵ� ���� ��� �������� �̺�Ʈ�� üũ�Ѵ�.
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            
            printf("%llu\n",n);
            n++;

            // ������ â�� ������ �̺�Ʈ�� �߻��ϸ� ������ â�� �ݴ´�.
            if (event.type == sf::Event::Closed)
                window.close();
        
        }
    }

    return 0;
}