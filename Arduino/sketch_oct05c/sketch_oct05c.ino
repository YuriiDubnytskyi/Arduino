// подключите пины контроллера к цифровым пинам Arduino

// первый двигатель

int enA = 11;

int in1 = 10;

int in2 = 9;

// второй двигатель

int enB = 12;

int in3 = 6;

int in4 = 5;

void setup()

{

// инициализируем все пины для управления двигателями как outputs

pinMode(enA, OUTPUT);

pinMode(enB, OUTPUT);

pinMode(in1, OUTPUT);

pinMode(in2, OUTPUT);

pinMode(in3, OUTPUT);

pinMode(in4, OUTPUT);

}

void demoOne()

{

// эта функция обеспечит вращение двигателей в двух направлениях на установленной скорости

// запуск двигателя A

digitalWrite(in1, HIGH);

digitalWrite(in2, LOW);

// устанавливаем скорость 200 из доступного диапазона 0~255

analogWrite(enA, 200);

// запуск двигателя B

digitalWrite(in3, HIGH);

digitalWrite(in4, LOW);

// устанавливаем скорость 200 из доступного диапазона 0~255

analogWrite(enB, 200);

delay(2000);

// меняем направление вращения двигателей

digitalWrite(in1, LOW);

digitalWrite(in2, HIGH);

digitalWrite(in3, LOW);

digitalWrite(in4, HIGH);

delay(2000);

// выключаем двигатели

digitalWrite(in1, LOW);

digitalWrite(in2, LOW);

digitalWrite(in3, LOW);

digitalWrite(in4, LOW);

}

void demoTwo()

{

// эта функция обеспечивает работу двигателей во всем диапазоне возможных скоростей

// обратите внимание, что максимальная скорость определяется самим двигателем и напряжением питания

// ШИМ-значения генерируются функцией analogWrite()

// и зависят от вашей платы управления

// запускают двигатели

digitalWrite(in1, LOW);

digitalWrite(in2, HIGH);

digitalWrite(in3, LOW);

digitalWrite(in4, HIGH);

// ускорение от нуля до максимального значения

for (int i = 0; i < 256; i++)

{

analogWrite(enA, i);

analogWrite(enB, i);

delay(20);

}

// торможение от максимального значения к минимальному

for (int i = 255; i >= 0; --i)

{

analogWrite(enA, i);

analogWrite(enB, i);

delay(20);

}

// теперь отключаем моторы

digitalWrite(in1, LOW);

digitalWrite(in2, LOW);

digitalWrite(in3, LOW);

digitalWrite(in4, LOW);

}

void loop()

{

demoOne();

delay(1000);

demoTwo();

delay(1000);

}
