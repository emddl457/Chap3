// 10��-(1)�� Ǯ��
#include <iostream>
using namespace std;

class Add 
{
    int a, b; // �� ���� ������ ��� ���� �����
public:
    void setValue(int x, int y) { a = x; b = y; }  // �ܺο��� a, b ���� �����ϴ� �Լ�
    int calculate() { return a + b; } // ���� ����� ��ȯ
};

class Sub // ���⵵ ���� ������ ����..
{ 
    int a, b;
public:
    void setValue(int x, int y) { a = x; b = y; }
    int calculate() { return a - b; }
};

class Mul // ���ϱ�
{ 
    int a, b;
public:
    void setValue(int x, int y) { a = x; b = y; } // �߰�ȣ��  �Լ��� ���� ���� ������ ��Ÿ��
	int calculate() { return a * b; } //��ȯ���� ������ ������ ������ �߻���.
};

class Div // ������
{ 
    int a, b;
public:
    void setValue(int x, int y) { a = x; b = y; }
    int calculate() 
    {
        if (b == 0) // ������ ���� 0�� ���� ���� ����!!
        { 
            cout << "0���� ���� �� �����ϴ�." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() // ������ ������ ����ϴ� Ŭ���� ��ü 4�� �����
{ 
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true) //���� ����. ����ڿ��� �� ���� �Է¹ް� ���α׷��� ��� �ݺ��ǰ� ��.
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
