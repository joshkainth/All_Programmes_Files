#include<iostream>
using namespace std;
main()
{
	//cout<<"second practical Q1."<<endl;
	 float tax,income,final_income;
	 cout<<"enter the income of an employee"<<endl;
	 cin>>income;
	 if(income>0&&income<=15000)
	 {
	 	tax=0;
	 	cout<<"0% tax is: "<<tax<<endl;
	 	final_income=income;
//	 	cout<<"income of the employee is - "<<endl;
//	 	cout<<final_income;
	 	
	 }
	 
	 else if(income>15000 && income<=25000)
	 {
	 	tax=income*0.05;
	 	final_income=income-tax;
	 	cout<<"5% tax is:"<<tax<<endl;
//	 	cout<<"income of the employee is - "<<endl;
//	 	cout<<final_income;
	 }
	else {
		tax=income*0.1;
	 	cout<<"10% tax "<<tax<<endl;
	 	final_income=income-tax;
//	 	cout<<"income of an employee is - "<<endl;
//	 	cout<<final_income;
	}	 
//	cout<<"tax is: "<<tax<<endl;
	cout<<"income of the employee is: " <<final_income <<endl;
}
