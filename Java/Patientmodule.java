import java.util.*;
import java.io.*;
class Patientmodule
{
    public static void main (String[] args) 
    {
        try{
                Scanner s = new Scanner(System.in);
                Patient patarr[] = new Patient[19];
                FileReader fr = new FileReader("Patient.csv");
                BufferedReader bread = new BufferedReader(fr);
                int number = 0;
                int count = 0;  
                String st = bread.readLine();
                st = bread.readLine();
                while(st!=null)
                {
                    String a[] = st.split(",");
                    Address ad = new Address(a[14],a[15],a[16],Integer.parseInt(a[17]));
                    patarr[number] = new Patient(Integer.parseInt(a[0]),a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],Integer.parseInt(a[12]),a[13],ad);
                    number++;
                    st = bread.readLine();
                }
                String name = s.nextLine();
                for(int i=0;i<patarr.length;i++)
                {
                    String str = patarr[i].getPatientByFirstName();
                    if(name.equals(str))
                    {
                        count++;
                    }
                }
                if(count==0)
                {
                    System.out.println("Name not found");
                }
                else if(count>1)
                {
                    System.out.println("Duplicates found");
                }
                else
                {
                    System.out.println("No Duplicates found");
                }
                bread.close();
                fr.close();
                s.close();
            }
            catch(IOException e)
            {
                System.out.println(e.getMessage());
            }

}
}