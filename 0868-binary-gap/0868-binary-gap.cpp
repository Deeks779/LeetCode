class Solution {
public:
    int binaryGap(int n) {
        // string bin="";
        int ans=0,l=0,f=0,i=0;
        while(n>0){
            // bin+=to_string(n%2);
            string bin=to_string(n%2);
            n/=2;
            if(f==0){
                if(bin[0]=='1'){
                    f=1; l=i;
                }
            }else{
                if(bin[0]=='1'){
                    ans=max(ans,i-l);
                    l=i;
                }
                // cout<<l<<" ";
            }
            i++;
        }
        // cout<<bin<<endl;
    //    for(int i=0;i<bin.size();i++){
    //         if(f==0){
    //             if(bin[i]=='1'){
    //                 f=1; l=i;
    //             }
    //         }else{
    //             if(bin[i]=='1'){
    //                 ans=max(ans,i-l);
    //                 l=i;
    //             }
    //             cout<<l<<" ";
    //         }
    //    }
    //    if(bin[])
        return ans;
    }
};