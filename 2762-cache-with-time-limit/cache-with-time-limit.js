

var TimeLimitedCache = function() {
    this.cache = {};
    
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */


TimeLimitedCache.prototype.set = function(key, value, duration) {
    const entry =this.cache[key]
    
    this.cache[key] =
    {"val":value, "exp": Date.now() + duration}
    if (entry && entry.exp > Date.now() ){
        return true;
    }else{
        return false;
    }
   
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    const entry = this.cache[key]
    
    if(entry && entry.exp&& entry.exp< Date.now() ){
        delete this.cache[key]; 
        return -1
    }else if (entry && entry.exp&& entry.exp> Date.now() ){
       return entry.val;
    }else{
        return -1;
    }

    
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    const result = Object.keys(this.cache).filter((entry)=>{ 
        let newTime = this.cache[entry].exp
        console.log("newTime:",newTime)
        console.log("Date.now() :",Date.now() )
        if ( newTime < Date.now() ){
            delete this.cache[entry]
        }
        else{
            return entry
        }
        
        
        
    })
    console.log(result);

    return Object.keys(result ).length;

}    





