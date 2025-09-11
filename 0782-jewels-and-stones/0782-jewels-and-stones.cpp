class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> jew(jewels.begin(),jewels.end());
        int n=stones.size(),c=0;
        for(int i=0;i<n;i++){
            if(jew.find(stones[i])!=jew.end()) c++;
        }
       return c; 
    }
};