#pragma once // ��� ���� �� ���� ���� ��ó���� ���þ�. �� ������ �� ���� ���Եǵ��� ��, �ߺ� ���� ����!

class Add
{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Sub
{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Mul
{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

class Div
{
    int a, b;
public:
    void setValue(int x, int y);
    int calculate();
};

/*
* #pragma�� ����� ����� �ݵ�� �ٸ� ������ε� �־�� �Ѵ�!
* (����)
#ifndef CALCULATOR_H
#define CALCULATOR_H
// (��� ����)
#endif

* #pragma once�� ��ǥ�������� ��κ��� �����Ϸ����� �����Ѵ�.
* #ifndef, #define, #endif�� ����ϴ� ����� ǥ���̴�.
* �� �� �ϳ��� �����ؼ� ����ϸ� �ȴ�!
* �� �� ����� �ʿ�� ����. �� �� ����ϸ� �ߺ� ���� ������ �� �� �Ͼ��...
*/
