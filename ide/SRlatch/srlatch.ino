//sr latch

int Q=0,S=1,R=0;
int Q1;
void sevenseg(int a,int b,int c,int d,int e,int f,int g  
)
{
  digitalWrite(2, a); 
  digitalWrite(3, b); 
  digitalWrite(4, c); 
  digitalWrite(5, d); 
  digitalWrite(6, e); 
  digitalWrite(7, f);     
  digitalWrite(8, g); 
}
void setup() 
{
    pinMode(13,OUTPUT);
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);            
}
void loop() 
{
   digitalWrite(13,HIGH);
   Q1=(S&&!R) || (Q&&!R);
   if(Q1==0){
       sevenseg(0,0,0,0,0,0,1);
   }
   else{
       sevenseg(1,0,0,1,1,1,1);  
   }
   delay(2000);

   digitalWrite(13,LOW);
   //sevenseg(1,1,1,1,1,1,1);
   delay(2000);
}
