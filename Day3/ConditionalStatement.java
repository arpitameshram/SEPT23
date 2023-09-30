class ConditionalStatement{
	public static void main(String args[])
	{
		int a = 5, b= 3, c= 8;
		if(a > b && a > c)
		{
			System.out.println("a is largest");
		}
		else if(b > c)
		{
			System.out.println("b is largest");
		}
		else
		{
			System.out.println("c is greatest");
		}
	}
}
