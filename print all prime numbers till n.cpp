#include <iostream>

using namespace std;
void printPrime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i;
        }
    }
}

int main()
{
   printPrime(5);

    return 0;
}
// time-O(N*sqrt(n))
