const mergeSortedArray = function (A, B) {
    var newArr = [];
    var i=0,j=0;
    var newLength = A.length + B.length;
    for(var k = 0;k < newLength ;k++){
        if(j >= B.length){
            newArr[k] = A[i];
            i++;
            continue;
        }
        if(i >= A.length){
            newArr[k] = B[j];
            j++;
            continue;
        }
        if(A[i] < B[j]){
            newArr[k] = A[i];
            i++;
        }else{
            newArr[k] = B[j];
            j++;
        }
    }
    return newArr;
}
var arr1=[1,2,3,4];
var arr2=[2,4,5,6];
console.log(mergeSortedArray(arr1,arr2));