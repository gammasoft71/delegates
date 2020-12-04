#pragma once

#include "delegate.h"

namespace delegates {
  /// @brief Represents a delegate that has variables parameters and returns a value of the type specified by the result_t type.
  template<typename result_t, typename... arguments_t>
  using func = delegate<result_t(arguments_t...)>;
}
