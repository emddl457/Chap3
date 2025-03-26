#include <iostream>
#include "3-10_2.h"
using namespace std;

// (1)������ ����+������ �� ���Ͽ� ��� �ۼ��Ͽ�����!
// �̹����� ����� ������ �и��Ͽ� �ۼ��ϹǷ� (1)���� �ٸ��� �ۼ��Ѵ�.
// (2)�� ����(���)�� ����(.cpp)�� ������ ������, �Ʒ�ó�� 'Ŭ�����̸�::�Լ��̸�' ���·� �����ؾ� �Ѵ�.
void Add::setValue(int x, int y) { a = x; b = y; } // �� ���� ���� ��� ���� a, b�� ����!
int Add::calculate() { return a + b; } // �� ������ ���� ��ȯ!

void Sub::setValue(int x, int y) { a = x; b = y; }
int Sub::calculate() { return a - b; }

void Mul::setValue(int x, int y) { a = x; b = y; }
int Mul::calculate() { return a * b; }

void Div::setValue(int x, int y) { a = x; b = y; }
int Div::calculate() 
{
    if (b == 0) {
        cout << "0���� ���� �� �����ϴ�." << endl;
        return 0;
    }
    return a / b;
}

int main() // ���� ���� ��ü ����
{
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true) 
    {
        int x, y;
        char op;
        cout << "�� ������ �����ڸ� �Է��ϼ���>> ";
        cin >> x >> y >> op;

        if (op == '+') { a.setValue(x, y); cout << a.calculate() << endl; }
        else if (op == '-') { s.setValue(x, y); cout << s.calculate() << endl; }
        else if (op == '*') { m.setValue(x, y); cout << m.calculate() << endl; }
        else if (op == '/') { d.setValue(x, y); cout << d.calculate() << endl; }
        else cout << "�������� �ʴ� �������Դϴ�." << endl;
    }

    return 0;
}
// �̷��� �ϸ� 3-10_2.cpp ���Ͽ����� 3-10_2.h ������ include�Ͽ� ����� �� �ִ�.