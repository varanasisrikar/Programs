class Base
{
  static void m1()
  {
    System.out.println("m1 of static called");
  }
}
class Derived extends Base
{
  static void m1()
  {
    System.out.println("m1 of derived called");
  }
}
class test
{
  public static void main(String[] args)
  {
    Base obj=new Derived();
    obj.m1();
  }
}
