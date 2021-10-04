// -*- mode: c++ -*-

#include <Kaleidoscope-Config-OneShot.h>
#include <Kaleidoscope-OneShot.h>


namespace jj {
namespace config {

void setup_one_shot(void) {
  ::OneShot.enableStickablity();
  ::OneShot.setTimeout(2500);
  ::OneShot.setHoldTimeout(250);
  ::OneShot.setDoubleTapTimeout(250);
}

} // namespace OneShot
} // namespacce jj


