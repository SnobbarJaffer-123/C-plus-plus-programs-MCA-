#include<iostream>
using namespace std;

string numberToWord(int num)
{


    string ones[]={" ","one ","Two","Three","FOur","Five","six","seven","eight","nine"};
    string teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[]={" "," ","twenty","thirty","fourty","fifty","sixty","Seventy","Eighty","Ninety"};

    string result;

    if(num>=100 && num<=999)
   {
        //result+=numberToWord(num/100)+" Hundrand";
        result=ones[(num/100)]+" Hundrand";
        num%=100;
   }
    if(num>=20 && num<100 )
    {
        result+=" "+tens[num/10]+" ";
        num%=10;
    }
   if(num>=10 && num<20)
    {
        result+=" "+teens[num-10]+" ";
        num=0;
    }
    if(num>0 && num<10)
    {
        result+=ones[num]+" ";
    }
    if(num==0)
    {
        result+=" zero";
    }
    return result;

   /* if(num>=1 && num<=9){
        return ones[num-1];
    }
    else if(num>=10 && num<20)
    {
        result+=teens[num-10]+" ";
        return result;
    }
    else if(num>=20 &&num<=99)
    {
        int tensDigit=num/10;
        int onesDigit=num%10;
        result+=tens[tensDigit-2]+" "+ones[onesDigit-1];
        return result;
    }
    else if(num>=100 && num<=999)
    {
        int hundrandsDigit=num/100;
        //int num=num%100;
        int tensDigit=num/10;
        int onesDigit=num%10;
       // result+=ones[hundrandsDigit-1]+" hundrand " +tens[tensDigit-2]+"  "+ones[onesDigit-1];

        result+=ones[hundrandsDigit-1]+" hundrand " +((tensDigit-2))!=0?tens[tensDigit-2]:"" +"  "+ones[onesDigit-1];

        return result;

    }*/
}
int main()
{
    int num;
    cout<<"enter a number in a range from 0 to 999"<<endl;
    cin>>num;

    string wordRepresentation=numberToWord(num);
    cout<<"Word representation of "<< num << " is "<<wordRepresentation<<endl;
    return 0;
}
