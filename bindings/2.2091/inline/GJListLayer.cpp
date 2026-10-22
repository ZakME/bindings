#include <Geode/binding/BoomListView.hpp>
#include <Geode/binding/GJListLayer.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
GJListLayer::~GJListLayer() {
    CC_SAFE_RELEASE(m_listView);
}
#endif
