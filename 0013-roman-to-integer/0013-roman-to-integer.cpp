class Solution {
public:
    int romanToInt(string s) {
        vector<int> values = {1, 5, 10, 50, 100, 500, 1000};
        vector<string> symbols = {"I", "V", "X", "L", "C", "D", "M"};
        int ans=0;
        for (int i=0;i<s.size();i++)
        {
            int current = 0;
            int next = 0;
            for (int j=0;j<values.size();j++)
            {
                if (string(1,s[i])==symbols[j])
                {
                    current = values[j];
                }
                if (i+1<s.size() && string(1,s[i+1])==symbols[j])
                {
                    next = values[j];
                }
            }
            if (current<next)
            {
                ans-=current;
            }
            else{
                ans+=current;
            }
        }
        return ans;
    }
};