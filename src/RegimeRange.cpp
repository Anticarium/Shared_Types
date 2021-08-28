#include <shared_types/RegimeRange.h>

namespace shared_types {
int RegimeRange::from() const {
    return from_;
}

void RegimeRange::setFrom(int newFrom) {
    from_ = newFrom;
}

int RegimeRange::to() const {
    return to_;
}

void RegimeRange::setTo(int newTo) {
    to_ = newTo;
}

} // namespace shared_types
