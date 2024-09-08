class Solution {
    public String numberToWords(int n) {    
        if (n == 0) {
            return "Zero";
        }
        return hi(n);               
    }
    
    private String hi(int n) {
        String s[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen","Seventeen", "Eighteen", "Nineteen"};
        String s1[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        String k;
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