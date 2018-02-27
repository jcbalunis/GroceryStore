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



                if( input == 'a' || input == 'A')
                {        
                        cout<< "What is the item?\n";
                        cin>> food;

                        if( numItems > 4) 
                        {
                                cout<< "You'll need a bigger list!\n";
                        }
                        else
                        {

                                list[numItems] = food;
                                numItems ++;
                        } 
                }





        }
        while( input != 'Q' && input != 'q'); 
        cout<< "==ITEMS TO BUY==" <<endl;
        cout<< "1 " <<list[0]<< endl;
        cout<< "2 " <<list[1]<< endl;
        cout<< "3 " <<list[2]<< endl;
        cout<< "4 " <<list[3]<< endl;
        cout<< "5 " <<list[4]<< endl; 


        return 0;
}
