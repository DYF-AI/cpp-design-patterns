#include <iostream>

using namespace std;

// 稳定 template method
class Library
{
  public:
    
    // run整个流程是问题的
    void Run()
    {
        Step1();

        if (Step2())  
        { 
            Step3();  // 支持变化,虚函数的多态度调用
        }

        for (int i = 0; i < 4; i++)
        {
            Step4();  // 支持变化,虚函数的多态度调用
        }

        Step5();
    }
    // 基类的析构函数，写成虚函数形式 
    virtual ~Library() {}   

protected:
    void Step1()
    {
        cout << "Step1" << endl;
    }
    void Step3()
    {
        cout << "Step3" << endl;
    }
    void Step5()
    {  
        cout << "Step5" << endl;
    }

    // 虚函数  
    virtual bool Step2() = 0; 
    virtual void Step4() = 0; 
};