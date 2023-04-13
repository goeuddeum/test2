int sensor = 8;
void setup() {
  Serial.begin(9600);
  pinMode(sensor,INPUT);
}

void loop() {
  // 버튼 1을 눌렀을 때 "테스트 시작" 이 출력
  if(digitalRead(sensor) ==HIGH){
  Serial.println("테스트 시작");
  delay(1000);
  }
  //버튼 2를 눌렀을 때  "테스트 종료"
  if(digitalRead(sensor) ==LOW){
  Serial.println("테스트 종료");
  delay(1000);
  
  }
}

