#include <iostream>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int i=0;i<N;i++)
    {
        int Ngreater=0;
        for(int j=0;j<N;j++)
        {
            if(a[j]>a[i])
                Ngreater++;
        }
        if(Ngreater==K-1)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
