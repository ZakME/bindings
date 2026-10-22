#include <Geode/binding/GameManager.hpp>
#include <Geode/binding/FollowRewardPage.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
FollowRewardPage::~FollowRewardPage() {
    CC_SAFE_RELEASE(m_chests);
    if (GameManager::sharedState()->m_gameRateDelegate2 == this) GameManager::sharedState()->m_gameRateDelegate2 = nullptr;
    if (GameManager::sharedState()->m_rewardedVideoDelegate == this) GameManager::sharedState()->m_rewardedVideoDelegate = nullptr;
}
#endif
