//A
//A B 
//A B C 
//A B C D 
//A B C D E
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows:- ";
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        char k='A';
        for (int j = 1; j <= i; j++)
        {
            cout<<k<<" ";
            k++;    
        }   
        cout<<endl;   
    }
return 0;
}