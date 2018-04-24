const kthLargestElement = function (n, nums) {
    var temp ;
    for(var j = 0;j < nums.length-1;j++){
        for(var i = 0;i < nums.length-j-1;i++){
            if(nums[i] > nums[i+1]){
                temp = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = temp;
            }              
        }        
    }    
    return nums[nums.length-n];
}
var arr = [9,8,7,4,3];
console.log(kthLargestElement(3,arr));