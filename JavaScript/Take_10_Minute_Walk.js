function isValidWalk(walk) {
  var xlen = 0;
  var ylen = 0;
  for (var i = 0; i < walk.length; i++) {
    switch (walk[i]) {
      case "n":
        ylen++;
        break;
      case "s":
        ylen--;
        break;
      case "w":
        xlen++;
        break;
      case "e":
        xlen--;
        break;
    }
  }
  if (xlen == 0 && ylen == 0 && walk.length == 10) {
    return true;
  } else {
    return false;
  }
}

var y = isValidWalk([
  "n",
  "s",
  "n",
  "s",
  "n",
  "s",
  "n",
  "s",
  "n",
  "s"
]);
console.log(y);
