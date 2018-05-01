/**
 * @param A: A string
 * @param B: A string
 * @return: if string A contains all of the characters in B return true else return false
 */
const compareStrings = function (A, B) {
    var index = [];
      for(var i = 0;i < A.length;i ++){
        if(!index[A.charAt(i)]){
            index[A.charAt(i)] = 1;             
        }else{
            index[A.charAt(i)] ++;
        }       
    }
    for(var j = 0;j < B.length;j ++){
        if(!index[B.charAt(j)]){
            return false;
        }else{
            index[B.charAt(j)] --;
            if(index[B.charAt(j)] < 0){
                return false;
            }
        }
        
    }
    return true;
}
console.log(compareStrings('ABC','AB'))
