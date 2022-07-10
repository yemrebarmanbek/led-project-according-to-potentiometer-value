int mavi_led=2;
int yesil_led=3;
int sari_led=4;
int kirmizi_led=5;
int A0_digital_deger=0; 

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop() {
  A0_digital_deger=analogRead(A0);
  Serial.println(A0_digital_deger); // println yazmamızın sebebi aynı satırda yazılması için
  if(A0_digital_deger<=200)
  {
    digitalWrite(kirmizi_led,HIGH);
    digitalWrite(sari_led,LOW);
    digitalWrite(yesil_led,LOW);
    digitalWrite(mavi_led,LOW);
    }

  else if(A0_digital_deger<=400)
   {
    digitalWrite(kirmizi_led,LOW);
    digitalWrite(sari_led,HIGH);
    digitalWrite(yesil_led,LOW);
    digitalWrite(mavi_led,LOW);
    }
  else if(A0_digital_deger<=600)
  {
    digitalWrite(kirmizi_led,LOW);
    digitalWrite(sari_led,LOW);
    digitalWrite(yesil_led,HIGH);
    digitalWrite(mavi_led,LOW);
    }
   else if(A0_digital_deger<=800)
  {
    digitalWrite(kirmizi_led,LOW);
    digitalWrite(sari_led,LOW);
    digitalWrite(yesil_led,LOW);
    digitalWrite(mavi_led,HIGH);
    }
    else
    {
    digitalWrite(kirmizi_led,HIGH);
    digitalWrite(sari_led,HIGH);
    digitalWrite(yesil_led,HIGH);
    digitalWrite(mavi_led,HIGH);
      }
    delay(100);
}
