class Patient
{
    String Prefix;
    String FirstName;
    String MiddleName;
    String LastName;
    String Gender;
    String email;
    String FatherName;
    String MotherName;
    String MotherMaidenName;
    String DOB;
    String empty;
    int Patid;
    int Weight;
    String Phno;
    Address address;
Patient(int pid,String pf,String fn,String mn,String ln,String g,String em,String fan,String mon,String mmn,String dob,String emp,int wt,String pno,Address addr)
{
    Patid = pid;
    Prefix = pf;
    FirstName = fn;
    MiddleName = mn;
    LastName = ln;
    Gender = g;
    email = em;
    FatherName = fan;
    MotherName = mon;
    MotherMaidenName = mmn;
    DOB = dob;
    Weight = (int)wt;
    Phno = pno;
    address = addr;
}
public String toString()
{
    return Patid+" "+Prefix+" "+FirstName+" "+MiddleName+" "+LastName+" "+Gender;
}
String getPatientByFirstName()
{
    return FirstName;
}
}