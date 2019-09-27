/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 2 Complex Numbers */
#include<iostream>
#include <stdio.h>
using namespace std;
class complex
{
	float real;
	float img;
	public :
	complex()
	{
		real=0;
		img=0;
	}
	void read()
	{
		cout<<"\n Enter the real part of number__";
		cin>>real;
		cout<<"\n Enter the imaginary part of number__";
		cin>>img;
	}
	void display()
	{
		if(img>0)
		cout<<real<<"+i"<<img;
		else
		cout<<real<<"-i"<<abs(img);
		cout<<"\n";
	}
	complex operator +(complex& s)
	{
		complex c1;
		c1.real=real+s.real;
		c1.img=img+s.img;
		return c1;
	}
	complex operator -(complex& s)
	{
		complex c1;
		c1.real=real-s.real;
		c1.img=img-s.img;
		return c1;
	}
	complex operator *(complex& s)
	{
		complex c1;
		c1.real=real*s.real-img*s.img;
		c1.img=real*s.img+img*s.img;
		return c1;
	}
	friend istream &operator >>(istream& in, complex& c);
	friend ostream &operator <<(ostream& out, complex& c);
};

istream &operator >>(istream& in, complex& c)
{
	cout<<"Enter the real part:__";
	in>>c.real;
	cout<<"Enter the imaginary part:__";
	in>>c.img;
}

ostream &operator <<(ostream& out, complex& c)
{
	cout<<"The Complex no is:\t";
	if(c.img>0)
	out<<c.real<<"+"<<c.img<<"i";
	else
	out<<c.real<<"-"<<abs(c.img)<<"i";
}
	
int main()
{
	complex c1,c2;
	c1.read();
	cout<<"\n The complex number is __";
	c1.display();
	cin>>c2;
	cout<<"\n The complex number is __";
	cout<<c2;
	complex c3;
	c3=c1+c2;
	cout<<"\n The addition is __";
	c3.display();
	complex c4;
	c4=c1-c2;
	cout<<"\n The subtraction is __";
	c4.display();
	complex c5;
	c5=c1*c2;
	cout<<"\n The multiplication is __";
	c5.display();
	return 0;
}
/*
		OUTPUT-
			 Enter the real part of number__3    

 Enter the imaginary part of number__2

 The complex number is __3+i2
Enter the real part:	4
Enter the imaginary part:	3

 The complex number is __The Complex no is:	4+3i
 The addition is __7+i5

 The subtraction is __-1-i1

 The multiplication is __6+i15

*/

