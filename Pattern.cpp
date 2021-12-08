#include<iostream>
using namespace std;
int main()
 {
     for (int x = 0; x < 8; x++)
     {
        // for (int j = 8; j > x+1; j--)
        // {
        //     cout<<" ";
        // }
        
        // for (int i = 0 ; i < x+1; i++)
        // {
        //    cout<<"*";
              
        // }
        // cout<<endl;
        for(int k=0;k<8;k++)
        {
            if(k<8-(x+1))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
     }
     
     return 0;
 }