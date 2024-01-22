#include "stm32f4xx.h"
#include "delay.h"
#include "timer.h"
#include "OLED.h"

extern int s;
int m;
int h;


int main(void)
{
	u32 t=0;
	TIM3_Init(8400,10000);
	OLED_Init();
	
	
  while(1){
	  void number_count (void);
	  number_count();
	  
	}
}
 void number_count (void)
{
	 if(s>=60)
	  {
		  m++;
		  s=0;
	  }
	  if(m>=60)
	  {
		  h++;
		  m=0;
	  }
	  if(h>=24)
	  {
		  h=0;
	  }
	  OLED_ShowChar(1,1, 'h');
	  OLED_ShowChar(1,5, 'm');
	  OLED_ShowChar(1,9, 's');
	  OLED_ShowNum(2, 1, h, 2);
	  OLED_ShowNum(2, 5, m, 2);
	  OLED_ShowNum(2, 9, s, 2);
}
