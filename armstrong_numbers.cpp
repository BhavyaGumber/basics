class Solution {
  public:
    string armstrongNumber(int n){
        // code here 
        int dummy=n;
        int sum=0;
        while(dummy>0){
            int digit = dummy%10;
            sum=sum+digit*digit*digit;
            dummy=dummy/10;
            
            
        }
        if(n==sum){
            return "Yes";
        }
       return "No";
    }
};
