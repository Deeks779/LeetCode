class Solution {
public:
    long long sum(vector<int> time,long long ans){
        long long sum=0,n=time.size();
        for(int i=0;i<n;i++){
            sum+=ans/time[i];
        }
        return sum;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=1,high=1LL*(*min_element(time.begin(),time.end()))*totalTrips;
        while(low<high){
            long long mid=low+(high-low)/2;
            long long total=sum(time,mid);
            if(total>=totalTrips){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return high;
    }
};