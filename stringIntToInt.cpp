#include<iostream>
using namespace std;

int strToInt(char str[]);
 int main()
 {
     int value;
     char str[20];
     cout<<"Enter any string that has an  integer format"<<endl ;
     cin>>str;
     cout<<endl;
     value=strToInt(str);
     cout<<value<<endl;
     return 0;
 }
 int strToInt(char str[])
 {

     int i=0,sum=0;
     while(str[i]!='\0')
     {
         if(str[i]<48 || str[i]>57)
         {
             cout<<"unable to convert into integer";

         }
         else
         {
             sum=sum*10 +(str[i]-48);
             i++;
         }
     }
     return sum;
 }
