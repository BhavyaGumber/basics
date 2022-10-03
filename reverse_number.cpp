#include <iostream>

using namespace std;

int main()
{
   int N=123;
   int reverse=0;
   int num=N;
   while(num>0){
       int digit = num%10;
       reverse = 10*reverse+digit;
       num=num/10;
   }
   cout<<"reversed number is "<<reverse;
}
