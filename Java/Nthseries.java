class Nthseries {
	public static String seriesSum(int n) {
    float Sum = 0;
		float prevn = 1;
    for(int i=0;i<n;i++)
    {
      Sum+=1/(prevn);
      prevn+=3;
    }
    String s = Float.toString(Sum);
    return s;
	}
    public static void main(String[] args)
    {
        System.out.println(seriesSum(2));
    }
}