#pragma once

#include "delegate.h"

namespace delegates {
  /// @brief Represents a delegate that has variable parameters and does not return a value.
  template<typename... arguments_t>
  using action = delegate <void(arguments_t...)>;
}
