
class Scope{
	public static void myFun()
	{
		int a = 10;
		System.out.println(a);
		{
			int b = 5;
			System.out.println(b);
		}
	}

	public static void main(String args[])
	{
		myFun();
	}
}

