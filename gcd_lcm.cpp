class Solution {
  public:
  long long find_gcd(long long p, long long q){
      if(q==0){
          return p;
      }
      else{
          return find_gcd(q,p%q);
      }
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> v;
        long long gcd = find_gcd(A,B);
        
    long long lcm;
    lcm = (A*B)/gcd;
    v.push_back(lcm);
    v.push_back(gcd);
    return v;
       
        
    }
};
