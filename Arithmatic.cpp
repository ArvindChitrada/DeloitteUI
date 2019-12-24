#include<iostream>
using namespace std;

class Arithmetic{
	int number1;
	int number2;
	int result;
	public:
		void getNumbers(){
			cout<<"Enter two numbers \n";
			cin>>number1;
			cin>>number2;
		}
		void addition(){
			getNumbers();
			result=number1+number2;
			cout<<"Addition result "<<result;
		}
		void subtraction(){
			getNumbers();
			result=number1-number2;
			cout<<"Subtraction result "<<result;
		}
		void multiplication(){
			getNumbers();
			result=number1*number2;
			cout<<"Multiplication result "<<result;
		}
		void division(){
			getNumbers();
			result=number1/number2;
			cout<<"Division result "<<result;
		}
};
int main(){
	int input;
	Arithmetic arithmetic;
	cout<<"Hello, Choose an option between 1-4 to perform an arithmetic operation \n"<<endl;
	cout<<" 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division \n";
	cout<<"Please enter your input here: ";
	cin>>input;
	switch (input){
		case 1:{
			arithmetic.addition();
			break;
		}
		case 2:{
			arithmetic.subtraction();
			break;
		}
		case 3:{
			arithmetic.multiplication();
			break;
		}
		case 4:{
			arithmetic.division();
			break;
		}
		default:{
			cout<<"Wrong choice... Please select between 1-4";
			break;
		}
	}
	
}
