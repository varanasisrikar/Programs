import java.util.Scanner;

class Circle
{
    float pi=3.14f;
    float calcarea(final float radius)
    {
        final float area=pi*radius*radius;
        return area;
    }
}
class areaofcircle
{
   public static void main(final String[] args)
   {
       final var s=new Scanner(System.in);
       final float radius=s.nextFloat();
       s.close();
       final Circle c1=new Circle();
       System.out.println(c1.calcarea(radius));
   }
   
}