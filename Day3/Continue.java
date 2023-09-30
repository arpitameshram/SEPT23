class Continue{
	public static void main(String args[])
	{
              outer: for(int i=1;i<=5;i++)
              {
		      System.out.println();
                      inner:for(int j=1; j<=5; j++)
			    {
				    if(j==i)
				    {
					    continue outer;
				    }
				    System.out.print(j+"\t");
			    }
	      }
	}
}
