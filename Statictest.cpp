#include<iostream>
using namespace std;

class TestClass{
	public:
	 
	static int count;
	static void increment(){
		int x=2;
		count++;
		cout<<"count= "<<count<<endl;
		cout<<"x = "<<x<<endl;
	}
};
int TestClass::count=0;
int main(){
	TestClass test[3];
	for(int i=0;i<3;i++){
		test[i].increment();
	}
	
	return 0;
}
