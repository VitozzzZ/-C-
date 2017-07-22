//输入二个长度不超过20的字符串，将短字符串输入到长字符串的后面


#include <iostream>
using namespace std;
int main()
{
    int len1,len2;char str1[40],str2[40];
    cin.getline(str1,20);
    cin.getline(str2,20);
    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);
    if(len1>=len2)
    {
        for(len2=0;str2[len2]!='\0';len2++)
            str1[len1++]=str2[len2];
        str1[len1]='\0';
        cout<<str1<<endl;
    }
    else
    {
        for(len1=0;str1[len1]!='\0';len1++)
            str2[len2++]=str1[len1];
        str2[len2]='\0';
        cout<<str2<<endl;
    }
    return 0;
}
