#include<iostream>
using namespace std;
class A
{
	public:
		void putdata()
		{
			cout<<"'SINGLE INHERITANCE'"<<endl;
			cout<<"Class B Used Properties of Class A :)"<<endl;
			cout<<"It Means Inheritance Works :)";
		}
};
class B : public A{};
int main()
{
		cout<<"thummar yagnik"<<endl;
	cout<<"220130318098"<<endl;
		B b;
		b.putdata();
		
		return 0;
}
