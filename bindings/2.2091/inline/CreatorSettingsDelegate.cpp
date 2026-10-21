#include <Geode/binding/CreatorSettingsDelegate.hpp>

void CreatorSettingsDelegate::creatorDescriptionChanged(std::string const&) {}

#if defined(GEODE_IS_WINDOWS)
CreatorSettingsDelegate::~CreatorSettingsDelegate() {}
#endif
