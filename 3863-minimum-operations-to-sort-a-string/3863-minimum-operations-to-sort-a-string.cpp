
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();

        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            return 0;
        }

        if (n == 2) {
            return -1;
        }

        char mn = s[0];
        char mx = s[0];

        for (int i = 1; i < n; i++) {
            if (s[i] < mn) {
                mn = s[i];
            }

            if (s[i] > mx) {
                mx = s[i];
            }
        }

        if (s[0] == mx && s[n - 1] == mn &&
    count(s.begin(), s.end(), mn) == 1 &&
    count(s.begin(), s.end(), mx) == 1) {
    return 3;
}
        if (s[0] == mn || s[n - 1] == mx) {
            return 1;
        }

        return 2;
    }
};
