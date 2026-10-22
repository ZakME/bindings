#include <Geode/binding/GJStoreItem.hpp>
#include <Geode/binding/PurchaseItemPopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
PurchaseItemPopup::~PurchaseItemPopup() {
    CC_SAFE_RELEASE(m_storeItem);
}
#endif
