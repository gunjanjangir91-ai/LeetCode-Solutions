
class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int sign = 1;
        int i = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        if (i < s.length() && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < s.length() && s[i] == '+') {
            sign = 1;
            i++;
        }

        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            if (sign * num > INT_MAX) {
                return INT_MAX;
            }
            if (sign * num < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * num;
    }
};
