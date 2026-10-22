#include <Geode/binding/SetupSequenceTriggerPopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
SetupSequenceTriggerPopup::~SetupSequenceTriggerPopup() {
    CC_SAFE_RELEASE(m_groupButtons);
}
#endif
