#pragma once
// Box.h (��� ����) - Ŭ���� ���� �����Ѵ�. 

class Box 
{
    int width, height;   // �ڽ��� �ʺ�� ����
    char fill;           // �ڽ��� ä�� ����

public:
    Box(int w, int h);           // ������ (�ʺ�� ���� �ʱ�ȭ)
    void setFill(char f);        // ä�� ���� ����
    void setSize(int w, int h);  // �ڽ��� ũ�� ����
    void draw();                 // �ڽ� �׸���
};

// pragma ��� #infndef, #define, #endif�� ����ص� �ȴ�.