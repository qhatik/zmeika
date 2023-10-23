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

    // �������� �����������
    snake& operator=(const snake& other);

    // �������� ���������
    bool operator==(const snake& other) const;

    // �������� �����
    friend std::istream& operator>>(std::istream& is, snake& s);

    // �������� ������
    friend std::ostream& operator<<(std::ostream& os, const snake& s);
};
