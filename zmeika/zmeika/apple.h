#pragma once
#include <ios>
class apple
{
	int amount;

public:
	apple();
	apple(int initialAmount);
	apple(const apple& other);
	
    // Оператор копирования
    apple& operator=(const apple& other);

    // Оператор сравнения
    bool operator==(const apple& other) const;

    // Оператор ввода
    friend std::istream& operator>>(std::istream& is, apple& a);

    // Оператор вывода
    friend std::ostream& operator<<(std::ostream& os, const apple& a);

};