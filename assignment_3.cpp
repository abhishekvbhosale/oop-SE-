/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 3 Bio Data */
#include <iostream>
#include <string.h>
using namespace std;
class personal   //parent class
{
	protected :
		char name[30];
		char gender[1];
		int dd,mm,yy;
	public :
		personal()
		{
			strcpy(name,"NULL");
			strcpy(gender,"N");
			dd=0;
			mm=0;
			yy=0;
		}
		void get_personal()
		{
			cout<<"\n Enter your name :\t";
			cin>>name;
			cout<<"\n Gender (M or F) :\t";
			cin>>gender;
			cout<<"\n Enter your Date of Birthdate :";
			cout<<"\n Date :\t";
			cin>>dd;
			cout<<"\n Month :\t";
			cin>>mm;
			cout<<"\n Year :\t";
			cin>>yy;
			
		}
};
class professional	//parent class
{
	protected :
		char co_name[30];
		char project[30];
		float experience;
	public :
		professional()
		{
			strcpy(co_name,"NULL");
			strcpy(project,"NULL");
			experience=0.0;
		}
		void get_professional()
		{
			cout<<"\n Enter the Company name :\t";
			cin>>co_name;
			cout<<"\n Project Name :\t";
			cin>>project;
			cout<<"\n Experience in the field :\t";
			cin>>experience;
		}
};
class academic	//parent class
{
	protected :
		int year;
		float percentage;
		char degree[10];
	public :
		academic()
		{
			year=0000;
			percentage=0.0;
			strcpy(degree,"NULL");
		}
		void get_academic()
		{
			cout<<"\n Year of passing :\t";
			cin>>year;
			cout<<"\n Percentage of last attended academic :\t";
			cin>>percentage;
			cout<<"\n Degrees Obtained :\t";
			cin>>degree;
		}
};
class biodata : public personal, public professional,public academic	//derieved class
{
	public :
		void show_data ()
		{
			cout<<"\n\t Personsal Records \t";
			cout<<"\n The Name is :\t"<<name;
			cout<<"\n Gender :\t"<<gender;
			cout<<"\n Birthdate :\t"<<dd<<"/"<<mm<<"/"<<yy;
			cout<<"\n The Name is :\t"<<name;
			cout<<"\n\n\n";
			cout<<"\n\t Academic Records \t";
			cout<<"\n Year of passing :\t"<<year;
			cout<<"\n Percentage of last attended :\t"<<percentage;
			cout<<"\n Degree obtained :\t"<<degree;
			cout<<"\n\n\n";
			cout<<"\n\t Professional records\t";
			cout<<"\n The Name of the Company is :\t"<<co_name;
			cout<<"\n The Project Name is :\t"<<project;
			cout<<"\n The Experience is :\t"<<experience<<"   Years";
			cout<<"\n\n\n";	
		}
};
int main()
{
	biodata b1;
	b1.get_personal();
	b1.get_academic();
	b1.get_professional();
	b1.show_data();
	return 0;
}
/*
	OUTPUT-
			 Enter your name :	abhishek

 Gender (M or F) :	M

 Enter your Date of Birthdate :
 Date :	03

 Month :	01

 Year :	2000

 Year of passing :	2017

 Percentage of last attended academic :	8-3

 Degrees Obtained :	
 Enter the Company name :	Info

 Project Name :	Micro

 Experience in the field :	4

	 Personsal Records 	
 The Name is :	abhishek
 Gender :	M
 Birthdate :	3/1/2000
 The Name is :	abhishek



	 Academic Records 	
 Year of passing :	2017
 Percentage of last attended :	8
 Degree obtained :	-3



	 Professional records	
 The Name of the Company is :	Info
 The Project Name is :	Micro
 The Experience is :	4   Years

*/
