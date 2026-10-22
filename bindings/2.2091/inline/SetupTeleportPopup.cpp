#include <Geode/binding/SetupTeleportPopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
SetupTeleportPopup::~SetupTeleportPopup() {
    CC_SAFE_RELEASE(m_teleportGravityToggles);
}
#endif
