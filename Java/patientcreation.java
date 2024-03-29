class Person
{
    String name;
    String dob;
    String gender;
    int age;
    long aadhar_no;
}
class Patientclass extends Person
{
    String marital_status;
    String race;
    
    Patientclass(final String pname,final String pdob)
    {
        super.name=pname;
        super.dob=pdob;
    }
    Patientclass(final String pname,final String pdob,final String pgender,final int page)
    {
        super.name=pname;
        super.dob=pdob;
        super.gender=pgender;
        super.age=page;
    }
    Patientclass(final String pname,final String pdob,final String pgender,final int page,final long paadhar_no,final String pmarital_status,final String prace)
    {
        super.name=pname;
        super.dob=pdob;
        super.gender=pgender;
        super.age=page;
        super.aadhar_no=paadhar_no;
        marital_status=pmarital_status;
        race=prace;
    }
    void print_details()
    {
        System.out.println("Name : "+super.name+",Date of Birth : "+super.dob+",Age : "+super.age);
    }
}
class Patientcreation
{
    public static void main(final String[] args)
    {
        final Patientclass grant = new Patientclass("Grant","14-01-1990");
        final Patientclass melissa = new Patientclass("Melissa","04-10-1989","Female",30);
        final Patientclass stephen = new Patientclass("Stephen","08-05-1981","Male",39,12345678,"Married","Caucasian");
        grant.print_details();
        melissa.print_details();
        stephen.print_details();
    }
}
