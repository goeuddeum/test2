const int bit_pin=2;
const int led=5;
void setup() {
DDRB=B00100000;

}
void loop() {
// int bit = digitalRead(bit_pin);
// if(bit ==LOW){
//  PORTD=B00100000;
// }else{
//   digitalWrite(led,LOW);
// }

PORTB=B00100000;
delay(100);
PORTB=B00000000;
delay(100);
}
