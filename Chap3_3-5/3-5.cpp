#include <iostream>
#include <cstdlib>  // rand(), srand(), RAND_MAX (���� �Լ���)
#include <ctime>    // time() (�ð� �Լ�) 
using namespace std; 

class Random 
{
public:
	Random() // ������
    {
		// ���� �ð��� ������� seesd ���� (�Ź� �ٸ� ���� ���� ����) rand() �Լ��� seed ���� ������ ���� ���� �� ����
		srand((unsigned)time(0)); // <ctime> �ȿ� �ִ� �Լ�
    }

    // 0���� RAND_MAX(32767) ������ ���� ���� ��ȯ
    int next() 
    {
		return rand(); // <cstdlib> �ȿ� �ִ� �Լ�!
    }

    // a �̻� b ���� ������ ���� ���� ��ȯ
	int nextInRange(int a, int b) // a, b: ����, a �̻� b ������ ���� ���� ��ȯ, a, b�� ����
    {
		// (b - a + 1): ���� ũ��, 0���� �����ϹǷ� +1 ����� ��
		// rand() % ���� + a: ���ϴ� ���� �ȿ��� ���� �� �����, a�� �����ִ� ������ a���� �����ϱ� ���ؼ�
        return rand() % (b - a + 1) + a;
    }
};

// main �Լ�
int main() 
{
	Random r;  // Random ��ü ����

    // ù ��° ���: 0���� RAND_MAX������ ���� ���� 10�� ���
    cout << "-- 0���� " << RAND_MAX << " ������ ���� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++)  // 10�� �ݺ�, 10�� ���, 0~9
    {
        int n = r.next();  // ���� ���� ����
		cout << n << ' '; // ������ ���� ���� ���, ����� ����
    }

	cout << endl << endl; // �ٹٲ� �� ��

    // �� ��° ���: 2���� 4������ ���� ���� 10�� ���
	cout << "-- 2���� 4 ������ ���� ���� 10�� --" << endl; // 2~4 ���� ���� ���� 10�� ���
	for (int i = 0; i < 10; i++) // 10�� �ݺ�, 10�� ���, 0~9

    {
        int n = r.nextInRange(2, 4);  // 2~4 ���� ���� ��
		cout << n << ' '; // ������ ���� ���� ���, ����� ����
    }

	cout << endl; // �ٹٲ�
    return 0;
}
