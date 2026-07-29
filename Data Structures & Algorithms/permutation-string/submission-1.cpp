class Solution {
public:

    vector<int> countFreq(string s) {
        vector<int> freq(26, 0);

        for(size_t i = 0; i < s.size(); i++) {
            freq[s[i] - 97]++;
        }
        return freq;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;

        vector<int> freq = countFreq(s1);

        int l = 0, r = s1.size()-1;

        while(r < s2.size()) {
            if(freq == countFreq(s2.substr(l, r-l+1))) return true;

            l++;
            r++;
        }

        return false;
    }
};
