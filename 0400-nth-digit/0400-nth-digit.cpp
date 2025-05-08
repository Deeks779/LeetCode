#include <string>
class Solution {
public:
    int findNthDigit(int n) {
        // Step 1: Initialize variables
        int digit_length = 1;      
        long count = 9;
        long start = 1;

        // Step 2: Find the correct digit group
        while (n > digit_length * count) {
            n -= digit_length * count;
            digit_length++; 
            count *= 10; 
            start *= 10;    
        }

        // Step 3: Find the exact number
        long number = start + (n - 1) / digit_length;

        // Step 4: Find the digit within that number
        string num_str = to_string(number);    
        return num_str[(n - 1) % digit_length] - '0';  
    }
};