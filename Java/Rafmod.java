import java.io.RandomAccessFile;
class Rafmod
{
    public static void main(String[] args) throws Exception
    {
        RandomAccessFile r = new RandomAccessFile("abc.txt","rw");
        String st = "hi;hello;how;are;you";
        int n = st.length();
        for(int i=0;i<n;i++)
        {
            r.write((int)st.charAt(i));
        }
        r.seek(0);
        int currentchar = r.read();
        
        while(currentchar!=-1)
        {
            if((char)currentchar==';')
            {
                r.seek(r.getFilePointer()-1);
                r.write(" ".getBytes());
            }
                currentchar=r.read();
        }
        r.seek(0);
        System.out.println(r.readLine());
        r.close();
    }
}