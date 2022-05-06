//-----------------------------------------------------
//  title       : non library forAdd01.ino
//  date/author : 2022/05/06 @chrmlinux03 
//  explain     : Extend the FOR syntax
//                Add and subtract from 0 to 10 in 2 steps each
//                When written inside the loop
//-----------------------------------------------------
#define DELAY_MSEC (1000)

void setup() {
  Serial.begin( 115200 ); delay(1000);
}

void loop() {

  int start = 0;
  int end = 10;
  int step = 2;

  static bool first_ = true;
  static int i_ = start;
  static int iadd_ = step;

  if (first_) {i_ -= iadd_; first_ = !first_;}

  i_ += iadd_;
  if (((i_ + iadd_) < start) || (i_ > (end - iadd_))) {
    iadd_ = -iadd_;
  }

  Serial.printf("i=%d\n", i_);
  delay(DELAY_MSEC);
}
