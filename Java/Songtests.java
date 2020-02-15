class Dubstep {
public static String SongDecoder (final String song)
{
    final String array[]=song.split("WUB");
    final StringBuffer sb = new StringBuffer();
    for(int i=0;i<array.length;i++)
    {
        sb.append(array[i]);
    }
    final String s = sb.toString();
    System.out.println(s);
     return s;
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