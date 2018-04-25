/**
 * @param numbers: An array of Integer
 * @param target: target = numbers[index1] + numbers[index2]
 * @return: [index1 + 1, index2 + 1] (index1 < index2)
 */
const twoSum = function (numbers, target) {
    var index = [];
    for(var i = 0;i < numbers.length;i ++){
        for(var j = i+1;j < numbers.length;j++){
            if(numbers[i]+numbers[j] == target){
                index[0]=i;
                index[1]=j;
                return index;
            }
        }
    }
}

