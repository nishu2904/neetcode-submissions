class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mape;
        for (const string& word : strs){
            string key = word;
            sort(key.begin(),key.end());
            mape[key].push_back(word);
        }
        vector<vector<string>> result;
        for(auto& pair : mape){
            result.push_back(pair.second);

        }
        return result;
        
    }
};
