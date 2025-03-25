#include <iostream>
#include <string>
using namespace std;

class Date
{
private: // Ŭ���� �ȿ� �ִ� ������(����)�� �ܺο��� ���� �������� ���ϰ� ���� ������ �Ѵ�! ��� public �Լ��� ���ؼ� ���� �аų� �ٲٰ� ����� ���̴�. �׷��� �߸��� ���� ������ ���� ���� �� �ִ�.(���� ��� month = 999 ���� ��) 
    int year, month, day;

public: // public�� �ܺ�(�����)�� ����� �� �ִ�. ��: private�� int x;(�ܺο��� x�� �ǵ帮�� ����), public�� int getYear() ���� �Լ��̴�.
    Date(int a, int b, int c) // ������ 1: ������ ����, ��, ���� �޴� ������.
    //�����ڶ�, ��ü�� ó�� ������� �� �ڵ����� ����Ǵ� �Լ���. Ŭ������ �̸��� ������ ��� �Լ�! ��ü�� �ʱ�ȭ�� ���ȴ�.
    {
        //���޹��� ���� ��� ������ �����Ѵ�. 
        year = a;
        month = b;
        day = c;
    }

    Date(string date) // ������ 2. YYYY/M/D�� ������ ���ڿ��� �޾Ƽ� ��¥�� �����Ѵ�.
    {
        year = stoi(date.substr(0, 4)); // (stoi = string to int: ���ڿ�string�� ����int�� �ٲ��ִ� �Լ�)
        month = stoi(date.substr(5, 1)); // (sub + str = sub-string, ���ڿ��� �Ϻθ� �߶󳻴� �Լ�)
        day = stoi(date.substr(7));
    }

    void show() // void�� �ƹ��͵� ��ȯ���� �ʴ� �Լ��̴�. ��, void show(): ���� �Ʒ��� ����ϰ� ��, � ���� �����ִ�(return) �Լ��� �ƴϴ�.
    {
        cout << year << "��" << month << "��" << day << "��" << endl;
    } // �׷��� void�� �ٴ´�! ���� ���� ������ �� ����� ��� ���̹Ƿ�!

    int getYear() // �ݴ��, �� �Լ��� year ���� ��ȯ(return)�ϹǷ�, ������ int�� ����Ѵ�. 
    {
        return year;
    }

    int getMonth()
    {
        return month;
    }

    int getDay()
    {
        return day;
    }
};

int main()
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");

    independenceDay.show(); // "1945��8��15��"
    cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

    return 0;
}