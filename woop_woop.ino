void setup() {
pinMode(13,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  for(int i = 80; i<255;i++)
  {
    tone(3,i*100);
    for(int k = 0; k<12;k++)
    {
      digitalWrite(13,HIGH); 
      delayMicroseconds(i);
      digitalWrite(13,LOW);  
      delayMicroseconds(255-i);
    }
  //  noTone(3);
  }

}
