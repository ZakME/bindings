#include <Geode/binding/RewardsPage.hpp>
#include <Geode/binding/RewardUnlockLayer.hpp>
#include <Geode/binding/GJRewardItem.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
bool RewardUnlockLayer::readyToCollect(GJRewardItem* item) {
    return item ? m_chestType == (int)item->m_rewardType : false;
}
#endif

#if defined(GEODE_IS_WINDOWS)
void RewardUnlockLayer::keyBackClicked() {}

void RewardUnlockLayer::labelEnterFinishedO(cocos2d::CCObject* object) {}
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
RewardUnlockLayer::~RewardUnlockLayer() {
    CC_SAFE_RELEASE(m_rewardsPage);
    CC_SAFE_RELEASE(m_rewardItem);
}
#endif
