int showbits(int n)
{
	int i,k,andmask;
	
	for(i=15;i>=0;i--)
	{
		andmask=1<<i;
		k=n&andmask;
		
		k==0?printf("0"):printf("1");
	}
}
