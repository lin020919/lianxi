
//宏定义LED和按键引脚
 #define LED_PIN  2
 #define BUTTON_PIN  14
 

//定义LED逻辑值
int led_logic = 0;

//定义记录LED状态是否更改过的值
  bool status = false;
  
void setup() {
  // 配置引脚模式
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLDOWN);
}

void loop() {
  //按键消抖
  if(digitalRead(BUTTON_PIN)){
    delay(10);
 
    if(digitalRead(BUTTON_PIN) && !status){
      led_logic = !led_logic;
      digitalWrite(LED_PIN, led_logic);
      // 修改 status
      status = !status;
      }
      else if (!digitalRead(BUTTON_PIN)){
      status = false;
      }
    }
}
