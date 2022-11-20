#include<iostream>
using namespace std;

class T20match{
	
	public:
		
		void getTotalOver(int a)
		{
			cout<<"T20"<<endl;
			cout<<"Per innindg Over :- "<<a<<endl;
			cout<<"Per match Over :- "<<a*2<<endl;
			cout<<"______________________"<<endl;
			cout<<"______________________"<<endl;
		}
			
};

class testmatch{
	
	public:
		void getTotalOver(int b)
		{
			cout<<"Test "<<endl;
			cout<<"per day:- "<<b/5<<endl;
			cout<<"Total over :- "<<b<<endl;
			
		}
	
};

class cricket: public T20match ,public testmatch {
	
	public :
			int a,b;
		void getTotalOver()
		{
			a=20;
			b=450;			
		}
	
};

main()
{

	cricket obj;
	obj.getTotalOver();
	obj.T20match::getTotalOver(obj.a);
	obj.testmatch::getTotalOver(obj.b);
	
}

