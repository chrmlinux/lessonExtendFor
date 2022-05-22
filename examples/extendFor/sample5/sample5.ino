//-----------------------------------------------------
//  title       : library sample
//  date/author : 2022/05/06 @chrmlinux03
//  explain     : Extend the FOR syntax
//                Add and subtract from 0 to 10 in 2 steps each
//-----------------------------------------------------
#include <extendFor.hpp>

static extendFor ef;
static extendFor eft[2];

#define TM (20220522)
#define DELAY_MSEC (1000)

void setup() {
  Serial.begin( 115200 ); delay(1000);
  ef.begin();
  eft[0].begin();
  eft[1].begin();
}

void loop() {
  Serial.printf("%d,%d,%d\n",
                ef.exf(0, 10, 2),
                eft[0].exf(0, 20, 2),
                eft[1].exf(0, 30, 5));
  delay(DELAY_MSEC);
}
