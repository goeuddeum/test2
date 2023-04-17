const int bit_pin=2;
const int led=5;
const int button=7;
void setup() {
DDRB=B00100000;
DDRD=B10000000;

}
void loop() {
int bit=digitalRead(bit_pin);
if(bit == LOW){
PORTB=(1<<led)|PORTD;
delay(100);
}else{
PORTB=~(1<<led)&PORTD;
delay(100);
}
}
