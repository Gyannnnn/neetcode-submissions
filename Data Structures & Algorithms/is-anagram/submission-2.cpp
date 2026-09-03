class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i = 0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++){
            mp2[t[i]]++;
        }

        for(int i = 0; i<s.size(); i++){
            auto m1 =  mp1.find(s[i]);
            auto m2 =  mp2.find(s[i]);

            if(m2 == mp2.end()) {
                return false;
            }
            if(m1->second != m2->second ) {
                return false;
                
            }
        }

        return true;
    }
};
