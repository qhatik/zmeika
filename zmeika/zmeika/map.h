#pragma once 
#include <ios>
#include <vector>

class map
{
	int length;
	int height;

    std::vector<std::vector<int>> fields;

public:
	map();

    map(int initialLength, int initialHeight, const std::vector<std::vector<int>>& initialFields);

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