public class Money {
  public static int calculateYears(double principal, double interest,  double tax, double desired) {
    int time = 0;
    while(principal<desired)
    {
      time++;
      double interestaccrued = principal*interest;
      double taxaccrued = interestaccrued*tax;
      principal+= interestaccrued-taxaccrued;
    }
    return time;
  }
    public static void main(String[] args)
    {
        System.out.println("Fixed Tests calculateYears");
        System.out.println(Money.calculateYears(1000,0.05,0.18,1100));
        System.out.println(Money.calculateYears(1000,0.01625,0.18,1200));
        System.out.println(Money.calculateYears(1000,0.05,0.18,1000));
    }
}