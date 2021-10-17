#include <shared_types/RegimeName.h>

namespace shared_types {
QString RegimeName::getName() const {
    return regimeName_;
}
void RegimeName::setName(const QString& regimeName) {
    regimeName_ = regimeName;
}
} // namespace shared_types
