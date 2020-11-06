function addition() {
  var r;
  r = parseInt(p) + parseInt(q);
  console.log(p + "+" + q + "=" + r);
}

function subtraction() {
  var r;
  r = parseInt(p) - parseInt(q);
  console.log(p + "-" + q + "=" + r);
}

function multiplication() {
  var r;
  r = parseInt(p) * parseInt(q);
  console.log(p + "*" + q + "=" + r);
}

function division() {
  var r;
  r = parseInt(p) / parseInt(q);
  console.log(p + "/" + q + "=" + r);
}
var p = 4;
var q = 2;
var operator = "-";
switch (operator) {
  case "+":
    addition(p, q);
    break;
  case "-":
    subtraction(p, q);
    break;
  case "*":
    multiplication(p, q);
    break;
  case "/":
    division(p, q);
    break;
}