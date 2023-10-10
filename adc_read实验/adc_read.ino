
#define     POT        26
#define     LED        13
#define     CHANNEL    0
#define     RES        12
#define     FREQ       1000


//初始化模拟输入值
int pot_value;


void setup() {
   Serial.begin(9600);
  // 设置ADC分辨率
  analogReadResolution(RES);

  //配置输入衰减
  analogSetAttenuation(ADC_11db);
  
  //建立LEDC通道，配置LEDC分辨率
  ledcSetup(CHANNEL, FREQ, RES);
  
  //关联GPIO与LEDC通道
  ledcAttachPin(LED, CHANNEL);
}

void loop() {
  //获取模拟信号输入值
  pot_value = analogRead(POT);
  //输出PWM
  ledcWrite(CHANNEL, pot_value);
  delay(50);
}
