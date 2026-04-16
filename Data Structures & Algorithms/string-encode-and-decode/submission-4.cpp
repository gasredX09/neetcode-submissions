class Solution {
public:

    string encode(vector<string>& strs) {
        string enco = "";
        int n = strs.size();
        for(int i = 0; i < n; i++)
        {
            enco += to_string(strs[i].size()) + '#' + strs[i];
        }
        return enco;
    }

    vector<string> decode(string s) {
        vector<string> deco;
        int n = s.size();
        int i = 0;
        while(i < n)
        {
            string wordLength = "";
            int len = 0;
            while(s[i] != '#')
            {
                wordLength += s[i];
                i++;
            }
            len = stoi(wordLength);
            i++;
            deco.push_back(s.substr(i, len));
            i += len;
        }
        return deco;

    }
};
