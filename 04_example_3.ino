#define PIN_LED 13
unsigned int count, toggle;
void setup() {
  pinMode(PIN_LED, OUTPUT); //시리얼 포트 초기화
  Serial.begin(115200);
  Serial.println("hello world!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // LED 끄기
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(count); // toggle LED 값
  digitalWrite(PIN_LED, toggle); // LED 상태 업데이트
  delay(1000); //1초 대기
}

int toggle_state(int toggle){//ㅋ count 값에 따라 껐다 켰다 반복
  if (toggle % 2 == 0)
  {
      return 1;
  }
  else
  {
    return 0;
  }
}
