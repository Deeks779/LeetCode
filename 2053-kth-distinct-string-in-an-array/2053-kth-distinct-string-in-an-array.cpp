class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> count;
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }
        int c=0;
        // string ans="";
        for(int i=0;i<arr.size();i++){
            if(count[arr[i]]==1){
                c++;
                if(c==k) return arr[i];
            }
        }
        return "";
    }
};