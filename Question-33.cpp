#include <iostream>
using namespace std;

// Single Inheritance
class A
{
public:
    void showA()
    {
        cout << "Class A - Single Inheritance" << endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "Class B derived from A" << endl;
    }
};

// Multiple Inheritance
class P
{
public:
    void showX()
    {
        cout << "Class P" << endl;
    }
};

class Q
{
public:
    void showY()
    {
        cout << "Class Q" << endl;
    }
};

class R : public P, public Q
{
public:
    void showZ()
    {
        cout << "Class R derived from P and Q" << endl;
    }
};

// Multilevel Inheritance
class Base
{
public:
    void showBase()
    {
        cout << "Base class" << endl;
    }
};

class DerivedX : public Base
{
public:
    void showDerivedX()
    {
        cout << "DerivedX from Base" << endl;
    }
};

class DerivedY : public DerivedX
{
public:
    void showDerivedY()
    {
        cout << "DerivedY from DerivedX" << endl;
    }
};

int main()
{
    B b;
    b.showA();
    b.showB();
    R r;
    r.showX();
    r.showY();
    r.showZ();
    DerivedY dY;
    dY.showBase();
    dY.showDerivedX();
    dY.showDerivedY();
    return 0;
}