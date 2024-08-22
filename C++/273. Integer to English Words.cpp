class Solution {
public:
    string numberToWords(int n) {
        if (n == 0) {
            return "Zero";
        } else {
            string s = hi(n);
            if (!s.empty() && s[0] == ' ') {
                s.erase(s.begin());
            }
            if (!s.empty() && s.back() == ' ') {
                s.pop_back();
            }
            return s;
        }
    }

private:
    string hi(int n) {
        string s[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                      "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", 
                    "Seventeen", "Eighteen", "Nineteen"};
        string s1[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        string k;

        if (n < 20) {
            k = s[n];
        } else if (n < 100) {
            k = s1[n / 10];
            if (n % 10 != 0) {
                k += " " + s[n % 10];
            }
        } else if (n < 1000) {
            k = s[n / 100] + " Hundred";
            if (n % 100 != 0) {
                k += " " + hi(n % 100);
            }
        } else if (n < 1000000) {
            k = hi(n / 1000) + " Thousand";
            if (n % 1000 != 0) {
                k += " " + hi(n % 1000);
            }
        } else if (n < 1000000000) {
            k = hi(n / 1000000) + " Million";
            if (n % 1000000 != 0) {
                k += " " + hi(n % 1000000);
            }
        } else {
            k = hi(n / 1000000000) + " Billion";
            if (n % 1000000000 != 0) {
                k += " " + hi(n % 1000000000);
            }
        }
        return k;
    }
};