int main(void){
  DDRD = 0b10000000;
  PORTD = 0b00010000;
  while(1){
    if(PIND & 0b00010000){
      PORTD &= 0b01111111;
    }
    else{
      PORTD |= 0b10000000;
    }
  }
}
