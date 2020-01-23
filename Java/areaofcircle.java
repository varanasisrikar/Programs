import java.util.Scanner;
class Circle
{
    float pi=3.14f;
    float calcarea(float radius)
    {
        float area=pi*radius*radius;
        return area;
    }
}
class areaofcircle
{
   public static void main(String[] args)
   {
       Scanner s=new Scanner(System.in);
       float radius=s.nextFloat();
       Circle c1=new Circle();
       System.out.println(c1.calcarea(radius));
   }
   
}