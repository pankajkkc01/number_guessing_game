#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string name;
    int variable;
    int usrinput;
    char coin;
    do{
cout<<"entr your name "<< endl;
getline(cin,name);
cout<<endl;
srand(0);

variable=rand()%5 +1;
cout<<"entr  a number in between 1 to 5"<<endl;
cin>>usrinput;
if(variable==usrinput)
{
    cout<<"congrats you win"<<endl;
}


else
{
    cout<<"you loss";
}
cout<<"Do you want to play again Y/N"<<endl;
cin>>coin;
cout<<"game end"<<endl;

    }while(coin!='N');
    
}
