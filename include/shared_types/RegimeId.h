#pragma once

namespace shared_types {
class RegimeId {
  public:
    int getId() const;
    void setId(int id);

  private:
    int id_;
};
} // namespace shared_types
