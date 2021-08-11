void setup() {
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
 if(Serial.available())
 {
 int z = Serial.read();

 if(z==1)
 {
 digitalWrite(3,HIGH);
 digitalWrite(4,HIGH);
 }

 if(z==2)
 {
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);

 }

 }

}
