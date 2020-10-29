#include<iostream>
#include<string>
#include<stdlib.h>


using namespace std;

class Book
{
private:
    string title;
    string author;
    int price;
    double ISBN_NO;
public:
    Book()
    {
        title='\0';
        author='\0';
        price=0;
        ISBN_NO=0;
    }
    void get_title();
    void get_author();
    void get_price();
    void get_ISBN_NO();
    void display();
    int search_book(Book A[],int w,double i);
};


void Book::get_title()
{	 	  	 		   	      	        	 	
    getline(cin,title);
}

void Book::get_author()
{
    getline(cin,author);
}

void Book::get_price()
{
    cin>>price;
}

void Book::get_ISBN_NO()
{
    cin>>ISBN_NO;
}

void Book::display()
{
    cout<<endl;
    cout<<"name:"<<title<<endl;
    cout<<"author:"<<author<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"ISBN:"<<ISBN_NO<<endl;
    cout<<endl;
}

int Book::search_book(Book A[],int k,double n)
{
    for(int i=0;i<k;i++)
    {
    if(n==A[i].ISBN_NO)
        return i;
    }
    return -1;
}	 	  	 		   	      	        	 	


int main()
{
    Book b[5];
    int z;

    for(int x=0;x<5;x++)
    {
        cout<<"enter the name of the book"<<endl;
        b[x].get_title();

        cout<<"enter the name of the author of the book"<<endl;
        b[x].get_author();

        cout<<"enter the price of this book"<<endl;
        b[x].get_price();
        cin.ignore();

        cout<<"enter ISBN no"<<endl;
        b[x].get_ISBN_NO();
        cin.ignore();
    }

    for(int y=0;y<5;y++)
    {
        b[y].display();
    }


    cout<<"want to search a book(y/n)";
    char j;
    cin>>j;

    if(j=='Y'||j=='y')
  {	 	  	 		   	      	        	 	
      cout<<"enter the ISBN no"<<endl;
      double k;
      cin>>k;

         int z=b[0].search_book(b,4,k);


    if(z<0)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else
    {
        cout<<" FOUND AT:"<<z+1<<endl;
    }
  }
  else
    exit(0);
}
