/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init
    const func = {
        increment: function(){
            current++
            return current
        },
        decrement: function(){
            current--
            return current
        },
        reset: function(){
            current = init
            return current
        }
    }
    return func
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */