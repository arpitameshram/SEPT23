 class DataConversion{
	 public static void main(String args[])
	 {
		 int a;
		 long b = 25;
		 a = (int)b;
		 System.out.println(a);

		 float c = (float)23.5;
		 double d = 25.4;
		 c = (float)d;
		 System.out.println(d);
		 
		 d = (double)c;
		 System.out.println(d);

		 a = (int)c;
		 System.out.println(a);
		 
		 a = 258;
		 byte p = (byte)a;
		 System.out.println(p);

		 a = 130;
		 p = (byte)c;
		 System.out.println(p);

		 char ch = 'x';
		 a = ch;
		 System.out.println(a);
	 }
 }
