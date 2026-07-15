/**
 * @return {null|boolean|number|string|Array|Object}
 */
Array.prototype.last = function() {
    const len= this.length;
    if (len>0){
        return this[len-1]
    }
    return -1

};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */