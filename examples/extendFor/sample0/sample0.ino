//-----------------------------------------------------
//  title       : non library forAdd00.ino
//  date/author : 2022/05/06 @chrmlinux03
//  explain     : Extend the FOR syntax
//                Add and subtract from 0 to 10 in 2 steps each
//                It feels a little uncomfortable to 
//                have two "for" statements
//-----------------------------------------------------
#define DELAY_MSEC (1000)
void setup() {
  Serial.begin( 115200 ); delay(1000);
}

void loop() {
  int start = 0;
  int end = 10;
  int step = 2;

  for (int i = start; i < end; i += step) {
    Serial.printf("i=%d\n", i);
    delay(DELAY_MSEC);
  }
  for (int i = end; i > start; i -= step) {
    Serial.printf("i=%d\n", i);
    delay(DELAY_MSEC);
  }
}
