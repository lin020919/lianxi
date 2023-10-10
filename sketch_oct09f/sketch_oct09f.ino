
//定义LED和按键引脚
  int led_pin = 2;
  int button_pin = 14;

//定义LED逻辑值
int led_logic = 0;

//定义记录LED状态是否更改过的值
  bool status = false;
  
void setup() {
  // 配置引脚模式
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin, INPUT_PULLDOWN);
}

void loop() {
  //按键消抖
  if(digitalRead(button_pin)){
    delay(10);
  }
    if(digitalRead(button_pin) && ！status){
      led_logic = !led_logic;
      digitalWrite(led_pin, led_logic）;
      // 修改 status
      status =!status;
      }
    else if (!digitalWrite(button_pin)){
      status - false;
      }
    }
}
