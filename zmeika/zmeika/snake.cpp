#include "snake.h"
#include <iostream>

snake::snake()
{

}
snake::snake(float initialSpeed, int initialSize, bool isDead) {
    speed = initialSpeed;
    size = initialSize;
    dead = isDead;
}

snake::snake(const snake& other) {
    speed = other.speed;
    size = other.size;
    dead = other.dead;
}

// Оператор копирования
snake& snake::operator=(const snake& other) {
    if (this != &other) {
        speed = other.speed;
        size = other.size;
        dead = other.dead;
    }
    return *this;
}

// Оператор сравнения
bool snake::operator==(const snake& other) const {
    return speed == other.speed && size == other.size && dead == other.dead;
}

// Оператор ввода
std::istream& operator>>(std::istream& is, snake& s) {
    is >> s.speed >> s.size >> s.dead;
    return is;
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const snake& s) {
    os << "Speed: " << s.speed << ", Size: " << s.size << ", Dead: " << s.dead;
    return os;
}