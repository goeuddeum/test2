int button1 = 3;
int button2 = 4;
void setup() {
  Serial.begin(9600);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
}

void loop() {
  // 버튼 1을 눌렀을 때 "테스트 시작" 이 출력
  if(digitalRead(button1) ==HIGH){
  Serial.println("테스트 시작");
  delay(1000);
  }
  //버튼 2를 눌렀을 때  "테스트 종료"
  if(digitalRead(button2) ==HIGH){
  Serial.println("테스트 종료");
  delay(1000);
  
  }
}
