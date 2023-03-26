class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for (auto i = 0; i < image.size(); i++)  {
            reverse(image[i].begin(), image[i].end());
            for (auto current = 0; current < image[i].size(); current++)  {
                image[i][current] = 1 - image[i][current];
            }
        }

        return image;
    }
};