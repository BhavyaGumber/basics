#include <iostream>
#include<vector>

using namespace std;
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=n;j=i+j){ //ye loop ko j=i*i se shuru kroge toh bhi same ans aayega
                isPrime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            cout<<i<<" ";
        }
    }
}

int main()
{
   sieve(8);

    return 0;
}
