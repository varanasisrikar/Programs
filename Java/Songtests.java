class Dubstep {
  public static String SongDecoder(String song) {
    song = song.replaceAll("(WUB)+", " ").trim();
    return song;
  }
}

public class Songtests {
  static void assertEquals(final String S1, final String S2) {
    if (S1.equals(S2)) {
      System.out.println("True");
    } else {
      System.out.println("False");
    }
  }

  public static void main(final String[] args) {
    new Dubstep();
    assertEquals("ABC", Dubstep.SongDecoder("WUBWUBABCWUB"));
    assertEquals("R L", Dubstep.SongDecoder("RWUBWUBWUBLWUB"));
  }
}