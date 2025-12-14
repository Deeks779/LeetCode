#include <string>
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0,j=0;
        while(i<n){
            char c=chars[i];
            int count=0;
            while(i<n && c==chars[i]){
                count++;
                i++;
            }
            chars[j++]=c;
            if(count>1){
                string s=to_string(count);
                for(char x:s){
                    chars[j]=x;
                    j++;
                }
            }
        }
        return j;
        // char c=chars[0];
        // while(j<n){
        //     if(c==chars[j]){
        //         count++;j++;
        //     }else{
        //         chars[i]=c;
        //         c=chars[j];
        //         i++;
        //         if(count>1){
        //             string s=to_string(count);
        //             for(char x:s){
        //                 chars[i]=x;
        //                 i++;
        //             }
        //         }
        //         count=0;
        //     }
        // }
        // if(count>1){
        //     chars[i]=c;
        //     i++;
        //     string s=to_string(count);
        //     for(char x:s){
        //         chars[i]=x;
        //         i++;
        //     }
        // }else i++;
        // return i;
    }
};