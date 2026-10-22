#include <Geode/binding/SetupKeyframePopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
SetupKeyframePopup::~SetupKeyframePopup() {
    CC_SAFE_RELEASE(m_timeModeToggles);
}
#endif
