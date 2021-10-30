#include <shared_types/RegimeId.h>

namespace shared_types {
int RegimeId::getId() const {
    return id_;
}

void RegimeId::setId(int id) {
    id_ = id;
}
} // namespace shared_types
