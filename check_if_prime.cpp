#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
bool checkIfPrime(int N){
    for(int i=2;i<sqrt(N);i++){
        if(N%i==0){
            return false;
        }
        
    }
    return true;
}

int main()
{
    int N;
    cin>>N;
   bool ans= checkIfPrime(N);
    if(ans==true){
        cout<<"yes it is a prime number";
    }
    else{
        cout<<"No it is not a prime number";
    }

    return 0;
}
