


void setup() {
  //Defining the pins as OUTPUT
  pinMode(5,OUTPUT);              
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
}
void  loop() {
digitalWrite(5,HIGH);//turn on the red LED within the RGB
digitalWrite(6,LOW);//turn off the green LED within the RGB
digitalWrite(7,LOW);//turn off the blue LED within the RGB
delay(1000);// wait for a second
digitalWrite(5,LOW);//turn off the red LED within the RGB
digitalWrite(6,HIGH);//turn on the green LED within the RGB
digitalWrite(7,LOW);//turn off the blue LED within the RGB
delay(1000);// wait for a second
digitalWrite(5,LOW);//turn off the red LED within the RGB
digitalWrite(6,LOW);//turn off the green LED within the RGB
digitalWrite(7,HIGH);//turn on the blue LED within the RGB
delay(1000);// wait for a second 
}

