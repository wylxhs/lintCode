/**
 * @param n: An integer
 * @return: A list of strings.
 */
const fizzBuzz = function (n) {
    var arr = [];
    for(var i = 0;i < n;i ++){
        arr[i] = (i+1).toString();
        if(arr[i] % 3 === 0){
            var temp = arr[i];
            arr[i] = 'fizz';
            if(temp % 5 ===0){
            arr[i] += ' buzz';
            }
        }
        if(arr[i] % 5 ===0){
            arr[i] = 'buzz';
        }
    }
    return arr;
}
//console.log(fizzBuzz(15));