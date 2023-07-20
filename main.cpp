#include <SFML/Graphics.hpp>

int WinMain()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Dinosaur vs Wolves");

    // 创建恐龙的精灵对象6
    sf::Texture dinoTexture;
    dinoTexture.loadFromFile("dino.jpg");
    sf::Sprite dinoSprite(dinoTexture);
    dinoSprite.setPosition(400, 300);

    // 创建狼的精灵对象
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

        // 处理恐龙的移动逻辑
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            dinoSprite.move(-5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            dinoSprite.move(5, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            dinoSprite.move(0, -5);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            dinoSprite.move(0, 5);

        // 清空窗口
        window.clear();

        // 绘制恐龙和狼的精灵对象
        window.draw(dinoSprite);
        window.draw(wolfSprite);

        // 显示窗口内容
        window.display();
    }

    return 0;
}
