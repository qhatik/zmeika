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

    // �������� �����������
    map& operator=(const map& other);

    // �������� ���������
    bool operator==(const map& other) const;

    // �������� �����
    friend std::istream& operator>>(std::istream& is, map& m);

    // �������� ������
    friend std::ostream& operator<<(std::ostream& os, const map& m);

};