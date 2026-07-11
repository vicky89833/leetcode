/**
 * @param {number} millis
 * @return {Promise}
 */
async function sleep(millis) {
   const wait1 = new Promise(resolve => setTimeout(resolve, millis));
   return wait1;
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */