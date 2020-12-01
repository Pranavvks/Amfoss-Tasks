int speedpin = 5 ;
int dir1 = 4 ;
int dir2 = 3 ;
int mSpeed = 220 ;
int distancesensor = 7 ;
float distance_cm ;
void setup()
{
    pinMode(speedpin,OUTPUT);
    pinMode(dir1,OUTPUT);
    pinMode(dir2,OUTPUT);
    Serial.begin(96000);
    pinMode(8, OUTPUT);
    pinMode(7 , OUTPUT);
}
void loop () {
  digitalWrite(dir1 , HIGH);
  digitalWrite(dir2, LOW);
  analogWrite(speedpin,mSpeed);
  tone(8 , 1000 , 200);
  delay(2000);
  distance_cm = analogRead(((distancesensor)/2.0)*2.54);
  Serial.println(distance_cm);
  if(distance_cm >= 0 &&  distance_cm<=100)
  {
    tone(8,1000 ,200);
    delay(1000);
    digitalWrite(dir1 , LOW);
    digitalWrite(dir2 , LOW);
    Serial.println("Warning ! : Motor will not work , distance limit out of bounds ");
   }
  
}
