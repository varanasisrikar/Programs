class Dubstep {
  public static String SongDecoder(String song) {
    String s = song.replace("WUB", " ").trim();
    String[] sarr = s.split(" ");
    StringBuilder sb = new StringBuilder("");
    for (int i = 0; i < sarr.length; i++) {
      if (i < sarr.length - 1) {
        sb.append(sarr[i] + " ");
      } else {
        sb.append(sarr[i]);
      }
    }
    return sb.toString();
  }
}
public class Songtests {
  static void assertEquals(final String S1,final String S2)
  {
    if(S1.equals(S2))
    {
      System.out.println("True");
    }
    else
    {
      System.out.println("False");
    }
  }
public static void main(final String[] args) {
    new Dubstep();
	assertEquals("ABC", Dubstep.SongDecoder("WUBWUBABCWUB"));
  assertEquals("R L", Dubstep.SongDecoder("RWUBWUBWUBLWUB"));
}
}