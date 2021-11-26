#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <vector>
#include <Header.hpp>



namespace mt {
    Circle::Circle(int x, int y, float r, float v) {
        m_x = x;
        m_y = y;
        m_r = r;
        m_v = v;
        m_shape = new sf::CircleShape(r);
        m_shape->setOrigin(m_r, m_r);
        m_shape->setFillColor(sf::Color::Red);
        m_shape->setPosition(m_x, m_y);
    }
    Circle::~Circle() {
        delete m_shape;
    }

    void Circle::Move() {
        m_y -= m_v;
        if (m_y > 29) {
            m_shape->setPosition(m_x, m_y);
        }
    }



}