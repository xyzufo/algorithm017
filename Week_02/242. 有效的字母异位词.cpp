class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26] = { 0 };

        for (auto c : s) {
            hash[c - 'a']++;
        }
        for (auto c : t) {
            hash[c - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (hash[i] != 0) return false;
        }
        return true;
    }
};