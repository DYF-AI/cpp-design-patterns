
 // 税法策略的基类
class TaxStrategy{
public:
    virtual double Calculate(const Context& context)=0;
    // 基类的析构函数，声明为虚函数，否则多态的delete容易出现问题
    virtual ~TaxStrategy(){}
};

// 继承 基类
// 工程上，每个类，写成一个文件
class CNTax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //***********
    }
};

class USTax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //***********
    }
};

class DETax : public TaxStrategy{
public:
    virtual double Calculate(const Context& context){
        //***********
    }
};


//*********************************
class FRTax : public TaxStrategy{
public:
	virtual double Calculate(const Context& context){
		//.........
	}
};

// 基类
class SalesOrder{
private:
    TaxStrategy* strategy;  // 抽象类，指针 不能初始化对象（对象不具有多态性）

public:
    SalesOrder(StrategyFactory* strategyFactory){
        this->strategy = strategyFactory->NewStrategy();
    }
    ~SalesOrder(){
        delete this->strategy;
    }

    public double CalculateTax(){
        //...
        Context context();
        
        double val = 
            strategy->Calculate(context); // 多态调用
        //...
    }
    
};
