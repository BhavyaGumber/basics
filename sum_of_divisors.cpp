class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
   
        long long sum=0;
        for(long long i=1;i<=N;i++){
            
            sum += (N / i) * i; 
            
        }
        return sum;
       
    }
};
