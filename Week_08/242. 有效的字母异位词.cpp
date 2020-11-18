class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> map;
        for (auto i : s) {
            map[i]++;
        }
        for (auto i : t) {
            map[i]--;
        }
        for (auto m : map) {
            if (m.second != 0) return false;
        }
        return true;
    }
};