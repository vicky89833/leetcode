/**
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function(promise1, promise2) {

    
    let results = await Promise.all([promise1,promise2]);
  let res = 0;
//   const result = await Promise.all([promise1, promise2]);
  res = results.reduce((res,el)=>res=res+el);
  return res;
            

    
};

/**
 * addTwoPromises(Promise.resolve(2), Promise.resolve(2))
 *   .then(console.log); // 4
 */