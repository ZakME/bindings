#include <Geode/mapping/CCNotificationCenter.hpp>
#include <Geode/binding/GameLevelManager.hpp>
#include <Geode/binding/MessagesProfilePage.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
void MessagesProfilePage::updateLevelsLabel() {
    auto end = m_pageEndIdx + m_pageStartIdx;
    auto count = m_itemCount;
    if (end > count) end = count;
    m_levelsLabel->setString(cocos2d::CCString::createWithFormat("%i to %i of %i", m_pageStartIdx + 1, end, count)->getCString());
}

void MessagesProfilePage::updatePageArrows() {
    m_prevButton->setVisible(m_pageStartIdx != 0);
    m_nextButton->setVisible(m_pageEndIdx + m_pageStartIdx < m_itemCount);
}
#endif

#if defined(GEODE_IS_WINDOWS)
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
MessagesProfilePage::~MessagesProfilePage() {
    if (GameLevelManager::sharedState()->m_messageListDelegate == this) GameLevelManager::sharedState()->m_messageListDelegate = nullptr;
    if (GameLevelManager::sharedState()->m_uploadActionDelegate == this) GameLevelManager::sharedState()->m_uploadActionDelegate = nullptr;
    cocos2d::CCNotificationCenter::sharedNotificationCenter()->removeObserver(this, "MessageSelectionChangedNotification");
    CC_SAFE_RELEASE(m_loadingCircle);
}
#endif
