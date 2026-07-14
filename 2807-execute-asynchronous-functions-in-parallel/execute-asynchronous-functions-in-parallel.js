/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    
    return new Promise((resolve, reject)=>
    {
        const len = functions.length
        const result = Array(len).fill(0);
        let count = 0;
        functions.forEach((fn,idx)=>{
            fn().then((val)=>{ 
                    result[idx]= val;
                    count++;

                    if ( count === len ){
                        resolve(result);
                    }
                    
            }).catch( err=> { 
                // result[idx]= err;
                reject(err)
            })
        })
        
    }
    )

     


    
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */