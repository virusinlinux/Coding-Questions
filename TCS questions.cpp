#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 0;
    for(int i=0; i<4; i++){
        if(i%2==0)
        {
            ans+= pow(10,i) * max({a%10, b%10, c%10});
        }
        else
        {
            ans+= pow(10,i) * min({a%10, b%10, c%10});
        }
        a/=10;
        b/=10;
        c/=10;
    }
    cout<<ans<<endl;
    return 0;
}
