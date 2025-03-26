#include <iostream>
#include "Box.h"
using namespace std;

int main() 
{
    Box b(10, 2);      // �ʺ� 10, ���� 2�� �ڽ� ��ü ���� (�⺻ ä���� '*')
    b.draw();          // ù ��° �ڽ� ��� (10x2, *�� ä��)

    cout << endl;

    b.setSize(7, 4);   // �ڽ��� ũ�⸦ 7x4�� ����
    b.setFill('^');    // �ڽ��� '^' ���ڷ� ä�쵵�� ����
    b.draw();          // �� ��° �ڽ� ��� (7x4, ^�� ä��)

    return 0;
}