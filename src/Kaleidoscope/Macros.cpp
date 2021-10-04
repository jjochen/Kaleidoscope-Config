// -*- mode: c++ -*-

#include <Kaleidoscope-Config-Macros.h>
#include <Kaleidoscope.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-LEDControl.h>


#ifndef BUILD_INFORMATION
#define BUILD_INFORMATION "locally built on " __DATE__ " at " __TIME__
#endif


namespace kaleidoscope {
namespace config {

static void typeVersionInfo(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }

  ::Macros.type(PSTR("Kaleidoscope "));
  ::Macros.type(PSTR(BUILD_INFORMATION));
}

static void lockMac(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  // ::Macros.play(MACRO(Tr(Consumer_Pause)));
  // ::Macros.play(MACRO(Tr(Consumer_Mute)));
  ::LEDOff.activate();
  ::Macros.play(MACRO(Tr(LCTRL(LGUI(Key_Q)))));
}

static void sleepMac(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LGUI(LALT(Consumer_Eject)))));
}

static void typeAUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    ::Macros.type(PSTR("not on; "));
    // TODO
    return;
  }
  ::Macros.type(PSTR("on; "));
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_A)));
}

static void typeOUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    // TODO
    return;
  }
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_O)));
}

static void typeUUmlaut(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    // TODO
    return;
  }
  ::Macros.play(MACRO(Tr(LALT(Key_U)), Tr(Key_U)));
}

static void typeEszett(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LALT(Key_S))));
}

static void xcodeSelectToMark(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_M))));
}

static void xcodeSwapWithMark(KeyEvent &event) {
  if (!keyToggledOn(event.state)) {
    return;
  }
  ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_X))));
}

} // namespace config
} // namespacce jj




