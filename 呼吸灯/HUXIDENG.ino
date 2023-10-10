
#define LED_PIN  12


void setup() {
  //配置GPIO输出
  pinMode(LED_PIN,  OUTPUT);
}

void loop() {
  //实现渐亮效果
  for(int i=0;i<256;i++){
    analogWrite(LED_PIN, i);
    delay(10);
    }

  //实现渐灭效果
   for(int i=255;i>=0;i--){
    analogWri te(LED_PIN, i);
    delay(10);
    }
}
