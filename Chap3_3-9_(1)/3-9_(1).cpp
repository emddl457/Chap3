#include <iostream>
using namespace std;

class Oval // �ϳ��� Ŭ���� ���Ǹ� ����ؾ� �Ѵ�.
{
private:
    // !! Ÿ���� �ʺ�� ���̸� �����ϴ� ��� ���� !!
    int width;
    int height;

public: // ����ο� �����θ� �и��Ϸ��ٰ� Oval�̶�� Ŭ������ �ߺ� ����Ǿ ������ �߻���. �׷��� public���� ����ο� �����θ� ���� ����.
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

    // �ʺ�� ���̸� �����ϴ� �Լ�
    void set(int w, int h) 
    {
        width = w;
        height = h;
    }

    // �ʺ� ��ȯ�ϴ� �Լ�
    int getWidth() 
    {
        return width;
    }

    // ���̸� ��ȯ�ϴ� �Լ�
    int getHeight() 
    {
        return height;
    }

    // ���� Ÿ���� ������ ����ϴ� �Լ�
    void show() 
    {
        cout << "width = " << width
            << ", height = " << height << endl;
    }
};

int main() 
{
    // �⺻ ������ ȣ���ϱ� -> width = 1, height = 1
    Oval a;

    // �Ű����� ������ ȣ���ϱ� -> width = 3, height = 4
    Oval b(3, 4);

    // a�� ���� �����ϱ� -> width = 10, height = 20
    a.set(10, 20);

    // a�� ���� ���
    a.show(); 

    // b�� �ʺ�� ���� ���
    cout << b.getWidth() << "," << b.getHeight() << endl;

    return 0;  
}
