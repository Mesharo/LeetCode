class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = duration;
        int latest = timeSeries[0];
        
        for (int current = 1; current < timeSeries.size(); current++)  {
            if (timeSeries[current] >= (duration + latest))  {
                sum += duration;
                latest = timeSeries[current];
                continue;
            }
            sum += timeSeries[current] - latest;
            latest = timeSeries[current];
        }
        
        return sum;   
    }
};