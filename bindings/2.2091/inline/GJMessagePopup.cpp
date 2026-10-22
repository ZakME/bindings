#include <Geode/binding/GJMessagePopup.hpp>
#include <Geode/binding/GJUserMessage.hpp>
#include <Geode/binding/GameLevelManager.hpp>
#include <Geode/binding/UploadActionPopup.hpp>


#if defined(GEODE_IS_WINDOWS) || defined(GEODE_IS_IOS)
#endif

#if defined(GEODE_IS_WINDOWS)
void GJMessagePopup::blockUser() {
    if (GameLevelManager::sharedState()->blockUser(m_message->m_accountID)) {
        m_uploadPopup = UploadActionPopup::create(this, "Blocking user...");
        m_uploadPopup->show();
    }
}
#endif

#if defined(GEODE_IS_IOS)
#endif


#if defined(GEODE_IS_WINDOWS)
GJMessagePopup::~GJMessagePopup() {
    if (GameLevelManager::sharedState()->m_uploadActionDelegate == this) GameLevelManager::sharedState()->m_uploadActionDelegate = nullptr;
    if (GameLevelManager::sharedState()->m_downloadMessageDelegate == this) GameLevelManager::sharedState()->m_downloadMessageDelegate = nullptr;
    CC_SAFE_RELEASE(m_message);
}
#endif
