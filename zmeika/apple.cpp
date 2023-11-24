#include "apple.h"
#include <iostream>


apple::apple() {
    
}
apple::apple(int initialAmount) {
    amount = initialAmount;
}
apple::apple(const apple& other) {
    amount = other.amount;
}

// Оператор копирования
apple& apple::operator=(const apple& other) {
    if (this != &other) {
        amount = other.amount;
    }
    return *this;
}

// Оператор сравнения
bool apple::operator==(const apple& other) const {
    return amount == other.amount;
}

// Оператор ввода
std::istream& operator>>(std::istream& in, apple& a) {
    in >> a.amount;
    return in;
}

// Оператор вывода
std::ostream& operator<<(std::ostream& out, const apple& a) {
    out << "Amount: " << a.amount;
    return out;
}