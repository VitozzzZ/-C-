//方法一
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int l=0,r=9;
    while(l<=r)//奇数放到左边，偶数放到右边
    {
        bool leftIsOdd=a[l]%2==1;
        bool rightIsEven=a[r]%2==0;
        if(leftIsOdd)
        {
            l++;
        }
        else if(rightIsEven)
        {
            r--;
        }
        else if(!leftIsOdd&&!rightIsEven)
        {
            int temp=a[l];
            a[l]=a[r];
            a[r]=temp;
        }
    }
    int start=0,end=l;//对奇数进行冒泡排序
    for(int i=start;i<end-1;i++)
    {
        for(int j=start+1;j<start+end-i;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    start=l,end=10;//对偶数进行冒泡排序
    for(int i=start;i<end-1;i++)
    {
        for(int j=start+1;j<start+end-i;j++)
        {
            if(a[j-1]>a[j])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}
//方法二
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=1;j<10-i;j++)
        {
            bool leftIsEven=a[j-1]%2==0;
            bool rightIsEven=a[j]%2==0;
            if((leftIsEven&&!rightIsEven)||(leftIsEven==rightIsEven&&a[j-1]>a[j]))//用逻辑按照二种规范冒泡
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
        
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<' ';
    }
}
