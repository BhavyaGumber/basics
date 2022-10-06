#include <stdio.h>
#include <iostream>
using namespace std;
int fac(int x){
    if((x==1)||(x==0)){
        return 1;
    }
    else{
        return (x*fac(x-1));
    }
}

int main()
{
    int x, i=0;
    cout<<"Enter the number of terms of series : ";
    cin>>x;
    // while(i<x){
    //     cout<<" "<<fac(i);
    //     i++;
    cout<< fac(x);
    
    
    

    return 0;
}
