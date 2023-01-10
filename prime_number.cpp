#include <iostream>

using namespace std;
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<n;i++){ //efficient method is for(int i=2;i*i<=n;i++) 
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
   cout<< isPrime(n);

    return 0;
}
// time=O(n) in worst case
// time for efficient approach is - O(sqrt(n))
