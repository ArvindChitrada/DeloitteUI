//person-->employee-->manager
#include<iostream>
using namespace std;

class Person{
	char name[30],city[30],gender[10];
	public:
		void getDetails(){
			cin>>name;
			cin>>city;
			cin>>gender;
		}
		void printDetails(){
			cout<<"Name is : "<<name<<endl;
			cout<<"city is : "<<city<<endl;
			cout<<"Gender is : "<<gender<<endl;
		}
		char* Name(){
			return name;
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
};

class Manager:Employee{
	char manager[30];
	public:
		void getManagerName(){
			
			getDesignation();
			cout<<"Enter "<<Employee::HisName()<<" manager's name"<<endl;
			cin>>manager;
		}
		void printManagerName(){
			
			printDesignation();
			
			cout<<"Manager of "<<Employee::HisName()<<" employee is : "<<manager<<endl;
		}
};

main(){
	Manager m[3];
	for(int i=0;i<2;i++){
		cout<<"Enter details of the person like name city and gender "<<endl;
		m[i].getManagerName();
		m[i].printManagerName();
	}
}
