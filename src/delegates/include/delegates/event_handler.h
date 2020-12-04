#pragma once

#include "delegate.h"
#include "event.h"
#include "event_args.h"

namespace delegates {
  template<typename type_t>
  using event_handler = delegate<void(type_t, const event_args&)>;
}
