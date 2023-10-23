#pragma once
#include <ios>

class snake
{
	float speed;
	int size;
	bool dead;

public:
	snake();

    snake(float initialSpeed, int initialSize, bool isDead);

    snake(const snake& other);

    // Оператор копирования
    snake& operator=(const snake& other);

    // Оператор сравнения
    bool operator==(const snake& other) const;

    // Оператор ввода
    friend std::istream& operator>>(std::istream& is, snake& s);

    // Оператор вывода
    friend std::ostream& operator<<(std::ostream& os, const snake& s);
};
