* @param target: Target to find.
 * @return: The first position of target. Position starts from 0.
 */
const binarySearch = function (nums, target) {
    var length = nums.length;
    var start = 0;
    var end = length -1;
    var mid;
    if(nums[start] > target || nums[end] < target){
        return -1;
    }
    while(start < end){
        mid = parseInt((start + end)/2);
        if(target == nums[mid]){
            while(nums[mid] == nums[mid-1]){
                if(nums)
                mid--;
            }
            return mid;
        }
            
        else if(target > nums[mid])
            start = mid + 1;
        else if(target<nums[mid])
            end = mid -1;
    }
    if(nums[mid-1] == target)
        return mid-1;
    else
        return -1;
}

// var num = [1,4,4,5,7,7,8,9,9,10];
// console.log(binarySearch(num,7))