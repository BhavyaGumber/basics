#include <stdio.h>
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b); // at first if a<b then first recursive call is only gonna swap these two
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    int lcm = (a*b)/gcd(a,b);
     cout<<lcm;
}
