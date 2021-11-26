#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>

namespace mt {
    class Circle {
    public:

        Circle(int x, int y, float r, float v);

        ~Circle();

        sf::CircleShape* Get() {
            return m_shape;
        }

        void Move();


    private:
        int m_x, m_y;
        float m_r;
        float m_v;
        sf::CircleShape* m_shape;
    };
}

