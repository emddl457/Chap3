#pragma once

class Ram 
{
    char mem[100 * 1024];  // 100KB �޸� ���� (char�� 1����Ʈ)
    int size;              // �޸��� ��ü ũ�⸦ ����

public:
    Ram();                               // ������: �޸� �ʱ�ȭ
    ~Ram();                              // �Ҹ���: �޸� ���� �޽��� ���
    char read(int address);              // �־��� �ּ��� ���� �о� ��ȯ
    void write(int address, char value); // �־��� �ּҿ� ���� ����
};
