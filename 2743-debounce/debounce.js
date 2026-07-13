/**
 * @param {Function} fn
 * @param {number} t milliseconds
 * @return {Function}
 */
var debounce = function(fn, t) {
    
    // let debounce = setTimeout( ()=>fn(), t);
    let timer = null;
    return function(...args) {
        if (timer !==null){
            clearTimeout(timer);
        }
        return timer= setTimeout(()=>fn(...args),t);
     }
};

/**
 * const log = debounce(console.log, 100);
 * log('Hello'); // cancelled
 * log('Hello'); // cancelled
 * log('Hello'); // Logged at t=100ms
 */