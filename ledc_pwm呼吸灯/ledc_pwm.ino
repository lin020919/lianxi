
#define FREQ        2000    //频率
#define CHANNEL     0       //通道
#define RESOLUTION  8       //分辨率
#define LED         12      //LED引脚

void setup() {
  // 设置通道
  ledcSetup(CHANNEL,FREQ,RESOLUTION);
  // 绑定通道号与引脚
  ledcAttachPin(LED,CHANNEL);
}

void loop() {
  //实现渐亮效果
  for(int i=0;i<pow(2, RESOLUTION);i++){
    //输出PWM
    ledcWrite(CHANNEL,i);
    delay(10);
    }
    
  //实现渐灭效果
  for(int i=pow(2, RESOLUTION)-1;i>=0;i--){
    //输出PWM
    ledcWrite(CHANNEL,i);
    delay(10);
}
}
