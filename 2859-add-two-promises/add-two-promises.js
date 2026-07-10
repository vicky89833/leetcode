/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {

    
        try{
            let res= 0;
           
              let  res1=  await promise1;
                
               let   res2= await promise2;

           
            
           
        return res1 + res2;
            
        }catch{
            err => reject("err")

        }

            

    
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */