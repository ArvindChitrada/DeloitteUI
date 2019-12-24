//person-->employee-->manager
#include<iostream>
using namespace std;

class Person{
	char name[30],city[30],gender[10];
	int exp;
	public:
		void getDetails(){
			cin>>name;
			cin>>city;
			cin>>gender;
			cin>>exp;
			cout<<"\n";
		}
		void printDetails(){
			cout<<"Name is : "<<name<<endl;
			cout<<"city is : "<<city<<endl;
			cout<<"Gender is : "<<gender<<endl;
		}
		char* Name(){
			return name;
		}
		int exper(){
			return exp;
		}
		
};

class Employee:Person{
	char designation[30];
	public:
		void getDesignation(){
			getDetails();
			cout<<"Enter "<<Person::Name()<<"'s designation"<<endl;
			cin>>designation;
			
		}
		void printDesignation(){
			printDetails();
			
			cout<<"Designation of "<<Person::Name()<<" is : "<<designation<<endl;
		}
		char* HisName(){
			return Person::Name();
		}
		int experience(){
			return Person::exper();
		}
};

class Manager:Employee{
	char manager[30];
	public:
		void getManagerName(){
			
			getDesignation();
			cout<<"Enter "<<Employee::HisName()<<" manager's name"<<endl;
			cin>>manager;
			cout<<"\n";
		}
		void printManagerName(){
			
			printDesignation();
			
			cout<<"Manager of "<<Employee::HisName()<<" employee is : "<<manager<<endl;
		}
		char getManagerEligibility(){
			char option;
			cout<<"Do you want to check your eligibility for a manager post press Y or N"<<endl;
			cin>>option;
			return option;
		}
		void printManagerEligibility(){
			if(Employee::experience()>10){
				cout<<"Congarts! "<<Employee::HisName()<<" you can be a manager. \n"<<endl;
			}
			else{
				cout<<"Sorry "<<Employee::HisName()<<" Insufficient experience. \n"<<endl;
			}
		}
};

main(){
	char option;
	Manager m[3];
	for(int i=0;i<2;i++){
		
		cout<<"Enter details of the person like name city and gender and exp"<<endl;
		m[i].getManagerName();
		option=m[i].getManagerEligibility();
		switch(option){
			case 'Y':{
				m[i].printManagerEligibility();
				break;
			}
			case 'N':{
				m[i].printManagerEligibility();
				break;
			}
			default:{
				cout<<"Please choose only between Y or N"<<endl;
				break;
			}
		m[i].printManagerName();
		
		cout<<"\n";
	}
	}
	
}
