#include <iostream>
#include "Box.h"
using namespace std;

// ������: �ʺ�� ���̸� �ʱ�ȭ�ϰ� ä�� ���ڴ� '*'�� �ʱ� ����
Box::Box(int w, int h) 
{
    setSize(w, h);
    fill = '*';
}

// ä�� ���� ���� �Լ�
void Box::setFill(char f) 
{
    fill = f;
}

// ũ�� ���� �Լ�
void Box::setSize(int w, int h) 
{
    width = w;
    height = h;
}

// �ڽ��� �׸��� �Լ�
void Box::draw() {
    for (int n = 0; n < height; n++) 
    {
        for (int m = 0; m < width; m++)
            cout << fill; // �� �ٿ� width��ŭ fill ���� ���
        cout << endl;     // �ٹٲ� (�� �� ������ ���� �ٷ�)
    }
}