class Solution {
public:
    int numSteps(string s) {
        // support variables
        bool seenOne = false;
        int len = s.size(), res = 1, c;
        while (len) {
            // reading the current char
            c = s[--len];
            // increasing the counter one extra time for each 0 seen after at least a 1
            if (seenOne && c == '0') res++;
            // updating seenOne as soon as we find a '1', provided is not the first char
            if (!seenOne && c == '1' && len) seenOne = true;
            res++;
        }
        return seenOne ? res : s.size() - 1;
    }
};
