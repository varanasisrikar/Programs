function narcissistic(value) {
  var sum = 0;
  var temp = value;
  var tempe = value;
  var i = 0;
  while (tempe > 0) {
    tempe = parseInt(tempe / 10);
    i++;
  }
  while (value > 0) {
    x = parseInt(value % 10);
    value = parseInt(value / 10);
    sum += Math.pow(x, i);
  }
  if (temp == sum) {
    return true;
  } else {
    return false;
  }
}

var y = narcissistic(7);
console.log(y);