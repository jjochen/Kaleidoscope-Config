// -*- mode: c++ -*-

#include <Kaleidoscope-Config-Macros.h>
#include <Kaleidoscope.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-LEDControl.h>


#ifndef BUILD_INFORMATION
# define BUILD_INFORMATION "locally built"
#endif

namespace jj {
namespace Macros {
namespace {

}
}
}


namespace jj {
namespace Macros {

void configure(void) {

}

static void versionInfoMacro(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    ::Macros.type(PSTR("Keyboardio Model 01 - Kaleidoscope "));
    ::Macros.type(PSTR(BUILD_INFORMATION));
  }
}

static void anyKeyMacro(uint8_t keyState) {
  static Key lastKey;
  bool toggledOn = false;
  if (keyToggledOn(keyState)) {
    lastKey.setKeyCode(Key_A.getKeyCode() + (uint8_t)(millis() % 36));
    toggledOn = true;
  }

  if (keyIsPressed(keyState))
    Kaleidoscope.hid().keyboard().pressKey(lastKey, toggledOn);
}

static void lock(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    // ::Macros.play(MACRO(Tr(Consumer_Pause)));
    // ::Macros.play(MACRO(Tr(Consumer_Mute)));
    ::LEDOff.activate();
    ::Macros.play(MACRO(Tr(LCTRL(LGUI(Key_Q)))));
  }
}

static void xcodeSelectToMark(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_M))));
  }
}

static void xcodeSwapWithMark(uint8_t keyState) {
  if (keyToggledOn(keyState)) {
    ::Macros.play(MACRO(Tr(LCTRL(Key_X)), Tr(LCTRL(Key_X))));
  }
}


namespace {


} // namespace
} // namespace Macros
} // namespacce jj


const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState) {
  switch (macroIndex) {

  case MACRO_VERSION_INFO:
    jj::Macros::versionInfoMacro(keyState);
    break;

  case MACRO_ANY:
    jj::Macros::anyKeyMacro(keyState);
    break;

  case MACRO_LOCK:
    jj::Macros::lock(keyState);
    break;

  case MACRO_XCODE_SELECT_TO_MARK:
    jj::Macros::xcodeSelectToMark(keyState);
    break;

  case MACRO_XCODE_SWAP_WITH_MARK:
    jj::Macros::xcodeSwapWithMark(keyState);
    break;

  }
  return MACRO_NONE;
}



