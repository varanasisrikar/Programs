function tickets(peopleInLine) {
  var money = 0;
  var ticket_cost = 25;
  for (var i = 0; i < peopleInLine.length; i++) {
    if (peopleInLine.length == 0) {
      money += ticket_cost;
    } else if (i == 0) {
      money += ticket_cost;
    } else if (peopleInLine[i] > ticket_cost && money + ticket_cost - peopleInLine[i] >= peopleInLine[i] - ticket_cost) {
      money += ticket_cost;
      money -= peopleInLine[i] - ticket_cost;
      return "YES";
    } else{
      return "NO";
    }
  }
}
var x = tickets([25, 25, 50, 50]);
console.log(x);