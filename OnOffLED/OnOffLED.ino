// @author Louis Hauchecorne

int switchState=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 switchState=digitalRead(2);
 if(switchState == HIGH)
 {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);

    delay(500);
    
//    digitalWrite(3,LOW);
//    digitalWrite(4,HIGH);
//    digitalWrite(6,LOW);
//    delay(500);
//    
//    digitalWrite(3,HIGH);
//    digitalWrite(4,LOW);
//    digitalWrite(6,LOW);
//    delay(500);
 }
 else{
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(6,HIGH);

    delay(200);
    
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(6,LOW);
    delay(100);
 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
    delay(100);
 }

 
}
