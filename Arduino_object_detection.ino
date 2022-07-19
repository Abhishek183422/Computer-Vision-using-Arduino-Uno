
int pin_red=2;
int pin_green=3;
String cmd;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin_red,OUTPUT);
pinMode(pin_green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available()==0){
}
cmd=Serial.readStringUntil('\r');
if (cmd=="go"){
digitalWrite(pin_green,HIGH);
digitalWrite(pin_red,LOW);
delay(20);
digitalWrite(pin_green,LOW);
}
if (cmd=="stop"){
digitalWrite(pin_red,HIGH);
digitalWrite(pin_green,LOW);
delay(20);
digitalWrite(pin_red,LOW);
}

}
