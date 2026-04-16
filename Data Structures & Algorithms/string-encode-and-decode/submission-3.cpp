class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string res = "";
        for(int i = 0; i < n; i++)
        {
            res += to_string(strs[i].length()) + "#" + strs[i];
        }
        return res;
    }

    vector<string> decode(string s) 
    {
        vector<string> dec;
        int i = 0;
        while(i < s.length())
        {
            int j = i;
            string len = "";
            while(s[j] != '#')
            {
                len += s[j];
                j += 1;
            }
            int lg = stoi(len);
            dec.push_back(s.substr(j + 1, lg));
            i = j + 1 + lg;
        }
        return dec;
    }
};
