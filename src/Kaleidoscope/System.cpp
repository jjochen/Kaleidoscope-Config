// -*- mode: c++ -*-

#include <Kaleidoscope-Config-System.h>
#include <Kaleidoscope-Config-LEDControl.h>
#include <Kaleidoscope-HostPowerManagement.h>
#include <Kaleidoscope-HostOS.h>


namespace jj {
namespace System {
namespace {

}
}
}


namespace jj {
namespace System {

void configure(void) {
  ::HostOS.os(kaleidoscope::hostos::OSX);
}



namespace {


} // namespace
} // namespace System
} // namespacce jj



void hostPowerManagementEventHandler(kaleidoscope::plugin::HostPowerManagement::Event event) {
  switch (event) {
  case kaleidoscope::plugin::HostPowerManagement::Suspend:
    jj::LEDControl::disable();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Resume:
    jj::LEDControl::enable();
    break;
  case kaleidoscope::plugin::HostPowerManagement::Sleep:
    break;
  }
}

