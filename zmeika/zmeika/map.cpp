#include "map.h"
#include <iostream>
map::map() {
}

map::map(int initialLength, int initialHeight, int initialFields[MAX_LENGTH][MAX_HEIGHT]) {
    length = initialLength;
    height = initialHeight;
}

map::map(const map& other) {
    length = other.length;
    height = other.height;
}

// Оператор копирования
map& map::operator=(const map& other) {
    if (this != &other) {
        length = other.length;
        height = other.height;
    }
    return *this;
}

// Оператор сравнения
bool map::operator==(const map& other) const {
    return length == other.length && height == other.height;
}

// Оператор ввода
std::istream& operator>>(std::istream& in, map& m) {
    in >> m.length >> m.height;
    return in;
}

// Оператор вывода
std::ostream& operator<<(std::ostream& out, const map& m) {
    out << "Length: " << m.length << ", Height: " << m.height;
    return out;
}