class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxlength = 0;
        for (int end=0;end<s.length();end++)
        {
            bool duplicate = false;
            for (int i=start;i<end;i++)
            {
                if (s[i]==s[end])
                {
                    duplicate = true;
                    break;
                }
            }
            while(duplicate)
            {
                start++;
                duplicate = false;
                for (int i=start;i<end;i++)
                {
                    if (s[i]==s[end])
                    {
                        duplicate = true;
                        break;
                    }
                }
            }
            maxlength = max(maxlength,end-start+1);
        }
        return maxlength;
    }
};