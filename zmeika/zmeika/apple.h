#pragma once
#include <ios>
class apple
{
	int amount;

public:
	apple();
	apple(int initialAmount);
	apple(const apple& other);
	
    // �������� �����������
    apple& operator=(const apple& other);

    // �������� ���������
    bool operator==(const apple& other) const;

    // �������� �����
    friend std::istream& operator>>(std::istream& is, apple& a);

    // �������� ������
    friend std::ostream& operator<<(std::ostream& os, const apple& a);

};