/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    if (obj.length || Object.keys(obj).length ) return false
     return true
    
};