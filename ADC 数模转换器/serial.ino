
//定义GPIO引脚
#define POT 26

//初始化电位计输入信号
int pot_value;


void setup() {
  //设置串口通信波特率 9600；
  Serial.begin(9600);
  pinMode(POT,INPUT);
}

void loop() {
  // 读取电位计模拟输入值
   pot_value = analogRead(POT);

   //打印模拟输入信号在串口监视器中
   Serial.println(pot_value);
   delay(50);
}
