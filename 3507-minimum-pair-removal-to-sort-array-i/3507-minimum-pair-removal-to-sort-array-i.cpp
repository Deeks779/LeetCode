class Solution {
public:
    bool check(list<int> arr){
        if (arr.size() <= 1) return true;
        auto prev = arr.begin();
        auto curr = next(prev);
        while (curr != arr.end()) {
            if (*prev > *curr) return false;
            ++prev;
            ++curr;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        list<int> arr;
        for(int i:nums) arr.push_back(i);
        int count=0;
        while(!check(arr)){
            int n=INT_MAX;
            auto it =arr.begin();
            auto it1=next(it);
            auto temp=it;
            while(it1!=arr.end()){
                if((*it+*(it1))<n){
                    n=*it+*(it1);
                    temp=it;
                }
                it++;it1++;
            }
            *temp=n;
            arr.erase(next(temp));
            count++;
        }
        return count;
    }
};