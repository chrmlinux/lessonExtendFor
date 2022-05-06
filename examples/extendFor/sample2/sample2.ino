//-----------------------------------------------------
//  title       : non library sample
//  date/author : 2022/05/06 @chrmlinux03 
//  explain     : Extend the FOR syntax
//                Add and subtract from 0 to 10 in 2 steps each
//                When written outside the loop
//-----------------------------------------------------
#define DELAY_MSEC (1000)

int16_t exf(int start, int end, int step) {
  static int i_ = start;
  static int iadd_ = step;  
  static bool first_ = true;

  if (first_) {i_ -= iadd_; first_ = false;}
  
  i_ += iadd_;
  if (((i_ + iadd_) < start) || (i_ > (end - iadd_))) {
    iadd_ = -iadd_;
  }
  return i_;
}

void setup() {
  Serial.begin( 115200 ); delay(1000);
}

void loop() {
  int rtn = exf(0, 10, 2);  
  Serial.printf("rtn=%d\n", rtn);
  delay(DELAY_MSEC);
}
