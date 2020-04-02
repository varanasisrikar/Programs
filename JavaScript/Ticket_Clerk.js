function tickets(peopleInLine) {
  var money = 0;
  var ticket_cost = 25;
  var sold = 0;
  for (var i = 0; i < peopleInLine.length; i++) {
    var change = peopleInLine[i] - ticket_cost;
    money += ticket_cost;
    if (peopleInLine.length == 1) {
      sold++;
    } else if (peopleInLine[i] > ticket_cost && money >= change) {
      sold++;
    } else if (peopleInLine[i] == ticket_cost) {
      sold++;
    }
  }
  if (sold == peopleInLine.length) {
    console.log(sold);
    console.log(peopleInLine.length);
    return "YES";
  } else {
    return "NO";
  }
}
var x = tickets([
  25,
  50,
  25,
  100,
  25,
  25,
  50,
  100,
  25,
  50,
  25,
  100,
  25,
  100,
  100
]);
console.log(x);
