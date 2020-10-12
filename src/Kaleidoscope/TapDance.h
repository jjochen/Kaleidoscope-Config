// -*- mode: c++ -*-

#pragma once

#define JJ_NextPreviousTrack TD(TAP_DANCE_NEXT_TRACK)
#define Key_XcodeFind TD(TAP_DANCE_XCODE_FIND)
#define Key_XcodeFindAndReplace TD(TAP_DANCE_XCODE_FIND_AND_REPLACE)
#define Key_XcodeCopyOrCut TD(TAP_DANCE_XCODE_COPY_OR_CUT)

enum { TAP_DANCE_NEXT_TRACK,
       TAP_DANCE_XCODE_FIND,
       TAP_DANCE_XCODE_FIND_AND_REPLACE,
       TAP_DANCE_XCODE_COPY_OR_CUT,
     };

namespace jj {
namespace TapDance {

void configure(void);

}
}
