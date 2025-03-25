#include <iostream>
using namespace std;
class CoffeeMachine 
{
private: // ��� ������ private���� �����Ͽ� �ܺο��� ���� �������� ���ϵ��� ��!
    int coffee; // Ŀ�� ��
    int water;  // �� ��
    int sugar;  // ���� ��

public: // �Ű������� ��� ���� �̸��� ���� ������ this->�� ����Ͽ� ������ (this�� ��ü �ڽ��� ����Ű�� ������)
    CoffeeMachine(int coffee, int water, int sugar) 
    {
		this->coffee = coffee; // Ŭ������ ��� ���� coffee�� �Ű����� ���� ���� (this->coffee�� ��� ������ ����Ŵ)
		this->water = water;   // ���� ������ this->water ��� 
        this->sugar = sugar;   // this->sugar�� ��������!!
    }

   
	void drinkEspresso() // ���������� �� �� �����: Ŀ�� 1, �� 1 ����
    {
		if (coffee >= 1 && water >= 1) // Ŀ�ǿ� ���� ��� 1 �̻��� ��
        {
			coffee -= 1; // Ŀ�� 1 ���̱�
			water -= 1; // �� 1 ���̱�
        } // ��ᰡ ������ ��� �ƹ� �͵� ���� ����!
    }

    void drinkAmericano()  // �Ƹ޸�ī�� �� �� �����: Ŀ�� 1, �� 2 ����
    {
		if (coffee >= 1 && water >= 2) // Ŀ�ǿ� ���� ��� 1 �̻��� ��
        {
			coffee -= 1; // Ŀ�� 1 ���̱�
			water -= 2;  // �� 2 ���̱�
        }
    }

    void drinkSugarCoffee() // ���� Ŀ�� �� �� �����: Ŀ�� 1, �� 2, ���� 1 ����
    {
		if (coffee >= 1 && water >= 2 && sugar >= 1) // Ŀ��, ��, ������ ��� 1 �̻��� ��
        {
			coffee -= 1; // Ŀ�� 1 ���̱�
			water -= 2;  // �� 2 ���̱�
			sugar -= 1;  // ���� 1 ���̱�
        }
    }

	void fill() // �Լ� ���� (��Ḧ ��� 10���� ä��� �Լ�)
    {
		coffee = 10; // Ŀ�� 10���� ä���
		water = 10;  // �� 10���� ä���
		sugar = 10;  // ���� 10���� ä���
    }

	// ���� Ŀ�Ǹӽ� ���� ��� (Ŀ��, ��, ������ �� ���)
	void show() // �Լ� ���� (Ŀ�Ǹӽ� ���� ��� �Լ�)
    {
		cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee // ���� Ŀ�Ǹӽ��� Ŀ��, ��, ������ �� ���
			<< " ��:" << water // cout�� << �����ڷ� ���� ���� ����� �� ����
			<< " ����:" << sugar << endl;
    }
}; // Ŭ���� ���� ��~~
int main() 
{
    CoffeeMachine java(5, 10, 3); 
    java.drinkEspresso();  
    java.show();           
    java.drinkAmericano(); 
    java.show();          
    java.drinkSugarCoffee(); 
    java.show();            
    java.fill();           
    java.show();          
    return 0;
}
