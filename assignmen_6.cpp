/*Abhishek Bhosale. Roll.no.: 08. SE A-1
  Assignment no.: 6 Book Club */
#include <iostream>
class important
{
	protected :
		float price;
		char title[30];
	public:
		virtual void read ()=0;
		virtual void dispaly()=0;
};
class book : public virtual important
{
		int pages;
	public:
		void read()
		{
			cout<<"\nEnter the title of the book\n\t";
			cin.getline(title);
			cout<<"\nEnter the price for the book";
			cin>>price;
			try
			{
				if(price > 500)
					throw(price);
			}
			catch(float)
			{
				cout<<"\nThe price is not affordable\nEnter price which is less than 500\t";
				cin>>price;
			}
			cout<<"\nEnter the number of pages\t";
			cin>>pages;
		}
		void dispaly()
		{
			cout<<"\nTitle\t\tNumber of pages\t\tPrice\n";
			cout<<title<<"\t\t"<<pages<<"\t\t"<<price;
		}
};
class audio : public virtual important
{
		int time;
	public :
		void read()
		{
			cout<<"\nEnter the title of the audio book:\t";
			cin>>title;
			cout<<"\nEnter the price of the audio book:\t";
			cin>>price;
			if(price > 500)
				cout<<"\nExpensive\nEnter new price\t";s
