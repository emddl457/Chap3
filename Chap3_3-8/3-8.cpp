#include <iostream>
#include <string>  
using namespace std;

class Integer
{
private: // ��ü �ܺο��� ���� value�� �����ϴ� �ڵ尡 ������ private���� �����ص� �����ϴ�!
    int value;  // ���� ���� ������ ��� ����. get()�̳� set() �Լ��θ� �ٷ�� �Ѵ�.

public:
    Integer(int value)
    {
        this->value = value;  // ��� ������ �Ű����� ������ ���� this ���(this->value�� Ŭ���� �ȿ� �ִ� value. value�� �Ű������� ���޵� ��.
    }

    Integer(string str) // ���ڿ��� ��ü�� �����. Integer m("100"); ����!
    {
        value = stoi(str);  // ���ڿ��� ������ ��ȯ�� ���� (std::stoi ���). stoi()�� "100"���� ���ڿ��� ���� 100���� �ٲ��ִ� �Լ��̴�.
    }

    // �� �Լ��� Ŭ���� ���ο� ����� value ���� �ܺο��� ���� �� �ְ� ���ش�.
    int get() const // (n.value  = 333; �̳� cout ? n.value; ó�� ���� �ٲٰų� ���� �������� �ʱ�.)
    {
        return value;
    }

    void set(int value) // ��ü�� ����ִ� ���� �ٲٰ� ���� �� ����Ѵ�.
    {
        this->value = value; // n.set(10);�� n ��ü�� ���� ���� 10���� �ٲ��ش�.
    }

    bool isEven() const // int �ڷ����� ����(10. 100), bool �ڷ����� ��/���� -> true or false.
        // isEven() �Լ��� �ܼ��� value ���� �б⸸ ����, ���� �ٲ����� �ʴ´�.
        // �׷��� const�� �ٿ��� �Լ��� ��ü�� �������� �ʴ´ٴ� ���� �����ϰ� const ��ü���� ����� �� �ִ�.
        // ��� const�� �� ����ص� ������, ����ϴ� ���� ����. (�����Ϸ��� ������ ����� �� �ֱ� ����)
        // ���� �� �Լ����� ��� ���� �� �ǵ帱�Կ�! �ϴ� ��. �׷��� ��ü ��ü�� const�� �������� ��, const �Լ��� ������ ������ ����.
    {
        return value % 2 == 0; // ���� ���ڰ� ¦������ ���´�. ¦���� true, Ȧ���� false ��ȯ!
    }
};

int main()
{
    Integer n(30);
    cout << n.get() << ' ';   // 30 ���
    n.set(50);
    cout << n.get() << ' ';   // 50 ���

    Integer m("300");         // ���ڿ��� ������ ��ȯ
    cout << m.get() << ' ';   // 300 ���
    cout << m.isEven();       // 1 ��� (true)
}
