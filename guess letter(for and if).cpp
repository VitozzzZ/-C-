#include <iostream>
using namespace std;
int main()
{
    char a ='A';
    cout<<"猜猜我是哪个字母,最多可以猜五次哦:"<<endl;
    int i=0;
    for(i=0;i<5;i++)
    {
        cin>>a;
        if(a=='G')
        {
            cout<<"被你猜中了!"<<endl;
            break;
        }
        else
        cout<<"你猜错了，接着猜吧!"<<endl;
    }
    return 0;
}

    
    
