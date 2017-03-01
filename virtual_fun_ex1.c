/***Simple virtual function example ***/
#include<iostream>

class A
{
	public:
		//Constructor Begin 
	A()
	{
		std::cout<<" I am A constructor\n";
	}
	// End
	
	fun_A1(){
		std::cout<<" I am in fun_A1\n";
	}
	fun_A2(){
		std::cout<<" I am in fun_A2\n";
	}
	fun_A3(){
		std::cout<<" I am in fun_A3\n";
	}
	
	virtual virtual_fun()
	{
		std::cout<< " I am in virtual_fun in class A\n";
	}
	//Destructor
	~A()
	{
		std::cout<<" I am in A Destuctor\n";
	}
};

class B : public A
{
	public:
	B()
	{
		std::cout<<" I am B consturctor\n";
    }
	fun_B1(){
		std::cout<<" I am in fun_B1\n";
	}
	
	fun_B2(){
		std::cout<<" I am in fun_B2\n";
	}
	fun_B3(){
		std::cout<<" I am in fun_B3\n";
	}
	
	virtual_fun()
	{
		std::cout<< " I am in virtual_fun in class B\n";
	}
	~B()
	{
		std::cout<<" I am in B destructor\n";
	}
};
int main()
{
	//A a1;  
	B b1;
	
	A *ap=new A; //Valid
	
	ap=&b1;
	
	b1.virtual_fun();
	ap->virtual_fun();
	//B *ap = new(A); //Invalid
	
}
