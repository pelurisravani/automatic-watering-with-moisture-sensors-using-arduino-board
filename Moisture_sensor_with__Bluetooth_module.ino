int sensor=A0;
int m1=2;
int v;
float p;
char data;
void setup() {
  Serial.begin(9600);
 pinMode(sensor,INPUT);
 pinMode(m1,INPUT);
}
void loop() {
  v=analogRead(sensor);
  p=(100-((v/1023.00)*100));
  Serial.println(p);
  delay(3000);
  if(Serial.available()){
    data=Serial.read();
    if(data=='1')
    {
      digitalWrite(m1,HIGH);
    }
    else if(data=='0')
    {
      digitalWrite(m1,LOW);
    }
    delay(2000);
  }
   if(p<40.00){
    digitalWrite(m1,HIGH);
    delay(1000);
  }
  else{
    digitalWrite(m1,LOW);
  
  }
} 
 
