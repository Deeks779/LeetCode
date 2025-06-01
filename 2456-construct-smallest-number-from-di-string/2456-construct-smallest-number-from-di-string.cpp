class Solution {
public:
    string smallestNumber(string pattern) {
    string ans;
    stack<char> stack{{'1'}};

    for (const char c : pattern) {
      char maxNum = stack.top();
      if (c == 'I')
        while (!stack.empty()) {
          maxNum = max(maxNum, stack.top());
          ans += stack.top(), stack.pop();
        }
      stack.push(maxNum + 1);
    }

    while (!stack.empty())
      ans += stack.top(), stack.pop();

    return ans;
    }
};