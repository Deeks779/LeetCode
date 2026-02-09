class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        int n=details.size();
        for(int i=0;i<n;i++){
            string s=details[i];
            string s2=s.substr(11, 2);
            int age=stoi(s2);
            if(age>60) ans++;
        }
        return ans;
    }
};