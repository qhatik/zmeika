#include "map.h"
#include <iostream>
map::map() {
}

map::map(int initialLength, int initialHeight, const std::vector<std::vector<int>>& initialFields) {
    length = initialLength;
    height = initialHeight;
}

map::map(const map& other) : length(other.length), height(other.height), fields(other.fields) {
}

// Оператор копирования
map& map::operator=(const map& other) {
    if (this != &other) {
        length = other.length;
        height = other.height;
        fields = other.fields;
    }
    return *this;
}

// Оператор сравнения
bool map::operator==(const map& other) const {
    return length == other.length && height == other.height && fields == other.fields;
}

// Оператор ввода
std::istream& operator>>(std::istream& in, map& m) {
    in >> m.length >> m.height;

    m.fields.resize(m.length, std::vector<int>(m.height, 0));

        for (int i = 0; i < m.length; ++i) {
            for (int j = 0; j < m.height; ++j) {
            in >> m.fields[i][j];
            }
        }

        return in;
}

// Оператор вывода
std::ostream& operator<<(std::ostream& out, const map& m) {
    out << "Length: " << m.length << ", Height: " << m.height << std::endl;

    for (int i = 0; i < m.length; ++i) {
        for (int j = 0; j < m.height; ++j) {
            out << m.fields[i][j] << " ";
        }
        out << std::endl;
    }

    return out;
}