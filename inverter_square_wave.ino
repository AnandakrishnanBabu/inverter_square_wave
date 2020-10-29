int pin1=9,pin2=10;
//int fbpin=A1;
int freq=57; //change the frequecy as need

void setup()
{
pinMode(pin1,OUTPUT);  
pinMode(pin2,OUTPUT); 
//pinMode(fbpin,INPUT);  
}

void loop()
{
digitalWrite(pin2,0);
delay(1);
digitalWrite(pin1,1);

delay(500/freq);  
digitalWrite(pin1,0);
delay(1);
digitalWrite(pin2,1);

delay(500/freq);  

  
}
