class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a(26, 0);
        for(auto &x: s)
        {
            a[x - 'a']++;
        }
        for(auto &y: t)
        {
            a[y - 'a']--;
        }

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
