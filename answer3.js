function createArrayOfFunctions(y) {
  var arr = [];
  for (var i = 0; i < y; i++) {
    arr[i] = function(x) {
      return x + i;
    }  
  }  
  return arr;
}

//when the fuction is executed, the var i will always equal to y 
//it is because they share the same lexical environment
//to solve the problem, use let instead of var in the fuction

function createArrayOfFunctions(y) {
    var arr = [];
    for (let i = 0; i < y; i++) {
      arr[i] = function(x) {
        return x + i;
      }  
    }  
    return arr;
  }