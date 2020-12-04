#pragma once

#include "delegate.h"

namespace delegates {
  /// @brief Represents a delagate that defines a set of criteria and determines whether the specified object meets those criteria.
  template<typename type_t>
  using predicate = delegate<bool(type_t)>;
}
