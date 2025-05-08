public class Solution {
    public IList<string> LetterCombinations(string digits) {
        if (string.IsNullOrEmpty(digits))
        {
            return new List<string>();
        }

        string[] mapping = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        List<string> res = new List<string> { "" };

        foreach (char digit in digits)
        {
            string letters = mapping[digit - '2'];
            List<string> temp = new List<string>();

            foreach (string combination in res)
            {
                foreach (char letter in letters)
                {
                    temp.Add(combination + letter);
                }
            }
            res = temp;
        }
        
        return res;
    }
}
