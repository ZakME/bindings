#include <Geode/binding/SetupCameraModePopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
SetupCameraModePopup::~SetupCameraModePopup() {
    CC_SAFE_RELEASE(m_freeModeObjects);
    CC_SAFE_RELEASE(m_cameraSettingsObjects);
}
#endif
