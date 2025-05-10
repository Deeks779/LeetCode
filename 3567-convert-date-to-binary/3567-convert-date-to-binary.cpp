#include <string>
class Solution {
public:
string intToBinary(int n) {
    if (n == 0) return "0";
    
    string binary = "";
    while (n > 0) {
        binary = (n % 2 == 0 ? "0" : "1") + binary;
        n /= 2;
    }
    return binary;
}
    string convertDateToBinary(string date) {
        stringstream ss(date);
        string part;
        string ans = "";
        
        while (getline(ss, part, '-')) {
            int num = stoi(part);  
            string binaryString = intToBinary(num);  
            ans += binaryString + '-';  
        }
        
        if (!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }
        
        return ans;
    }
};