//Author: Joseph Balunis
#include<iostream>
#include<vector>
using namespace std;


int main()
{
        vector <string> list;
        string food;
        char input;
        int number;
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
                        list.push_back(food);



                }

                if( list.size() == 0)
                {
                    cout<< "No items to buy!" <<endl;
                }





        }
        while( input != 'q' && input != 'Q');


              if( list.size() >= 1)
              {
              cout<< "==ITEMS TO BUY==" <<endl;
              }

        for(int i = 0; i < list.size(); i++)
        {
               number = 1 + i;
               cout << number;
               cout<< list[i]<<endl;
               
        }


        return 0;
}
