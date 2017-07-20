#include <iostream>
using namespace std;
int main()
{
    bool prime=true;
    for(int i=2;i<100;i++)
    {
        prime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                prime=false;
        }
        if (prime==true)
            cout<<i<<endl;
    }
    return 0;
   
}


//埃拉托斯特尼筛子
#include <iostream>
using namespace std;
int main()
{
    int sum=0,a[100]={0};
    for(int i=2;i<100;i++)//优化1 i<sqrt(100.0)就好了
    {
        sum=i;//优化2 此行后面加上if(a[sum]==0)
        while(sum<100)
        {
            sum=sum+i;
            if(sum<100)
                a[sum]=1;
        }
    }
    for(int i=2;i<100;i++)
    {
        if(a[i]==0)
            cout<<i<<endl;
    }
    return 0;
}
