#include "template2_lib.cpp"
#include <iostream>

using namespace std;


class Application : public Library
{
  protected:
    // 子类重写实现
	virtual bool Step2()
	{
		cout << "override Step2" << endl;
		return true;
	}

	virtual void Step4()
	{
		cout << "override Step4" << endl;
	}
};

int main()
{
	// 多态指针
	Library *pLib = new Application(); 
	pLib->Run();

	delete pLib;
}
