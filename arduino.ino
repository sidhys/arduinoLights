
#define led1 9
#define led2 8
#define led3 7 
#define led4 6


void setup() {

 pinMode(led1, OUTPUT); 
 pinMode(led2, OUTPUT); 
 pinMode(led3, OUTPUT); 
 pinMode(led4, OUTPUT); 
 
}

void loop() {
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(500); 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(500); 
  digitalWrite(led1, HIGH); 
  delay(100);
  digitalWrite(led2, HIGH); 
  delay(100);
  digitalWrite(led3, HIGH); 
  delay(100);
  digitalWrite(led4, HIGH); 
  delay(1000);
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(500);
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(500); 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(500);
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(500); 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW); 
  digitalWrite(led3, LOW); 
  digitalWrite(led4, LOW); 
  delay(500);
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  delay(1000); 
  digitalWrite(led1, LOW); 
  delay(100);
  digitalWrite(led2, LOW); 
  delay(100); 
  digitalWrite(led3, LOW); 
  delay(100); 
  digitalWrite(led4, LOW);  
  delay(1000);
}
