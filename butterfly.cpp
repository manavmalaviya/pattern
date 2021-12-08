// mirror pyramid
// butterfly pattern

#include<iostream>
using namespace std;
int main()
{



int n;
cin>>n;
for (int i = 1; i <= n; i++)
{
    for(int j = 1; j<=i; j++)
    {
        cout<<"*";

    }
    // there are 2n-2i spaces in between
    int space=2*n-2*i;
    for (int m = 0; m <space; m++)
    {
        cout<<" ";
    }
    
    // for(int m=1;m<=n-i;m++)
    // {
    //     cout<<" ";
    // }
    // for(int o =1;o<=n-i;o++)
    // {
    //     cout<<" ";
    // }
    for(int k=1;k<=i;k++)
    {
        cout<<"*";
    }
    cout<<endl;
}
for (int a = n; a >= 1; a--)
{
    for(int j = 1; j<=a; j++)
    {
        cout<<"*";

    }
    // there are 2n-2a spaces in between
    int space=2*n-2*a;
    for (int b = 0; b <space; b++)
    {
        cout<<" ";
    }
    for(int d=1;d<=a;d++)
    {
        cout<<"*";
    }
    cout<<endl;
}

// for(int a=1;a<=n;a++)
// {
//     for(int b = n; b>=a; b--)
//     {
//         cout<<"*";
//     }
//     for(int c=1;c<a;c++)
//     {
//         cout<<" ";
//     }
//     for(int d =1;d<a;d++)
//     {
//         cout<<" ";
//     }
//     for(int e=n;e>=a;e--)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
//  }

return 0;
} 

