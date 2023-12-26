#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML template");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Yellow);

    sf::Font font;
    font.loadFromFile("res/fonts/ComicSansMS3.ttf");
    sf::Text text("Hello World", font, 15);
    text.setFillColor(sf::Color::Blue);

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
        window.draw(text);
        window.display();
    }

    return 0;
}