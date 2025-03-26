#include <iostream>
using namespace std;

class Oval // �ϳ��� Ŭ���� ���Ǹ� ����ؾ� �Ѵ�.
{
private:
    // !! Ÿ���� �ʺ�� ���̸� �����ϴ� ��� ���� !!
    int width;
    int height;

public: // ����ο� �����θ� �и��Ϸ��ٰ� Oval�̶�� Ŭ������ �ߺ� ����Ǿ ������ �߻���. 
    // �׷��� public���� ����ο� �����θ� ���� ����.
    // !! �⺻ ������: �ʺ�� ���̸� 1�� �ʱ�ȭ !!
    Oval()
    {
        width = height = 1;
    }

    // !! �Ű����� ������: �־��� ������ �ʺ�� ���̸� �ʱ�ȭ !!
    Oval(int w, int h)
    {
        width = w;
        height = h;
    }

    // !! �Ҹ���: ��ü�� ������ �� ȣ��� (���� ���� ���) !!
    // �Ҹ����� ���� ��Ģ: ~Ŭ�����̸�() { //�Ҹ�� �� �� �۾�)}
    // �����ڿ� �̸��� �Ȱ����� ȥ���� �� ������ ~�� �ٿ��ش�. ��ȯ�� ����! �Ű����� ����! �ڵ� ȣ���!
    ~Oval()
    {
        cout << "Oval �Ҹ� : width = " << width
            << ", height = " << height << endl;
    }

    void set(int w, int h) // �ʺ�� ���̸� �����ϴ� �Լ�
    {
        width = w;
        height = h;
    }

    int getWidth() // �ʺ� ��ȯ�ϴ� �Լ�
    {
        return width;
    }

    int getHeight() // ���̸� ��ȯ�ϴ� �Լ�
    {
        return height;
    }

    void show() // ���� Ÿ���� ������ ����ϴ� �Լ�
    {
        cout << "width = " << width
            << ", height = " << height << endl;
    }
};

int main()
{
    Oval a; // �⺻ ������ ȣ���ϱ� -> width = 1, height = 1
    Oval b(3, 4); // �Ű����� ������ ȣ���ϱ� -> width = 3, height = 4
    a.set(10, 20);
    a.show(); // a�� ���� ���
    cout << b.getWidth() << "," << b.getHeight() << endl; // b�� �ʺ�� ���� ���
    return 0;
}
