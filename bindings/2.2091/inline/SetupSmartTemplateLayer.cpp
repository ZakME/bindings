#include <Geode/binding/SetupSmartTemplateLayer.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
SetupSmartTemplateLayer::~SetupSmartTemplateLayer() {
    CC_SAFE_RELEASE(m_smartTemplate);
}
#endif
