class person
{
    String name;
    String dob;
    String gender;
    int age;
    long aadhar_no;
}
class patient extends person
{
    String marital_status;
    String race;
    
    patient(String pname,String pdob)
    {
        super.name=pname;
        super.dob=pdob;
    }
    patient(String pname,String pdob,String pgender,int page)
    {
        super.name=pname;
        super.dob=pdob;
        super.gender=pgender;
        super.age=page;
    }
    patient(String pname,String pdob,String pgender,int page,long paadhar_no,String pmarital_status,String prace)
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
class patientcreation
{
    public static void main(String[] args)
    {
        patient grant = new patient("Grant","14-01-1990");
        patient melissa = new patient("Melissa","04-10-1989","Female",30);
        patient stephen = new patient("Stephen","08-05-1981","Male",39,12345678,"Married","Caucasian");
        grant.print_details();
        melissa.print_details();
        stephen.print_details();
    }
}
