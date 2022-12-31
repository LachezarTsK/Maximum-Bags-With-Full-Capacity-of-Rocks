
import java.util.Arrays;

public class Solution {

    public int maximumBags(int[] capacity, int[] rocks, int additionalRocks) {
        for (int i = 0; i < rocks.length; ++i) {
            capacity[i] -= rocks[i];
        }

        Arrays.sort(capacity);
        int numberOfBagsFilledToCapacity = 0;

        for (int i = 0; i < capacity.length && additionalRocks >= capacity[i]; ++i) {
            ++numberOfBagsFilledToCapacity;
            additionalRocks -= capacity[i];
        }

        return numberOfBagsFilledToCapacity;
    }
}
