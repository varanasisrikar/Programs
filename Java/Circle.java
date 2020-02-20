import static java.lang.Math.pow;
import java.util.Scanner;
class Point
{
double x;
double y;
double distance(final Point p1,final Point p2)
{
final double r1=(p1.x-p2.x);
final double r2=(p1.y-p2.y);
final double r=pow(r1,2)+pow(r2,2);  
final double result=Math.sqrt(r);
return result;
}
}
public class Circle extends Point
{
     public static void main(final String[] args) 
     {
     final Scanner sc = new Scanner(System.in);
	 final Point c=new Point(); //Create a point center
	 c.x=sc.nextDouble();
	 c.y=sc.nextDouble();
	 final Point p=new Point();  //Create a point on circumference
	 p.x=sc.nextDouble();
	 p.y=sc.nextDouble(); 
	 final Circle c1=new Circle(); //Create an object of class Circle
	 c1.distance(c,p);  //Calcualte radius of the circle	
  }
}
