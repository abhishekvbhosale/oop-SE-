/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 4 Array using class */
#include <iostream>
using namespace std;
class cpparray
{
		int cp[100],n;
	public :
		cpparray()
		{
			n=0;
		}
		friend istream &operator >>(istream &in,cpparray &c);
		friend ostream &operator <<(ostream &out,cpparray &c);
		int sizeofarray()
		{
			cout<<"\nEnter the size of array\t";
			cin>>n;
			return n;
		}
		void operator =(cpparray &c)
		{
			n=c.n;
			int i;
			for(i=0;i<n;i++)
				cp[i]=c.cp[i];
		}
		int &operator [](int subship)
		{
			if(subship > n)
			{
				cout<<"\nThe element is not present\n";
				cout<<"\nElement cannot be changed\n";
				return cp[n-1];
			}
			else if(subship < 0)
			{
				cout<<"\nInvalid\n";
				cout<<"\nElement cannot be changed\n";
				return cp[0];
			}
			else
			{
				char ch;
				cout<<"\nEnter the\n1.No Change\n2.Change the element\n\t";
				cin>>ch;
				switch(ch)
				{
					case '1':
						return cp[subship];
						break;
					case '2':
						cout<<"\nEnter the element\t";
						cin>>cp[subship];
						return cp[subship];
						break;
				}
			}
		}
};
	istream &operator >>(istream &in, cpparray &c)
	{
		cout<<"\nEnter the elements of array\n"; 
		 int i;
		 for(i=0;i<c.n;i++)
		 	in>>c.cp[i];
	}
	ostream &operator<<(ostream &out,cpparray &c)
	{
		cout<<"\nThe array is\n";
		int i;
		for(i=0;i<c.n;i++)
			out<<c.cp[i];
	}
int main()
{
	cpparray c1;
	c1.sizeofarray();
	cin>>c1;
	cout<<c1;
	int e;
	cout<<"\nEnter the subship to be found\t";
	cin>>e;
	cout<<"\n The subship is\t";
	cout<<c1[e-1];
	cpparray c2;
	cout<<"\nThe copied array is";
	c2=c1;
	cout<<c2;
	cout<<endl;
}
/*
OUTPUT-
	Enter the size of array	5

Enter the elements of array
5
4
3
2
1

The array is
54321
Enter the subship to be found	2

 The subship is	
Enter the
1.No Change
2.Change the element
	2

Enter the element	6
6
The copied array is
The array is
56321

*/
