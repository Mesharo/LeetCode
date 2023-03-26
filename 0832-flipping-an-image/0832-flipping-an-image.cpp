class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> result;
        
        for (auto v : image)  {
            reverse(v.begin(), v.end());
            for (auto current = 0; current < v.size(); current++)  {
                v[current] == 0 ? v[current] = 1 : v[current] = 0;
            }
            result.push_back(v);
        }
        
        return result;
    }
};