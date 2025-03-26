#include <iostream>
#include <cstdlib>  // rand(), srand(), RAND_MAX
#include <ctime>    // time()
using namespace std;

class EvenRandom // ¦���� ��ȯ�ϴ� ���� Ŭ���� ����
{
public: // ������: seed ���� (���� 5�� ���������� Random Ŭ������ �����ϴ�)
    EvenRandom() 
    {
		srand((unsigned)time(0)); // ���� �ð����� �õ� ����, 0�� 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� ��������� �ʸ� ��ȯ�Ѵ�.
    }

    // ���� Random Ŭ������ �ٸ� ���� next(): 0 ~ RAND_MAX ������ "¦��" ���� ���� ��ȯ�Ѵٴ� ��!!
    int next() 
    {
        int r;
        do 
        {
            r = rand();           // ���� �� ����
        } while (r % 2 != 0);     // !! Ȧ���� �ٽ� �ݺ��ϰ�, ¦���� ���� ��ȯ
        return r;
    }

    int nextInRange(int a, int b) // ���� nextInRange�� ������ �ϳ� ��!! nextInRange(a, b): a �̻� b ������ "¦��" ���� ���� ��ȯ�ϴ� ������ �Ѵ�. �� �ܿ��� next()�� ����!
    {
        int r;
        do 
        {
            r = rand() % (b - a + 1) + a;  // a ~ b ���� ���� �� ����
        } 
        while (r % 2 != 0); // ¦���� �ƴ� ��� �ٽ� ����
        return r;
    }
};

int main() 
{
    EvenRandom r;  // EvenRandom ��ü ����

    // 0 ~ 32767 ������ ¦�� ���� �� 10�� ���
	cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� 10�� --" << endl; // RAND_MAX�� 32767
	for (int i = 0; i < 10; i++) // 10�� �ݺ�, 10�� ���, 0 ~ 9 (�翬�� 5�� ������ ����)
    {
		int n = r.next();      // next()�� ���� ������ ¦���� ��ȯ, Ȧ���� ��ȯ���� ����
        cout << n << ' ';
    }

    cout << endl << endl;

	// 2 ~ 10 ������ ¦�� ���� �� 10�� ���
    cout << "-- 2���� 10������ ���� ¦�� 10�� --" << endl;
    for (int i = 0; i < 10; i++) 
    {
        int n = r.nextInRange(2, 10); // nextInRange�� ¦���� ��ȯ
        cout << n << ' ';
    }

    cout << endl;
    return 0;
}
