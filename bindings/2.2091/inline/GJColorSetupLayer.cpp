#include <Geode/binding/GJColorSetupLayer.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
GJColorSetupLayer::~GJColorSetupLayer() {
    CC_SAFE_RELEASE(m_unk290);
    CC_SAFE_RELEASE(m_settingsObject);
    CC_SAFE_RELEASE(m_unk298);
}
#endif
