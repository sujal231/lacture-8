#include<iostream>
using namespace std;

class z{
	
	public :
	
			double a,b,c,d,e;
	
	void  calculate()
	{
	
		cout<<"Enter A:-";
		cin>>a;
		cout<<"Enter B:-";
		cin>>b;
		cout<<"Enter C:-";
		cin>>c;
		cout<<"Enter D:-";
		cin>>d;
		cout<<"Enter E:-";
		cin>>e;
		
	}
	
};

class s: public z{
	public :
		
		
		double division;
		int	subtraction;
		int multiplication;
		int addition;
		

		void calculate(double a,double b)
		{
			
			division=a/b;
			cout<<endl<<a<<"/"<<b<<" = ";
			cout<<division<<endl;
		
		}
		
		void calculate(int a,int b,int c)
		{
				
			subtraction=a-b-c;
			cout<<a<<"-"<<b<<"-"<<c<<" = ";
			cout<<subtraction<<endl;
		
		}
		
		void calculate(int a,int b,int c,int d)
		{
				
			multiplication=a*b*c*d;
			cout<<a<<"X"<<b<<"X"<<c<<"X"<<d<<" = ";
			cout<<multiplication<<endl;
		
		}
		
		void calculate(int a,int b,int c,int d,int e)
		{
			
			addition=a+b+c+d+e;
			cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"+"<<e<<" = ";
			cout<<addition<<endl;
		
		}
};

main()
{
	
	z obj1;
	obj1.calculate();
	
	s obj;
	
	obj.calculate(obj1.a,obj1.b);
	obj.calculate(obj1.a,obj1.b,obj1.c);
	obj.calculate(obj1.a,obj1.b,obj1.c,obj1.d);
	obj.calculate(obj1.a,obj1.b,obj1.c,obj1.d,obj1.e);
	
}
