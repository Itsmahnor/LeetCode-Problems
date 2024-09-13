/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function(nums) {
    let reach = 0;
    for (let i = 0; i < nums.length; i++) {
        // If the current index is beyond the reach, return false
        if (i > reach) {
            return false;
        }
        // Update the maximum reachable index
        reach = Math.max(reach, i + nums[i]);
        console.log(reach);
    }
    // After the loop, check if we can reach the last index
    return reach >= nums.length - 1;
};
