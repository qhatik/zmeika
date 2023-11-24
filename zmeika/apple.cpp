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

// �������� �����������
apple& apple::operator=(const apple& other) {
    if (this != &other) {
        amount = other.amount;
    }
    return *this;
}

// �������� ���������
bool apple::operator==(const apple& other) const {
    return amount == other.amount;
}

// �������� �����
std::istream& operator>>(std::istream& in, apple& a) {
    in >> a.amount;
    return in;
}

// �������� ������
std::ostream& operator<<(std::ostream& out, const apple& a) {
    out << "Amount: " << a.amount;
    return out;
}