#include<iostream>
using namespace std;

class Items{
	int quantity;
	float sum;
	public:
	void itemList(){
		cout<<"\n------------------------------"<<endl;
		cout<<" ID	 ITEM	   PRICE"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<"101    Chocolate  Rs.50.00 \n";
		cout<<"102    Biscuit 	  Rs.20.00 \n";
		cout<<"103    Chips 	  Rs.30.00 \n";
		cout<<"104    Drinks 	  Rs.40.00 \n";
		cout<<"105    Butter 	  Rs.60.00 \n";
		cout<<"106    Cheese 	  Rs.70.00 \n";
		cout<<"107    Coffee 	  Rs.80.00 \n";
		cout<<"108    Rice 	  Rs.90.00 \n";
		cout<<"109    Fries 	  Rs.100.00 \n";
		cout<<"110    Pizza 	  Rs.150.00 \n";
		
	}
	void getItems(int id){
		
		if(id==101||id==102||id==103||id==104||id==105||id==106||id==107||id==108||id==109||id==110){
			if(id==101){
			cout<<"Enter the quantity ";
			cin>>quantity;
			sum=sum+50.00*quantity;
			}
			if(id==102){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+20.00*quantity;
			}
			if(id==103){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+30.00*quantity;
			}
			if(id==107){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+80.00*quantity;
			}if(id==104){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+40.00*quantity;
			}if(id==105){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+60.00*quantity;
			}if(id==106){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+70.00*quantity;
			}
			if(id==108){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+90.00*quantity;
			}
			if(id==109){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+100.00*quantity;
			}
			if(id==110){
				cout<<"Enter the quantity ";
				cin>>quantity;
				sum=sum+150.00*quantity;
			}
		}
		else{
			cout<<"We don't have that item...... \n";
			return;
		}
	
	}
	void printBill(){
			cout<<"----------------------------------------------------------";
			cout<<"\nTotal bill is : "<<sum<<" Rs"<<endl;
			cout<<"\nThank You Please Visit Again";
			
	}
};
main(){
	int itemid,qty;
	char option;
	cout<<"Welcome to NexWave Store"<<endl;
	cout<<"These are the items available"<<endl;
	Items items;
	items.itemList();

	cout<<"----------------------------------------------------------";
	cout<<"\n";
	cout<<"Enter the no.of products you want to buy"<<endl;
	cin>>qty;
	cout<<"Select products by entering it's id"<<endl;
	for(int i=0;i<qty;i++){
		cout<<"\nEnter id : ";
		cin>>itemid;
		items.getItems(itemid);
		
	}
	cout<<"\nDo you wish to continue... Please press Y or N"<<endl;
	extra:cin>>option;
	
	switch(option){
		case 'Y' :{
			cout<<"Enter the no.of products you want to buy"<<endl;
			cin>>qty;
			for(int i=0;i<qty;i++){
			cout<<"\nEnter id : ";
			cin>>itemid;
			items.getItems(itemid);
		
		}
			items.printBill();
			break;
		}
		case 'N' :{
			items.printBill();
			break;
		}
		default:{
			cout<<"Please select Y or N only: ";
			goto extra;
		}
	}
	
	
}
