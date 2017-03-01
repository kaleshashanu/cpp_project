/***Modifiers public,protected & private ***

class A 
{
public:
    int x;
protected:
    int y;
private:
    int z;
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C
};

class D : private A    // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};
Modifiers end  ****/
#include<iostream>

class A
{
	public:
		int x = 11;
	protected:
		int y =22;
	private:
	    int z = 33;
	
	public:
	printa(){
	std::cout <<" Class A x value =" << x <<"\n";
	std::cout <<" Class A y value =" << y << "\n";
	std::cout <<" Class A z value =" << z <<"\n";  
	}
};

class B : public A
{
	public:
	printb(){
	std::cout <<" Class B x value =" << x <<"\n";
	std::cout <<" Class B x value =" << y <<"\n";
	//std::cout <<" Class B x value =%d\n" << z;  //Invalid Private Member
	}
};

class C : protected B
{
	printc(){
	std::cout <<" Class C x value =%d\n" << x;
	std::cout <<" Class C x value =%d\n" << y;
	//std::cout <<" Class C x value =%d\n" << z;  //Invalid Private Member
	}
	
};

class D : private A
{
	printd(){
	std::cout <<" Class D x value =%d\n" << x;
	std::cout <<" Class D x value =%d\n" << y;
	//std::cout <<" Class D x value =%d\n" << z;  //Invalid Private Member
	}
	
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	
//	a.x=1; // valid Public variable can access outside
	//a.y=2; //Invalid can't access protected
	//a.z=3;  //Invalid can't access private
	//b.x=2; //Valid Public Inheritance 
	//c.x=3; //Invalid Protected Inheritance 
	//d.x=4;  //Invalid private inheritance
	
	a.printa();
	b.printb();
	
	
    
}
