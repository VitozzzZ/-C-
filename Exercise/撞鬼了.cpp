#include <iostream>
using namespace std;
int main()
{
    int N = 0,num=0,a[N][N];
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<N-1;i++)
    {
        for(int j=1;j<N-1;j++)
        {
            int x=a[i][j]+50;
            if(x<=a[i+1][j]&&x<=a[i-1][j]&&x<=a[i][j-1]&&x<=a[i][j+1])
                num++;
        }
    }
    cout<<num<<endl;
    return 0;
}
