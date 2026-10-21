class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        for (int i=0;i<26;i++)
        {
            if (word.find('a'+i)!=string::npos && word.find('A'+i)!=string::npos)
            {
                count++;
            }
        }
        return count;
    }
};