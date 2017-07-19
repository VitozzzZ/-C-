#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    
    for(int i=0;i<5;i++)
    {
        int a=abs(i-2);
        int b=-2*a+5;
        for(int j=0;j<a;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<b;k++)
        {
            cout<<"X";
        }
        cout<<endl;
        
    }
    return 0;
}
