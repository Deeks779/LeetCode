class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        stack<int> st;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                st.pop();
            }else if(operations[i]=="D"){
                int a=st.top()*2;
                st.push(a);
            }else if(operations[i]=="+"){
                int f=st.top();
                st.pop();
                int a=st.top()+f;
                st.push(f);
                st.push(a);
            }else{
                int a=stoi(operations[i]);
                st.push(a);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};