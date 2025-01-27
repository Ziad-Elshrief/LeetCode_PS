/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
   let numsUnique = new Set(nums);
   return !(numsUnique.size === nums.length);
};
