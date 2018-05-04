/**
 * @param n: an integer
 * @return: an ineger f(n)
 */
const fibonacci = function (n) {
    var i = 0;
    var num = [];
    num[0] = 0;
    num[1] = 1;
    if(n == 1){
        return 0
    }else if(n == 2){
        return 1;
    }else{
        for(i = 2;i < n;i++){
            num[i] = num[i-1] + num[i-2]
        }
        return num[i-1]
    }
}

console.log(fibonacci(10))
