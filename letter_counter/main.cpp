//
//  main.cpp
//  letter_counter
//
//  Created by Marcin Ostolski on 13/02/2022.
//

#include <iostream>
#include <string>
using namespace std;

void welcome()
{
    cout<<"\t\tHello!\nI will count letters!\n\n";
};


int main(int argc, const char * argv[])
{
    int s;
    int count[123]={};
    
    welcome();                          //welcome function
    
    cout<<"\nEnter quantity of sentences: ";
    cin>>s;
    
    char tab[s][150];
    
    cin.ignore();
    for (int i=0;i<s;i++)
    {
        cout<<"\nEnter sentence number "<<i+1<<": "<<endl;
        cin.getline(tab[i],123);        //line loading
       
    }
    cout<<"\nYours sentences:\n";
    for(int i=0;i<s;i++)
        cout<<tab[i]<<endl;
    cout<<"\n\nLetters and their quantity:\n";
    for(int i=0;i<s;i++)
    {
        int y=0;                        //variable for moving through letters
        while(tab[i][y])
        {
            ++count[tab[i][y]];         //counting characters
            y++;
        }
    }
    
    for(int i=65;i<91;i++)              // big letters
        if(count[i]>0)
            cout<<(char)i<<" - "<<count[i]<<endl;
    
    for(int i=97;i<123;i++)             //small letters
        if(count[i]>0)
            cout<<(char)i<<" - "<<count[i]<<endl;
    
  
    
}
