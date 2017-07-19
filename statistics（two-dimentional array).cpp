// 某学校有1000个老师，发布在20个不同的学院，每个学院最多12个系，编写一个程序，输入每位老师所在的院系编号（院编号1-20，系编号1-12），输出每个系老师数量
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int teacher[21][13];
    int school,department;
    int i,j;
    char name[30];
    for(i=0;i<1000;i++)
    {
        cin>>name>>school>>department;
        teacher[school][department]++;
    }
    for(i=1;i<21;i++)
    for(j=1;j<13;j++)
        cout<<setw(4)<<teacher[i][j];
    cout<<endl;
    return 0;
}
