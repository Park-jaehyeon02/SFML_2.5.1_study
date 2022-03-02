#include <SFML/Window.hpp>

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    unsigned long long n = 0;
    // ������ â�� �������������� �����츦 ����
    while (window.isOpen())
    {
        //loop���� �ݺ� ������ ���� ��� �������� �̺�Ʈ�� üũ�Ѵ�.
        
        sf::Event event;
        while (window.pollEvent(event))
        {
            printf("%u\n",n);
            n++;
            // ������ â�� ������ �̺�Ʈ�� �߻��ϸ� ������ â�� �ݴ´�.
            if (event.type == sf::Event::Closed)
                window.close();
            
        }
        
    }

    return 0;
}