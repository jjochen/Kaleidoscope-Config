// -*- mode: c++ -*-

#include <Kaleidoscope-Config-TapDance.h>
#include <Kaleidoscope-Xcode-Shortcuts.h>


void tapDanceAction(uint8_t tap_dance_index, KeyAddr key_addr, uint8_t tap_count, kaleidoscope::plugin::TapDance::ActionType tap_dance_action) {
  switch (tap_dance_index) {
  case TAP_DANCE_NEXT_TRACK:
    return tapDanceActionKeys(tap_count, tap_dance_action, Consumer_ScanNextTrack, Consumer_ScanPreviousTrack);
  case TAP_DANCE_XCODE_FIND:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeFindInFile, Key_XcodeFindInWorkspace);
  case TAP_DANCE_XCODE_FIND_AND_REPLACE:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeFindAndReplaceInFile, Key_XcodeFindAndReplaceInWorkspace);
  case TAP_DANCE_XCODE_COPY_OR_CUT:
    return tapDanceActionKeys(tap_count, tap_dance_action, Key_XcodeCopy, Key_XcodeCut);
  }
}




