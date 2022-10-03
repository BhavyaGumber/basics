class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N>0){
            cout<<"GFG"<<" ";
            printGfg(N-1);
        }
        else{
            return;
        }
    }
};
