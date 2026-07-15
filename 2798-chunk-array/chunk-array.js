/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    const chunkedArr= []
    const len = arr.length;
    let idx =0;
    while(idx<len){
        if (idx+size<len){
            chunkedArr.push(arr.slice(idx, idx+size))
        }else{
            chunkedArr.push(arr.slice(idx, len))
        }
        idx+=size;
        
    }
    return chunkedArr;
};
