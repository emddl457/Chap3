#include <iostream>
#include "Ram.h"
using namespace std;

// ������: �޸� �迭�� 0���� �ʱ�ȭ�ϰ� ũ�⸦ ����
Ram::Ram() 
{
    for (int i = 0; i < 100 * 1024; i++)
		mem[i] = 0; // 100*1024 = 102400, 100KB�� �޸� ������ 0���� �ʱ�ȭ�Ѵ�.
	size = 100 * 1024; // 100KB�� �޸� ������ size�� �����Ѵ�.
}

// �Ҹ���: �޸� ���� �޽��� ���
Ram::~Ram() 
{
    cout << "�޸� ���ŵ�" << endl;
}

// �޸𸮴� �ּҿ� � ���� �����ϰ�, �ٽ� �д� �۾��� ��� �ݺ��Ѵ�.
// read�� write�� �־��� �ּҿ� ���� �а� ���� �Լ�!
// �ּ� adress�� �� value�� �����ϰų�, �ּ� adress�� ���� ��ȯ�Ѵ�.

char Ram::read(int address)

{
    return mem[address];
}

// �ּҿ� ���� �޾� �ش� ��ġ�� ����
void Ram::write(int address, char value) 
{
    mem[address] = value;
}