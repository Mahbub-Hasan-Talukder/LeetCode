class Solution {
public:
    vector<int> constructTempArray(string pattern) {
        vector<int> lps(pattern.length());
        int index = 0;
        for (int i = 1; i < (int) pattern.length(); ) {
            if (pattern[i] == pattern[index]) lps[i] = index + 1, ++index, ++i;
            else {
                if (index != 0) index = lps[index - 1];
                else lps[i] = index, ++i;
            }
        }
        return lps;
    }

    int kmp (string text, string pattern) {
        bool found = false;
        vector<int> lps = constructTempArray(pattern);
        int j = 0, i = 0;

        // i --> text, j --> pattern
        while (i < (int) text.length()) {
            if (text[i] == pattern[j]) ++i, ++j;
            else {
                if (j != 0) j = lps[j - 1];
                else ++i;
            }

            if (j == (int) pattern.length()) {
                return (i - pattern.length());
                j = lps[j-1];
                found = true;
            }
        }

        return -1;
    }
    int strStr(string haystack, string needle) {
        return kmp(haystack,needle);
    }
};

