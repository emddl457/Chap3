#include <iostream> 
#include <cstdlib> 
#include <ctime>     
using namespace std;

class SelectableRandom // SelectableRandom Ŭ���� ����!! ����ڰ� ¦�� �Ǵ� Ȧ�� �� � �� ������ ������ �� �ֵ��� �Ѵ�.
{
public: // ������: ��ü�� ������� �� ȣ���(��� �ݺ��Ǵ� ���� �ƴϴ�~~!!)
    SelectableRandom() // srand(): rand() �Լ��� seed(������)�� ����
    {
        srand((unsigned)time(0)); // �Ź� ���� �� �ٸ� �������� ��� ���� ���� �ð��� ������� ����
    }

	int nextEven() // nextEven(): 0 ~ RAND_MAX �������� ¦���� ��ȯ (next�� ���ο� ���� ����ٴ� ��), EVen�� ¦���� �ǹ�
    {
		int r; // ���� ���ڸ� �ӽ÷� �����صδ� ���� r ����! (���� �׳� randomNumber�� �ص� ������, r�� �����ϴϱ�...)
        do 
        {
            r = rand();        // ���� �� ����
        } while (r % 2 != 0);  // ���� Ȧ���� �ٽ� �̱� (¦���� ���� ������ �ݺ�)
        return r;              // ¦���� ��� ��ȯ
    }

	int nextOdd() // nextOdd(): 0 ~ RAND_MAX �������� Ȧ���� ��ȯ (Odd�� Ȧ���� �ǹ�)
    {
        int r;
        do 
        {
            r = rand();        // ���� �� ����
        } while (r % 2 == 0);  // ���� ¦���� �ٽ� �̱� (Ȧ���� ���� ������ �ݺ�)
        return r;
    }

    int nextInRangeEven(int a, int b) // nextInRangeEven(a, b): a ~ b �������� ¦���� �����ϰ� ����ִ� �Լ�!
    {
        int r;
        do
        {
			r = rand() % (b - a + 1) + a; //  a ~ b ������ ���� ������ �ϳ� �����ϴ� ����(a=2, b=10�̸� 2~10 ������ �ƹ� ���� ����)
        } while (r % 2 != 0);  // ¦���� �ƴϸ� �ٽ� �ݺ�
        return r;
    }

    int nextInRangeOdd(int a, int b) // nextInRangeOdd(a, b): a ~ b �������� Ȧ���� �����ϰ� ����ִ� �Լ�!
    {
        int r;
        do 
        {
            r = rand() % (b - a + 1) + a;
        } while (r % 2 == 0);  // ¦���� �ݺ� (Ȧ�� ���� ������)
        return r;
    }
};

int main() 
{
    SelectableRandom r; // SelectableRandom ��ü r ����
    cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10�� --" << endl; // ù ��° ���: 0 ~ 32767 ������ "¦��" 10�� ���
    for (int i = 0; i < 10; i++) 
    {
        int n = r.nextEven();// ¦���� ��ȯ�ϴ� nextEven() ȣ��
		cout << n << ' '; // ���� ��� �� ���� �� ĭ ���� 
    }
    cout << endl << endl; // �ٹٲ� �� ��!

    cout << "-- 2���� 9������ ���� Ȧ�� ���� 10�� --" << endl; // �� ��° ���: 2 ~ 9 ������ "Ȧ��" 10�� ���
    for (int i = 0; i < 10; i++)
    {
        int n = r.nextInRangeOdd(2, 9);// 2~9 ������ Ȧ�� ��ȯ
        cout << n << ' ';
    } cout << endl;
    return 0;
}
