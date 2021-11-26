#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include <Header.hpp>






using namespace std::chrono_literals;
int main()
{
    srand(time(0));
    int N;
    std::cin >> N;
    sf::RenderWindow window(sf::VideoMode(800, 600), L"Win");
    std::vector<mt::Circle* > circles;


  

    for (int i = 30; i <= 800; i += 800 / N) {
        circles.push_back(new mt::Circle(i, 570, 30, rand() % 10 +1));
    }


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for (const auto& circle : circles)
            circle->Move();


        window.clear();

        for (const auto& circle :circles)
        window.draw(*circle->Get());



        window.display();

        std::this_thread::sleep_for(40ms);
    }

    for (const auto& circle : circles)
        delete circle;
    circles.clear();
    return 0;
}