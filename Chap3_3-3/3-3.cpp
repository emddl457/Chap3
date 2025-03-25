#include <iostream>
#include <string>
using namespace std;


class Account // Account Ŭ���� �����ϱ�

{
private:
	string name; // �̸�
	int id; // ���¹�ȣ
	int balance; // �ܾ�

public: // ������, Account ��ü�� ������� �� �ʱⰪ�� �������ش�. 
	Account(string name, int id, int balance) // ������ ����ó�� "kitae"��� �̸�, 1�̶�� ���¹�ȣ, 5000�̶�� �ܾ��� ȣ��ȴ�.
	{
		this->name = name; // �Ű������� ��� ������ �̸��� ���� ������ this�� ����Ͽ� ��� �������� ��Ȯ�� ���ش�.
		this->id = id;
		this->balance = balance;
	}

	string getOwner() // ���� ������ �̸��� ��ȯ�ϴ� �Լ�
	{
		return name;
	}

	void deposit(int amount) // �Ա��ϴ� �Լ�
	{
		balance += amount; // amount��ŭ �ܾ׿� �����ش�.
	}

	int withdraw(int amount) // ����ϴ� �Լ� (!!������ ���ǿ� ���� ��ȯ���� int�� �������ش�!! void�� �����ϸ� ������ �߻��Ѵ�.)
	// void�� �ۼ��ϸ� main�Լ����� "int" ������ ����Ƽ�� �ʱ�ȭ�� �� �����ϴ�, ��� ������ �߻��ϰ� �ȴ�.
	{
		if (amount > balance) // ����Ϸ��� �ݾ��� �ܾ׺��� ���� ���
			return 0; 
		balance -= amount; // ����Ϸ��� �ݾ��� �ܾ׺��� ���� ��� amount��ŭ �ܾ׿��� ���ش�.
	return amount; 
	}

	int inquiry() // �ܾ��� ��ȯ�ϴ� �Լ�
	{
		return balance;
	}

};

int main()
{
	Account a("kitae", 1, 5000); // id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000); // 50000�� ���� 
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl; // kitae�� �ܾ��� 55000��
	int money = a.withdraw(20000); // 20000�� ���
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl; // kitae�� �ܾ��� 35000��

	return 0; 
}
