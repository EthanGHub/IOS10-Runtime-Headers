//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <UserNotificationsServer/UNSDefaultDataProviderFactoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSNotificationRepositoryDelegate-Protocol.h>
#import <UserNotificationsServer/UNSRemoteNotificationServerObserver-Protocol.h>

@class NSString, UNSApplicationLauncher, UNSAttachmentsService, UNSDefaultDataProviderFactory, UNSLocationMonitor, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSPendingNotificationRepository, UNSRemoteNotificationServer, UNSUserNotificationServerConnectionListener;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver>
{
    UNSApplicationLauncher *_applicationLauncher;
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSUserNotificationServerConnectionListener *_userNotificationServerConnectionListener;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;
- (_Bool)_isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (void)_removeAllNotificationsForBundleIdentifier:(id)arg1;
- (void)_registerLoggers;
- (void)_timeDidChangeSignificantly;
- (void)_addObserverForSignificantTimeChanges;
- (void)_addObserverForRemoteNotificationServiceChanges;
- (void)_addObserverForDataProviderFactoryChanges;
- (void)_addObserverForApplicationWorkspaceChanges;
- (void)_addObserverForApplicationStateRestore;
- (void)_backgroundRefreshApplicationsDidChange;
- (void)_applicationStateDidRestore;
- (void)_addObserverForBackgroundRefreshApplicationChanges;
- (void)_localeDidChange;
- (void)_addObserverForLocaleChanges;
- (void)_migrateNotificationCategories;
- (void)_migratePendingNotificationRequests;
- (void)_migrateNotificationRepository;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (id)initWithSystemStateProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

