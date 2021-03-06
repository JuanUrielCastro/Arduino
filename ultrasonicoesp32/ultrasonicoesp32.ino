 #define PIN_TRIG 17
#define PIN_ECHO 16

float tiempo;
float distancia;

void setup() {
   Serial.begin(115200);
   pinMode(PIN_TRIG, OUTPUT);
   pinMode(PIN_ECHO, INPUT);
}

void loop() {

   digitalWrite(PIN_TRIG, LOW);  //para generar un pulso limpio ponemos a LOW 4us
   delayMicroseconds(4);
   
   digitalWrite(PIN_TRIG, HIGH);  //generamos Trigger (disparo) de 10us
   delayMicroseconds(10);
   digitalWrite(PIN_TRIG, LOW);
   
   tiempo = pulseIn(PIN_ECHO, HIGH);
   distancia = tiempo/58.3;

   Serial.println(distancia);

   //delay(1000);
}
