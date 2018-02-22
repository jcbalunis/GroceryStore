//Author: Joseph Balunis
#include<iostream>
#include<string>
using namespace std;


int main()
{
        string list[5], food; //array of 5 strings
        int numItems = 0;
        char input;
        do
        {

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
               
               
               if( numItems >= 5)
                {
                cout<< "You'll need a bigger list. \n";
                        input = 'q';
                }
               
               
               if( input == 'a' || input == 'A' )
                {        
                cout<< "What is the Item? \n";
                cin>> food;
                list[numItems] = food;
                numItems ++;
                }

        }
        while( input != 'Q' && input != 'q'); 



        return 0;
}
