class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int till=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                st.push(word[i]);
                till=i+1;
                break;
            }else{
                st.push(word[i]);
            }
        }
        if(till==0) return word;
        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result+word.substr(till);
    }
};