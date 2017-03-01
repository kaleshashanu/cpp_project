/***Simple Pure virtual function example ***
Pure virual function called abstract base class ****/
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
	
    virtual purevirtualfun()=0;	//Pure virtual function 
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
	
	
	purevirtualfun()
	{
		std::cout<<"I am in pure virtualfun in class B\n";
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
	 
    //A a; //Invalid because base class have pure virtual function & we cant instance 
	B b1;
	A *a1;
	a1= &b1;
	a1->purevirtualfun();
}
