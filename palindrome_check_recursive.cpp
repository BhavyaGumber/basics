#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool recpal(int i,string s, int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    else{
        return(recpal(i+1,s,n));
    }
}


int main()
{
    string s;
    cin>>s;
    bool flag = recpal(0,s,s.size());
    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }

    return 0;
}
