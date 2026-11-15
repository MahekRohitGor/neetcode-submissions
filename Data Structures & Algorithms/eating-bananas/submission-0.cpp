class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxVal = 0;

        //find max num
        for(int i=0; i<n; i++){
            maxVal = max(piles[i], maxVal);
        }

        int left = 1;
        int right = maxVal;

        if(h == n){
            return maxVal;
        }

        int ans = right;

        while(left <= right){
            int mid = (left+right)/2;

            long long totalTime = 0;
            for(int p : piles){
                totalTime += ceil(static_cast<double>(p)/mid);
            }
            if(totalTime <= h){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;

    }
};
