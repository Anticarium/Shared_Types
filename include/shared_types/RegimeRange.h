#pragma once

namespace shared_types {
class RegimeRange {
  public:
    int from() const;
    void setFrom(int newFrom);
    int to() const;
    void setTo(int newTo);

  private:
    int from_ = 0;
    int to_   = 0;
};
} // namespace shared_types
