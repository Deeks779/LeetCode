class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        // map<char,int> count;
        // for(int i=0;i<n;i++){
        //     count[word[i]]++;
        // }
        // int ans=1;
        // for(auto it=count.begin();it!=count.end();it++){
        //     ans+=(it->second-1);
        // }
        int ans=0,i=1,count=0;
        char letter=word[0];
        while(i<n){
            if(letter==word[i]){
                ans++;
            }else{
                letter=word[i];
            }
            i++;
        }
        return ans+1;
    }
};