#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML template");
    // shape example
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Blue);

    // text example
    sf::Font font;
    font.loadFromFile("res/fonts/ComicSansMS3.ttf");
    sf::Text text("Hello World", font, 15);
    text.setFillColor(sf::Color::White);

    // image example
    sf::Texture texture;
    texture.loadFromFile("res/images/duck.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.scale(0.25, 0.25);
    // sprite.setPosition(100, 100);


    // main loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(sprite);
        window.draw(text);
        window.display();
    }

    return 0;
}