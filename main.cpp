int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup()
{

pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
}
void loop()
{
  int a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0;

  for(int i=0; i<10; i++){
    
    
    switch(i){
     case 0:
      a1=1; a2=1; a3=1; a4=1; a5=1; a6=1; a7=0;
      break;
     case 1:
      a1=0; a2=1; a3=1; a4=0; a5=0; a6=0; a7=0;
      break;
     case 2:
      a1=1; a2=1; a3=0; a4=1; a5=1; a6=0; a7=1;
      break;
     case 3:
      a1=1; a2=1; a3=1; a4=1; a5=0; a6=0; a7=1;
      break;
     case 4:
      a1=0; a2=1; a3=1; a4=0; a5=0; a6=1; a7=1;
      break;
     case 5:
      a1=1; a2=0; a3=1; a4=1; a5=0; a6=1; a7=1;
      break;
     case 6:
      a1=1; a2=0; a3=1; a4=1; a5=1; a6=1; a7=1;
      break;
     case 7:
      a1=1; a2=1; a3=1; a4=0; a5=0; a6=0; a7=0;
      break;
     case 8:
      a1=1; a2=1; a3=1; a4=1; a5=1; a6=1; a7=1;
      break;
     case 9:
      a1=1; a2=1; a3=1; a4=1; a5=0; a6=1; a7=1;
      break;
    }
    
    digitalWrite(a,a1);
	digitalWrite(b,a2);
	digitalWrite(c,a3);
	digitalWrite(d,a4);
	digitalWrite(e,a5);
	digitalWrite(f,a6);
	digitalWrite(g,a7);
	delay(1000);
    
  }
  
}

