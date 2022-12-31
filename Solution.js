
/**
 * @param {number[]} capacity
 * @param {number[]} rocks
 * @param {number} additionalRocks
 * @return {number}
 */
var maximumBags = function (capacity, rocks, additionalRocks) {
    for (let i = 0; i < rocks.length; ++i) {
        capacity[i] -= rocks[i];
    }

    capacity.sort((x, y) => x - y);
    let numberOfBagsFilledToCapacity = 0;

    for (let i = 0; i < capacity.length && additionalRocks >= capacity[i]; ++i) {
        ++numberOfBagsFilledToCapacity;
        additionalRocks -= capacity[i];
    }

    return numberOfBagsFilledToCapacity;
};
