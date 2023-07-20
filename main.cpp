#include <SFML/Graphics.hpp>

int WinMain()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Dinosaur vs Wolves");

    // ���������ľ������6
    sf::Texture dinoTexture;
    dinoTexture.loadFromFile("dino.jpg");
    sf::Sprite dinoSprite(dinoTexture);
    dinoSprite.setPosition(400, 300);

    // �����ǵľ������
    sf::Texture wolfTexture;
    wolfTexture.loadFromFile("wolf.jpg");
    sf::Sprite wolfSprite(wolfTexture);
    wolfSprite.setPosition(100, 100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // ����������ƶ��߼�
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            dinoSprite.move(-5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            dinoSprite.move(5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            dinoSprite.move(0, -5);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            dinoSprite.move(0, 5);

        // ��մ���
        window.clear();

        // ���ƿ������ǵľ������
        window.draw(dinoSprite);
        window.draw(wolfSprite);

        // ��ʾ��������
        window.display();
    }

    return 0;
}
