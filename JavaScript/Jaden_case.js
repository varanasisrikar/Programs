function toJadenCase(str) {
  var sar = str.split(" ");
  var srar = [];
  var res = "";
  var i = 0;
  while (i < sar.length) {
    srar[i] = sar[i].replace(sar[i].charAt(0), sar[i].charAt(0).toUpperCase(), 1);
  }
  i++;

  for (i = 0; i < sar.length; i++) {
    if (i == 0) {
      res += srar[i];
    } else {
      res += " " + srar[i];
    }
  }

  return res;
}
var str = "most trees are blue";
var y = toJadenCase(str);
console.log(y);