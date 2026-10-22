#include <Geode/binding/GJUserScore.hpp>
#include <Geode/binding/GJAccountManager.hpp>
#include <Geode/binding/GameLevelManager.hpp>
#include <Geode/binding/MusicDownloadManager.hpp>
// win-only inline bodies for classes without their own inline file (one file so the unity build batches of the
// other inlines stay the same). dtors: the plain dtor is folded into the scalar deleting dtor on win, so there is
// no address that takes just `this`
#include <Geode/binding/AdminAbuseEntry.hpp>
#include <Geode/binding/AdminActionConfirmPopup.hpp>
#include <Geode/binding/AdminLogEntry.hpp>
#include <Geode/binding/AdminReportQueueEntry.hpp>
#include <Geode/binding/AdminReportedEntry.hpp>
#include <Geode/binding/CCTextInputMenu.hpp>
#include <Geode/binding/ControllerInputNode.hpp>
#include <Geode/binding/CustomSFXRowMenu.hpp>
#include <Geode/binding/DeathHistogram.hpp>
#include <Geode/binding/DpadMenu.hpp>
#include <Geode/binding/FriendRowEdges.hpp>
#include <Geode/binding/GJNotification.hpp>
#include <Geode/binding/GJSelectionStrip.hpp>
#include <Geode/binding/GJThreadMessage.hpp>
#include <Geode/binding/KeybindSet.hpp>
#include <Geode/binding/KeybindingsSettingsPopup.hpp>
#include <Geode/binding/MusicChangelogEntry.hpp>
#include <Geode/binding/MusicChangelogLine.hpp>
#include <Geode/binding/ProgressGameObject.hpp>
#include <Geode/binding/ReportPopup.hpp>
#include <Geode/binding/RowPressItem.hpp>
#include <Geode/binding/SFXChangelogEntry.hpp>
#include <Geode/binding/ScrollableContentLayer.hpp>
#include <Geode/binding/SectionedContentNode.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
#include <Geode/binding/TimeSpeedControl.hpp>
#include <Geode/binding/AudioAssetsPopup.hpp>
#include <Geode/binding/AutoBackupPopup.hpp>
#include <Geode/binding/AutoSaveSettingsLayer.hpp>
#include <Geode/binding/ClearPlatformerSavesPopup.hpp>
#include <Geode/binding/CommentOptionsPopup.hpp>
#include <Geode/binding/CreateStartPosPopup.hpp>
#include <Geode/binding/CreatorSettingsPopup.hpp>
#include <Geode/binding/DeathMarkerLayer.hpp>
#include <Geode/binding/DeathStatsPopup.hpp>
#include <Geode/binding/DeathTrackerPopup.hpp>
#include <Geode/binding/Dropdown.hpp>
#include <Geode/binding/DropdownListPopup.hpp>
#include <Geode/binding/EasingSelectPopup.hpp>
#include <Geode/binding/EditorCommandsPopup.hpp>
#include <Geode/binding/EditorSFXActionConfigLayer.hpp>
#include <Geode/binding/EditorSoundBrowserLayer.hpp>
#include <Geode/binding/EditorSoundConfigCell.hpp>
#include <Geode/binding/EditorSoundConfigUploadPopup.hpp>
#include <Geode/binding/EmotePickerPopup.hpp>
#include <Geode/binding/FriendPickerPopup.hpp>
#include <Geode/binding/GameSettingsLayer.hpp>
#include <Geode/binding/GJCompactUserCell.hpp>
#include <Geode/binding/GJEditorSoundConfig.hpp>
#include <Geode/binding/GJKeybindManager.hpp>
#include <Geode/binding/GJMessageThread.hpp>
#include <Geode/binding/GJNotificationCell.hpp>
#include <Geode/binding/GJPFollowCommandLayer.hpp>
#include <Geode/binding/GJThreadCell.hpp>
#include <Geode/binding/GridSettingsLayer.hpp>
#include <Geode/binding/IDNameBrowserPopup.hpp>
#include <Geode/binding/IDNameInput.hpp>
#include <Geode/binding/InvitesPopup.hpp>
#include <Geode/binding/KeybindCapturePopup.hpp>
#include <Geode/binding/LevelBadgePopup.hpp>
#include <Geode/binding/LevelControlConfig.hpp>
#include <Geode/binding/LevelPickerPopup.hpp>
#include <Geode/binding/MemberListPopup.hpp>
#include <Geode/binding/MessageThreadsPage.hpp>
#include <Geode/binding/MyStuffPopup.hpp>
#include <Geode/binding/NewsPopup.hpp>
#include <Geode/binding/NewThreadPopup.hpp>
#include <Geode/binding/NotificationsPage.hpp>
#include <Geode/binding/ParentalPrivacyPopup.hpp>
#include <Geode/binding/PlatformerControlsPopup.hpp>
#include <Geode/binding/RateStarsModLayer.hpp>
#include <Geode/binding/RenameThreadPopup.hpp>
#include <Geode/binding/ReportQueuePopup.hpp>
#include <Geode/binding/SelectFontLayer2.hpp>
#include <Geode/binding/SFXFolderPickerPopup.hpp>
#include <Geode/binding/SocialLinksPopup.hpp>
#include <Geode/binding/SongUsagePopup.hpp>
#include <Geode/binding/SoundPackDescPopup.hpp>
#include <Geode/binding/StartPosBrowser.hpp>
#include <Geode/binding/StartPosLayer.hpp>
#include <Geode/binding/ThreadDescPopup.hpp>
#include <Geode/binding/ThreadMessageOptionsPopup.hpp>
#include <Geode/binding/ThreadOptionsPopup.hpp>
#include <Geode/binding/ThreadRequestPopup.hpp>
#include <Geode/binding/ThreadSearchPopup.hpp>
#include <Geode/binding/ThreadViewPopup.hpp>
#include <Geode/binding/TouchControlEditLayer.hpp>
#include <Geode/binding/ParentalGateLayer.hpp>
#include <Geode/binding/DailyRecallUnlockPopup.hpp>
#include <Geode/binding/GlobalKeybindSource.hpp>

#if defined(GEODE_IS_WINDOWS)
AdminAbuseEntry::~AdminAbuseEntry() {}
AdminActionConfirmPopup::~AdminActionConfirmPopup() {}
AdminLogEntry::~AdminLogEntry() {}
AdminReportQueueEntry::~AdminReportQueueEntry() {}
AdminReportedEntry::~AdminReportedEntry() {}
CCTextInputMenu::~CCTextInputMenu() {}
ControllerInputNode::~ControllerInputNode() {}
CustomSFXRowMenu::~CustomSFXRowMenu() {}
DeathHistogram::~DeathHistogram() {}
DpadMenu::~DpadMenu() {}
FriendRowEdges::~FriendRowEdges() {}
GJNotification::~GJNotification() {}
GJSelectionStrip::~GJSelectionStrip() {}
GJThreadMessage::~GJThreadMessage() {}
KeybindSet::~KeybindSet() {}
KeybindingsSettingsPopup::~KeybindingsSettingsPopup() {}
MusicChangelogEntry::~MusicChangelogEntry() {}
MusicChangelogLine::~MusicChangelogLine() {}
ProgressGameObject::~ProgressGameObject() {}
ReportPopup::~ReportPopup() {}
RowPressItem::~RowPressItem() {}
SFXChangelogEntry::~SFXChangelogEntry() {}
ScrollableContentLayer::~ScrollableContentLayer() {}
SectionedContentNode::~SectionedContentNode() {}
TabbedPopupLayer::~TabbedPopupLayer() {}
TimeSpeedControl::~TimeSpeedControl() {}
AudioAssetsPopup::~AudioAssetsPopup() {
    MusicDownloadManager::sharedState()->removeMusicDownloadDelegate(this);
}
AutoBackupPopup::~AutoBackupPopup() {}
AutoSaveSettingsLayer::~AutoSaveSettingsLayer() {}
ClearPlatformerSavesPopup::~ClearPlatformerSavesPopup() {}
CommentOptionsPopup::~CommentOptionsPopup() {}
CreateStartPosPopup::~CreateStartPosPopup() {}
CreatorSettingsPopup::~CreatorSettingsPopup() {}
DeathMarkerLayer::~DeathMarkerLayer() {}
DeathStatsPopup::~DeathStatsPopup() {}
DeathTrackerPopup::~DeathTrackerPopup() {}
Dropdown::~Dropdown() {}
DropdownListPopup::~DropdownListPopup() {}
EasingSelectPopup::~EasingSelectPopup() {}
EditorCommandsPopup::~EditorCommandsPopup() {}
EditorSFXActionConfigLayer::~EditorSFXActionConfigLayer() {}
EditorSoundBrowserLayer::~EditorSoundBrowserLayer() {}
EditorSoundConfigCell::~EditorSoundConfigCell() {}
EditorSoundConfigUploadPopup::~EditorSoundConfigUploadPopup() {
    if (GameLevelManager::sharedState()->m_editorSoundUploadDelegate == this) GameLevelManager::sharedState()->m_editorSoundUploadDelegate = nullptr;
}
EmotePickerPopup::~EmotePickerPopup() {}
FriendPickerPopup::~FriendPickerPopup() {}
GameSettingsLayer::~GameSettingsLayer() {}
GJCompactUserCell::~GJCompactUserCell() {
    CC_SAFE_RELEASE(m_userScore);
}
GJEditorSoundConfig::~GJEditorSoundConfig() {}
GJKeybindManager::~GJKeybindManager() {}
GJMessageThread::~GJMessageThread() {}
GJNotificationCell::~GJNotificationCell() {
    CC_SAFE_RELEASE(m_notification);
}
GJPFollowCommandLayer::~GJPFollowCommandLayer() {}
GJThreadCell::~GJThreadCell() {
    CC_SAFE_RELEASE(m_thread);
}
GridSettingsLayer::~GridSettingsLayer() {}
IDNameBrowserPopup::~IDNameBrowserPopup() {}
IDNameInput::~IDNameInput() {}
InvitesPopup::~InvitesPopup() {}
KeybindCapturePopup::~KeybindCapturePopup() {}
LevelBadgePopup::~LevelBadgePopup() {}
LevelControlConfig::~LevelControlConfig() {}
LevelPickerPopup::~LevelPickerPopup() {}
MemberListPopup::~MemberListPopup() {}
MessageThreadsPage::~MessageThreadsPage() {}
MyStuffPopup::~MyStuffPopup() {}
NewsPopup::~NewsPopup() {}
NewThreadPopup::~NewThreadPopup() {}
NotificationsPage::~NotificationsPage() {}
ParentalPrivacyPopup::~ParentalPrivacyPopup() {
    GJAccountManager::sharedState();
    GJAccountManager::sharedState();
    if (GameLevelManager::sharedState()->m_userInfoDelegate == this) GameLevelManager::sharedState()->m_userInfoDelegate = nullptr;
}
PlatformerControlsPopup::~PlatformerControlsPopup() {}
RateStarsModLayer::~RateStarsModLayer() {}
RenameThreadPopup::~RenameThreadPopup() {}
ReportQueuePopup::~ReportQueuePopup() {}
SelectFontLayer2::~SelectFontLayer2() {}
SFXFolderPickerPopup::~SFXFolderPickerPopup() {}
SocialLinksPopup::~SocialLinksPopup() {}
SongUsagePopup::~SongUsagePopup() {}
SoundPackDescPopup::~SoundPackDescPopup() {}
StartPosBrowser::~StartPosBrowser() {}
StartPosLayer::~StartPosLayer() {}
ThreadDescPopup::~ThreadDescPopup() {}
ThreadMessageOptionsPopup::~ThreadMessageOptionsPopup() {}
ThreadOptionsPopup::~ThreadOptionsPopup() {}
ThreadRequestPopup::~ThreadRequestPopup() {}
ThreadSearchPopup::~ThreadSearchPopup() {}
ThreadViewPopup::~ThreadViewPopup() {}
TouchControlEditLayer::~TouchControlEditLayer() {}
GlobalKeybindSource::~GlobalKeybindSource() {}

ParentalGateLayer::ParentalGateLayer() {
    m_solution = 0;
}

DailyRecallUnlockPopup::DailyRecallUnlockPopup() {}

DailyRecallUnlockPopup* DailyRecallUnlockPopup::create(FLAlertLayerProtocol* delegate, GJGameLevel* level) {
    auto ret = new DailyRecallUnlockPopup();
    if (ret->init(delegate, level)) {
        ret->autorelease();
        return ret;
    }
    delete ret;
    return nullptr;
}
#endif
