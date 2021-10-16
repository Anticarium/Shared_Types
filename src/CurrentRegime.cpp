#include <shared_types/CurrentRegime.h>

namespace shared_types {
QString CurrentRegime::getCurrentRegime() const {
    return regime_;
}
void CurrentRegime::setCurrentRegime(const QString& regime) {
    regime_ = regime;
}
} // namespace shared_types
