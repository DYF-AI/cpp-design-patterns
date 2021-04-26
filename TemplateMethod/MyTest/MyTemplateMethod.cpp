#include<iostream>
using namespace std;

class AbstractClass
{
public:
    // 预定义 虚函数
    virtual void primitiveOp1() = 0;
    virtual void primitiveOp2() = 0;

    virtual ~AbstractClass(){};
};

class ConcreteClass:public AbstractClass
{
public:
    virtual void primitiveOp1()
    {
        cout << "Doing Op1..." << endl;
    }

    virtual void primitiveOp2()
    {
        cout << "Doing Op2..." << endl;
    }
};


int main()
{
    AbstractClass *p = new ConcreteClass();
    p->primitiveOp1();
    p->primitiveOp2();
    delete p;
    return 0;
}