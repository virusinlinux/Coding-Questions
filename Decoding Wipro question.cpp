#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(long long n)
{
    long long originalNum = n;
    long long count =0;
    long long num = n;
    //no. of digits
    while(num!=0)
    {
        num/=10;
        count++;
    }
    num =n;
    long long x=0;
    while(num!=0)
    {
        x += pow(num%10, count);
        num/=10;
    }
    if(x == n)
    {
     return true;
    }
    return false;

}
   // main program ---------------------------- 
int main()
{
    long long num; cin>>num;
    int ans =0;
    if(isArmstrong(num))
    {
        while(num!=0)
        {
            if((num%10)%2==0)
            {
                ans+=num%10;
            }
            num/=10;
        }
    }
        else
        {
            while(num!=0)
            {
                if((num%10)%2!=0)
                {
                    ans+=num%10;
                }
                num/=10;
            }
        }
    
          cout<<ans<<endl;
    


    return 0;
}
