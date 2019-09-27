/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 7 Sorting using class template */
#include <iostream>
using namespace std;
template <class T>
class sort
{
			T a[50];
			int n;
		public:
		void create();
		void display();
};
template <class T>
void sort<T> :: create()
{
	cout<<"\nEnter the number of elements:\t";
	cin>>n;
	cout<<"\nEnter the elements of array\n";
	for(int i=0;i<n;i++)
		{
			cin>>a[i];
		} 
}
template <class T>
void sort<T>:: display()
{
	cout<<"\nThe array is\n\t";
			for(int i=0;i<n;i++)
				cout<<a[i]<<"\t";
			cout<<"\nThe array after sorting is\n";
			for(int i=0;i<n;i++)
			{
				int min=i;
				for(int j=i+1;j<n;j++)
				{
					if(a[j]<a[min])
						min=j;
				}
				
					T temp=a[i];
					a[i]=a[min];
					a[min]=temp;
					for(int i=0;i<n;i++)
						cout<<a[i]<<"\t";
					cout<<endl;
			}
}
int main()
{
		int ch;
		char choice;
		do
		{
		cout<<"\nEnter the choice for:- \n\t1.Integer sort\n\t2.Character sort\n\t3.Float sort\n\t4.Exit\n\t";
		cin>>ch;
		switch(ch)
		{
			case 1 :
					sort<int> s1;
					s1.create();
					s1.display();
					break;
			case 2 :
					sort<char>s2;
					s2.create();
					s2.display();
					break;
			case 3 :
					sort<float>s3;
					s3.create();
					s3.display();
					break;
			case 4:
					break;
		}
		cout<<"\nDo you wish to continue?(press Y for yes)\t";
		cin>>choice;
		}while(choice=='y'||choice=='Y');
			cout<<"\n\n";	
	return 0;
}
/*
OUTPUT -
		Enter the choice for:- 
	1.Integer sort
	2.Character sort
	3.Float sort
	4.Exit
	1

Enter the number of elements:	4

Enter the elements of array
5
3
4
1

The array is
	5	3	4	1	
The array after sorting is
1	3	4	5	
1	3	4	5	
1	3	4	5	
1	3	4	5	

Do you wish to continue?(press Y for yes)	y

Enter the choice for:- 
	1.Integer sort
	2.Character sort
	3.Float sort
	4.Exit
	2

Enter the number of elements:	4

Enter the elements of array
a
h
y
n

The array is
	a	h	y	n	
The array after sorting is
a	h	y	n	
a	h	y	n	
a	h	n	y	
a	h	n	y	

Do you wish to continue?(press Y for yes)	y

Enter the choice for:- 
	1.Integer sort
	2.Character sort
	3.Float sort
	4.Exit
	3

Enter the number of elements:	4

Enter the elements of array
44.66
22.55
99.55
11.22

The array is
	44.66	22.55	99.55	11.22	
The array after sorting is
11.22	22.55	99.55	44.66	
11.22	22.55	99.55	44.66	
11.22	22.55	44.66	99.55	
11.22	22.55	44.66	99.55	

Do you wish to continue?(press Y for yes)	n



*/
