#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=(n+1)-i; j++)
        {
           cout<<"*"<<" ";
        }           
        for (int k = 1; k <i ; k++)
        {
            cout<<"    ";                     
        }
        for (int l = 1; l <=(n+1)-i; l++)
        {
           cout<<"*"<<" ";
        }                
        
        cout<<endl;
    
    }

    for (int i = n; i >=1; i--)
    {
         for (int j = 1; j <=(n+1)-i; j++)
        {
           cout<<"*"<<" ";
        }           
        for (int k = 1; k <i ; k++)
        {
            cout<<"    ";                     
        }
        for (int l = 1; l <=(n+1)-i; l++)
        {
           cout<<"*"<<" ";
        }         
        cout<<endl;    
    }    
        
    
    return 0;
    
}