 string removePair(string str)
    {
        // Your code here
        stack<int> st;
        int n = str.length();
        string ans="";
        int i=0;
        while(i<n){
        if(st.empty()|| st.top()!=str[i]){
           st.push(str[i]);
         
           i++;
        }
        else{
           st.pop();
           i++;
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
    
        
    }
