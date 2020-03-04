/* Address should have a type (home or work), street address1 , street address2,
area , city , state , pin */
class Address
{
    String Country;
    String City;
    String State;
    int Zip;
Address(String cou,String ci,String st,int zi)
{
    Country = cou;
    City = ci;
    State = st;
    Zip = zi;
}
}