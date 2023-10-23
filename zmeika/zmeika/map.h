#pragma once 
#include <ios>
const int MAX_LENGTH = 100;
const int MAX_HEIGHT = 100;

class map
{
	int length;
	int height;

	int fields[MAX_LENGTH][MAX_HEIGHT];

public:
	map();

    map(int initialLength, int initialHeight, int initialFields[MAX_LENGTH][MAX_HEIGHT]);

    map(const map& other);

    // Оператор копирования
    map& operator=(const map& other);

    // Оператор сравнения
    bool operator==(const map& other) const;

    // Оператор ввода
    friend std::istream& operator>>(std::istream& is, map& m);

    // Оператор вывода
    friend std::ostream& operator<<(std::ostream& os, const map& m);

};