#include <REGX52.H>

	void Delay(unsigned int xms);
		
	unsigned char LEDNUM;
	void main()
{
	P2=~0X01;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			if(LEDNUM>=7)
			{
				LEDNUM=0;
			}
			else
			{
				LEDNUM++;
			}
			P2=~(0X01<<LEDNUM);
		}
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
			if(LEDNUM==0)
				LEDNUM=7;
		  else 
				LEDNUM--;
			P2=~(0X01<<LEDNUM);
			}
		}
	}
			void Delay(unsigned int xms)
	{
	unsigned char data i, j;
while(xms--)
	{
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	}
 }
		
			
	
