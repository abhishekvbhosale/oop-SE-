/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 1 Student Database */
#include <iostream>
#include <string.h>
using namespace std;

class student 
{
	private:
	int roll;
	char name[30];
	int mobile;
	public :
	static int semester;
	student()
	{
		cout<<"\n Inside the constructor\n";
		roll=0;
		strcpy(name,"AAA");
		mobile=9100;
	}
	
	student(student&temp) //copy constructor
	{
		roll=temp.roll;
		strcpy(name,temp.name);
		mobile=temp.mobile;
	}
	student (int roll,int mobile,char name[30]) //parameterized conxtrutor
	{
	  this->roll=roll;
	  this->mobile=mobile;
	  strcpy(this->name,name);
	}
	  
	~ student()
	{
		cout<<"\n Inside the destructor\n";	
	}
	void getData()
	{
		cout<<"\n Enter the Name of Student\n";
		cin>>name;
		cout<<"\n Enter the Roll number of Student\n";
		cin>>roll;
		cout<<"\n Enter the Mobile number of Student\n";
		cin>>mobile;
	}
	friend void showData(student &obj);
};
	void showData(student &obj)
	{
		cout<<"\n The name of Student is\n"<<obj.name;
		cout<<"\n The Roll Number of Student is\n"<<obj.roll;
		cout<<"\n The Mobile number of Student is\n"<<obj.mobile;
		cout<<"\n";
	}
	int student:: semester=1;
	
main ()
{
	
	student s1;
	
	cout<<"\nEnter information for Student";
	s1.getData();
	showData(s1);
	
	cout<<"\nThis is copy constructor_";
	student s3(s1);
	showData(s3);
	
	cout<<"\nThis is parameterized constructor_";
	student s2(3,33,"ross");
	showData(s2);	
	
	
	int n,i;
	cout<<"\n Enter the number of students \n";
	cin>>n;
	
	student* s[n];
	for(i=0;i<n;i++)
		s[i]=new student();
	for(i=0;i<n;i++)
		s[i]->getData();
	 
	for(i=0;i<n;i++)
	{	
		cout<<endl;
		cout<<"Student "<<i+1<<endl;
		showData(*s[i]);
	}
	for(i=0;i<n;i++)
	  delete(s[i]);
}
