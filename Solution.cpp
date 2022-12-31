
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    //C++20: ... (span<int> capacity, span<int> rocks, int additionalRocks) ...
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) const {
        for (int i = 0; i < rocks.size(); ++i) {
            capacity[i] -= rocks[i];
        }

        //C++20: std::ranges::sort(capacity);
        sort(capacity.begin(), capacity.end());
        int numberOfBagsFilledToCapacity = 0;

        for (int i = 0; i < capacity.size() && additionalRocks >= capacity[i]; ++i) {
            ++numberOfBagsFilledToCapacity;
            additionalRocks -= capacity[i];
        }

        return numberOfBagsFilledToCapacity;
    }
};
