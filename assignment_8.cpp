#include<iostream>
#include<string.h>
using namespace std;
class Details
{
		float age;
		float salary;
		char name[50];
		char city[10];
	public :
		Details()
		{
			age=0;
			salary=0;
		}
		void get_info()
		{
			cout<<"\nEnter the name-\t";
			cin.getline(name,50);
			cout<<"\nEnter age-\t";
			cin>>age;
			try
			{
				if(age<15 || salary>55)
					throw(salary); 
			}
			catch(float)
			{
				cout<<"\nInvalid Age";
				cout<<"\nEnter Valid Age";
				cout<<"\nEnter age-\t";
				cin>>age;
			}
			cout<<"\nEnter the salary- \t";
			cin>>salary;
			try
			{
				if(salary<50000 || salary>100000)
					throw(salary); 
			}
			catch(float)
			{
				cout<<"\nInvalid Salary";
				cout<<"\nEnter Valid Salary";
				cout<<"\nEnter Salary-\t";
				cin>>salary;
			}
			cout<<"\nEnter City-\t";
			cin>>city;
			try{
				if(strcmp(city,"pune")!=0 && strcmp(city,"mumbai")!=0 && strcmp(city,"delhi")!=0 && strcmp(city,"nashik")!=0)
				throw(city);
			}
			catch(char ciyt[])
			{
				cout<<"\nEnter Valid city Name\t";
				cin>>city;
			}
		}
		void show_info()
		{
			cout<<"\n\n\n";
			cout<<"\nName-\t"<<name<<endl;
			cout<<"\nAge-\t"<<age<<endl;
			cout<<"\nSalary-\t"<<salary<<endl;
			cout<<"\nCity-\t"<<city<<endl;
		}	
};
int main()
{
	Details d1;
	d1.get_info();
	d1.show_info();
}








