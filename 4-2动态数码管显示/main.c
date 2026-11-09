#include <REGX52.H>

unsigned char NixieTable[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
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

void Nixie(unsigned char Location,Number)
		
{
	switch (Location)
	{
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0=NixieTable[Number];
	Delay(1);
	P0=0X00;
}
	void main()
	{
		
	
				while(1)
			{
				Nixie(1,8);
		
				Nixie(2,7);
		
				Nixie(3,6);
		
				Nixie(4,5);
		
				Nixie(5,4);
		
				Nixie(6,3);
		
				Nixie(7,2);
		
				Nixie(8,1);
		
			}
	
	}