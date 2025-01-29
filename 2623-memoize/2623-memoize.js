/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    
    let old = new Map()
    let callCount = 0;

    return function(...args) {
        const key = JSON.stringify(args)
        if(!old.has(key)){
            callCount++
            old.set(key, fn(...args))
        }
        return old.get(key)
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */