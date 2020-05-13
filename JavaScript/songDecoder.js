function songDecoder(song) {
  return song.replace(/WUB/g, " ").trim();
}

var x = songDecoder("AWUBBWUBC");
console.log(x);
