class Solution {
public:
    string addStrings(string n1, string n2) {
        int i = n1.size() - 1, j = n2.size() - 1, c = 0, a, b, s;
        string str = "";

        while (i >= 0 || j >= 0) {
            a = (i >= 0) ? n1[i] - '0' : 0;
            b = (j >= 0) ? n2[j] - '0' : 0;

            s = a + b + c;
            str = to_string(s % 10) + str;
            c = s / 10;

            if (i >= 0) i--;
            if (j >= 0) j--;
        }

        if (c != 0) {
            str = to_string(c) + str;
        }

        return str;
    }
};
