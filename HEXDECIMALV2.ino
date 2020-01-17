int array[16][7] = {  { 1, 1, 1, 1, 1, 1, 0 }, // 0
  { 0, 1, 1, 0, 0, 0, 0 }, // 1
  { 1, 1, 0, 1, 1, 0, 1 }, // 2
  { 1, 1, 1, 1, 0, 0, 1 }, // 3
  { 0, 1, 1, 0, 0, 1, 1 }, // 4
  { 1, 0, 1, 1, 0, 1, 1 }, // 5
  { 1, 0, 1, 1, 1, 1, 1 }, // 6
  { 1, 1, 1, 0, 0, 0, 0 }, // 7
  { 1, 1, 1, 1, 1, 1, 1 }, // 8
  { 1, 1, 1, 0, 0, 1, 1 }, // 9
  { 1, 1, 1, 0, 1, 1, 1 }, //a
  { 0, 0, 1, 1, 1, 1, 1 }, //b
  { 1, 0, 0, 1, 1, 1, 0 }, //c
  { 0, 1, 1, 1, 1, 0, 1 }, //d
  { 1, 0, 0, 1, 1, 1, 1 }, //e
  { 1, 0, 0, 0, 1, 1, 1}}; //f

void setup()
{
  // set pin modes
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  for (int i = 0; i < 16; i++) {
    int pin = 2;
    for (int j = 0; j < 7; j++) {
      digitalWrite(pin, array[i][j]);
      pin++;
    }
    delay(1000);
  }

  for (int i = 15; i >=0 ; i--) {
    int pin = 2;
    for (int j = 0; j < 7; j++) {
      digitalWrite(pin, array[i][j]);
      pin++;
    }
    delay(1000);
  }

}
