class Solution {
public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& n) {
        vector<int> a(n.size());
        vector<vector<int>> h(n.size(), vector<int>(2));
        vector<int> q;
        
        for(int i = 0; i < n.size(); i++) {
            int x = n[i];
            int y = 0;
            int f= 1;
            if (x == 0) {
                y = m[0];
            } else {
                while (x != 0) {
                    y = y + (m[x % 10] * f);
                    x /= 10;
                    f *= 10;
                }
            }

            a[i] = y;
        }

        for(int i = 0; i < n.size(); i++) {
            h[i][0] = a[i];
            h[i][1] = n[i];
        }

        sort(h.begin(), h.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        for(int i = 0; i < n.size(); i++) {
            q.push_back(h[i][1]);
        }

        return q;
    }
};
