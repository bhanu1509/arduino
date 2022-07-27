#include<avr/io.h>
#include<util/delay.h>
#include<stdbool.h>

int main(void)
{
  bool a,b,c,x;
  bool A,B,C,y;

  DDRD = 0b00010000;
  while(1)
  {
     PORTD = (1<<7);
     _delay_ms(5000);
     x = PIND & (1<<PIND2) == (1<<PIND2);
     PORTD &= 0b01111100;
     _delay_ms(300);
     A = (b&&c&&x);
     B = ((c&&!x) || (b&&x!));
     C = ((!c&&!x) || (b&&!x));
     y = (b&&c&&x);
     PORTD = (y<<5);
     _delay_ms(500);
     a = A;
     b = B;
     c = C;
     }
return 0;
}
