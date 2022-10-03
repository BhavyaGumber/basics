class Solution
{
	public:
		string is_palindrome(int X)
		
		{
		    // Code here.
		    int dummy=X;
		    int Y=0;
		    while(X>0){
		        int digit = X%10;
		        Y=Y*10+digit;
		        X=X/10;
		    }
		    if(dummy==Y){
		        return "Yes";
		    }
		    else{
		        return "No";
		    }
		    
		}
};
