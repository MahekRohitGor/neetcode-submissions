class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars;
        for(int i=0; i<n; i++){
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.rbegin(), cars.rend());

        double lastTime = 0.0;
        int fleets = 0;

        for(auto [pos, spd] : cars){
            double time = (double)(target - pos)/spd;
            if(time > lastTime){
                fleets++;
                lastTime = time;
            }

        }

        return fleets;
    }
};
