//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDAccessoryBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemon/HMDRelayManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDResidentDeviceManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDUserManagementOperationDelegate-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessoryBrowser, HMDApplicationData, HMDCharacteristicNotificationRegistry, HMDHomeLocationHandler, HMDHomeManager, HMDRelayManager, HMDResidentDevice, HMDResidentDeviceManager, HMDRoom, HMDUser, HMFMessageDispatcher, HMFTimer, NSArray, NSDate, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHome : NSObject <HMDBulletinIdentifiers, HMDResidentDeviceManagerDelegate, HMDUserManagementOperationDelegate, HMFLogging, HMDAccessoryBrowserDelegate, HMFMessageReceiver, HMDRelayManagerDelegate, HMFTimerDelegate, HMFDumpState, NSSecureCoding>
{
    _Bool _anyBTLEAccessoryReachable;
    _Bool _notificationsEnabled;
    _Bool _remoteAccessIsEnabled;
    _Bool _adminUser;
    _Bool _ownerUser;
    _Bool _registeredNotificationWithRemoteGateway;
    _Bool _allowsRemoteAccess;
    _Bool _currentRemoteReachabilityRegistration;
    int _regionState;
    HMDUser *_currentUser;
    HMDUser *_owner;
    long long _homeLocation;
    long long _atHomeLevel;
    NSString *_name;
    HMDHomeManager *_homeManager;
    NSUUID *_uuid;
    HMDHomeLocationHandler *_homeLocationHandler;
    NSDate *_notificationsUpdatedTime;
    NSMutableSet *_notificationRegistrations;
    NSMutableSet *_notificationDeregistrations;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSHashTable *_removeAccessoryInProgressForHMDAccessories;
    HMDApplicationData *_appData;
    NSMutableDictionary *_addPendingAccessorySetupCodeHandlers;
    NSMutableDictionary *_addPendingAccessorySetupCodes;
    NSMutableSet *_addPendingAccessories;
    HMDResidentDeviceManager *_residentDeviceManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDAccessoryBrowser *_accessoryBrowser;
    HMDRelayManager *_relayManager;
    NSMutableArray *_rooms;
    NSMutableArray *_zones;
    NSMutableArray *_accessories;
    NSMutableArray *_discoveredAccessories;
    NSMutableArray *_services;
    NSMutableArray *_serviceGroups;
    NSMutableArray *_actionSets;
    NSMutableArray *_triggers;
    NSMutableArray *_triggerOwnedActionSets;
    NSMutableArray *_outgoingInvitations;
    NSMutableArray *_users;
    NSMutableArray *_pendingUsers;
    NSMutableArray *_unconfiguredResidentDevices;
    HMDRoom *_roomForEntireHome;
    long long _lastKnownReachableIPAccessoryCount;
    long long _lastKnownReachableAccessoryCount;
    long long _configurationVersion;
    NSString *_ownerName;
    HMDCharacteristicNotificationRegistry *_characteristicNotificationRegistry;
    NSMutableSet *_heartbeatPingMessagesQueuedWithServer;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
    NSMutableArray *_assistantOperations;
    NSMutableDictionary *_enableNotificationPayload;
    NSMutableDictionary *_disableNotificationPayload;
    HMFTimer *_modifyNotificationsCoalesceTimer;
    NSMapTable *_retrievalCompletionTuplesForAccessories;
    NSHashTable *_unpairedSecondaryHAPAccessories;
    HMDResidentDevice *_resident;
    NSMutableArray *_reachabilityRegisteredDevices;
    HMFTimer *_disableNotificationTimer;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteRead:(id)arg3;
+ (void)appendCharacteristicsToAccessoryList:(id)arg1 responseTuples:(id)arg2 forMultipleCharacteristicsRemoteWrite:(id)arg3;
+ (id)shortDescription;
+ (_Bool)isObjectContainedInHome:(id)arg1;
+ (void)_initialize;
@property(retain, nonatomic) HMFTimer *disableNotificationTimer; // @synthesize disableNotificationTimer=_disableNotificationTimer;
@property(retain, nonatomic) NSMutableArray *reachabilityRegisteredDevices; // @synthesize reachabilityRegisteredDevices=_reachabilityRegisteredDevices;
@property(nonatomic) _Bool currentRemoteReachabilityRegistration; // @synthesize currentRemoteReachabilityRegistration=_currentRemoteReachabilityRegistration;
@property(retain, nonatomic) HMDResidentDevice *resident; // @synthesize resident=_resident;
@property(readonly, nonatomic) NSHashTable *unpairedSecondaryHAPAccessories; // @synthesize unpairedSecondaryHAPAccessories=_unpairedSecondaryHAPAccessories;
@property(retain, nonatomic) NSMapTable *retrievalCompletionTuplesForAccessories; // @synthesize retrievalCompletionTuplesForAccessories=_retrievalCompletionTuplesForAccessories;
@property(retain, nonatomic) HMFTimer *modifyNotificationsCoalesceTimer; // @synthesize modifyNotificationsCoalesceTimer=_modifyNotificationsCoalesceTimer;
@property(readonly, nonatomic) NSMutableDictionary *disableNotificationPayload; // @synthesize disableNotificationPayload=_disableNotificationPayload;
@property(readonly, nonatomic) NSMutableDictionary *enableNotificationPayload; // @synthesize enableNotificationPayload=_enableNotificationPayload;
@property(retain, nonatomic) NSMutableArray *assistantOperations; // @synthesize assistantOperations=_assistantOperations;
@property(nonatomic) _Bool allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
@property(nonatomic) _Bool registeredNotificationWithRemoteGateway; // @synthesize registeredNotificationWithRemoteGateway=_registeredNotificationWithRemoteGateway;
@property(nonatomic, getter=isOwnerUser) _Bool ownerUser; // @synthesize ownerUser=_ownerUser;
@property(nonatomic, getter=isAdminUser) _Bool adminUser; // @synthesize adminUser=_adminUser;
@property(retain, nonatomic) NSMutableSet *pendingResponsesForRemoteAccessSetup; // @synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup;
@property(retain, nonatomic) NSMutableSet *heartbeatPingMessagesQueuedWithServer; // @synthesize heartbeatPingMessagesQueuedWithServer=_heartbeatPingMessagesQueuedWithServer;
@property(nonatomic) _Bool remoteAccessIsEnabled; // @synthesize remoteAccessIsEnabled=_remoteAccessIsEnabled;
@property(retain, nonatomic) HMDCharacteristicNotificationRegistry *characteristicNotificationRegistry; // @synthesize characteristicNotificationRegistry=_characteristicNotificationRegistry;
@property(nonatomic) int regionState; // @synthesize regionState=_regionState;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) long long configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(nonatomic) long long lastKnownReachableAccessoryCount; // @synthesize lastKnownReachableAccessoryCount=_lastKnownReachableAccessoryCount;
@property(nonatomic) long long lastKnownReachableIPAccessoryCount; // @synthesize lastKnownReachableIPAccessoryCount=_lastKnownReachableIPAccessoryCount;
@property(retain, nonatomic) HMDRoom *roomForEntireHome; // @synthesize roomForEntireHome=_roomForEntireHome;
@property(retain, nonatomic) NSMutableArray *unconfiguredResidentDevices; // @synthesize unconfiguredResidentDevices=_unconfiguredResidentDevices;
@property(retain, nonatomic) NSMutableArray *pendingUsers; // @synthesize pendingUsers=_pendingUsers;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(retain, nonatomic) NSMutableArray *outgoingInvitations; // @synthesize outgoingInvitations=_outgoingInvitations;
@property(retain, nonatomic) NSMutableArray *triggerOwnedActionSets; // @synthesize triggerOwnedActionSets=_triggerOwnedActionSets;
@property(retain, nonatomic) NSMutableArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSMutableArray *actionSets; // @synthesize actionSets=_actionSets;
@property(retain, nonatomic) NSMutableArray *serviceGroups; // @synthesize serviceGroups=_serviceGroups;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSMutableArray *discoveredAccessories; // @synthesize discoveredAccessories=_discoveredAccessories;
@property(retain, nonatomic) NSMutableArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) NSMutableArray *zones; // @synthesize zones=_zones;
@property(retain, nonatomic) NSMutableArray *rooms; // @synthesize rooms=_rooms;
@property(retain, nonatomic) HMDRelayManager *relayManager; // @synthesize relayManager=_relayManager;
@property(retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDResidentDeviceManager *residentDeviceManager; // @synthesize residentDeviceManager=_residentDeviceManager;
@property(retain, nonatomic) NSMutableSet *addPendingAccessories; // @synthesize addPendingAccessories=_addPendingAccessories;
@property(retain, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodes; // @synthesize addPendingAccessorySetupCodes=_addPendingAccessorySetupCodes;
@property(retain, nonatomic) NSMutableDictionary *addPendingAccessorySetupCodeHandlers; // @synthesize addPendingAccessorySetupCodeHandlers=_addPendingAccessorySetupCodeHandlers;
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property(retain, nonatomic) NSHashTable *removeAccessoryInProgressForHMDAccessories; // @synthesize removeAccessoryInProgressForHMDAccessories=_removeAccessoryInProgressForHMDAccessories;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSMutableSet *notificationDeregistrations; // @synthesize notificationDeregistrations=_notificationDeregistrations;
@property(retain, nonatomic) NSMutableSet *notificationRegistrations; // @synthesize notificationRegistrations=_notificationRegistrations;
@property(copy, nonatomic) NSDate *notificationsUpdatedTime; // @synthesize notificationsUpdatedTime=_notificationsUpdatedTime;
@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(retain, nonatomic) HMDHomeLocationHandler *homeLocationHandler; // @synthesize homeLocationHandler=_homeLocationHandler;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getHomeConfigurationForAWD;
- (id)logIdentifier;
- (id)dumpCharacteristicNotificationRegistry;
- (id)dumpActionSetDescription;
- (id)dumpUnpairedSecondaryAccessories;
- (void)validateDuetEventIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isValidEventIdentifier:(id)arg1;
- (void)stopSearchingForBridgedAccessories;
- (void)_stopSearchingForBridgedAccessories;
- (void)startSearchingForBridgedAccessories;
- (void)_startSearchingForBridgedAccessories;
- (void)_handleResponseForElectMessageToResident:(id)arg1 error:(id)arg2;
- (void)_remoteAccessHealthMonitorTimerDidFire;
- (void)remoteAccessHealthMonitorTimerDidFire;
- (void)_updateCloudRelaySupport;
- (void)_handleDidReceiveIDSMessageWithNoListenerFromAddress:(id)arg1;
- (void)handleDidReceiveIDSMessageWithNoListener:(id)arg1;
- (void)handleActiveAccountChanged:(id)arg1;
- (void)removeUnconfiguredResidentDeviceWithUserID:(id)arg1;
- (void)addUnconfiguredResidentDeviceWithName:(id)arg1 userID:(id)arg2 deviceIdentifier:(id)arg3;
- (void)timerDidFire:(id)arg1;
- (void)_handleDisableNotificationsTimerFired;
- (void)_handleCoalescedModifyNotifications;
- (void)userManagementOperationDidFinish:(id)arg1;
- (void)residentDeviceManager:(id)arg1 didUpdateResidentAvailable:(_Bool)arg2;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (void)_configurePairedAccessoriesForServer:(id)arg1 reAddServices:(_Bool)arg2;
- (void)_unconfigurePairedAccessoriesForServer:(id)arg1;
- (void)_disablePairedAccessoriesForServer:(id)arg1 error:(id)arg2;
- (void)_updatePairedAccessoriesForServer:(id)arg1 reAddServices:(_Bool)arg2;
- (void)removeDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRemovedDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleNewlyDiscoveredAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleRemovedPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (void)_handleNewlyPairedAccessories:(id)arg1 bridgeAccessory:(id)arg2;
- (id)_createNewlyPairedSecondaryAccessoriesWithIdentifier:(id)arg1;
- (void)accessoryBrowser:(id)arg1 didUpdateReachability:(_Bool)arg2 forBTLEAccessoriesWithServerIdentifier:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateName:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateCategory:(id)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateHasPairings:(_Bool)arg3;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3;
- (id)_hmdCharacteristicsForHAPCharacteristics:(id)arg1;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 isBlockedWithCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_accessoryServerIsBlocked:(id)arg1;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didDiscoverAccessories:(id)arg3 transaction:(id)arg4 error:(id)arg5;
- (void)accessoryBrowser:(id)arg1 accessoryServer:(id)arg2 didStopPairingWithError:(id)arg3;
- (void)accessoryBrowser:(id)arg1 discoveryFailedWithError:(id)arg2 accessoryServer:(id)arg3 linkType:(long long)arg4;
- (void)_notifyRetrievalError:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3 accessoryOperationBlock:(CDUnknownBlockType)arg4;
- (void)accessoryBrowser:(id)arg1 didTombstoneAccessoryServer:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_isRetrievalInProgressForLinkType:(long long)arg1 accessory:(id)arg2;
- (id)_dequeueAllRetrievalCompletionTuplesForLinkType:(long long)arg1 accessory:(id)arg2;
- (void)_enqueueRetrievalCompletionTuple:(id)arg1 forAccessory:(id)arg2;
- (void)_retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveHAPAccessoryForHMDAccessory:(id)arg1 linkType:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_encodeActionSets:(id)arg1 coder:(id)arg2;
- (void)_encodeObjectsWithAcessoriesWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)notifyDidLeaveHome;
- (void)notifyDidArriveHome;
- (void)updateHomeLocation;
@property long long homeLocation; // @synthesize homeLocation=_homeLocation;
@property long long atHomeLevel; // @synthesize atHomeLevel=_atHomeLevel;
- (void)_handleEnableNotifications:(id)arg1;
- (void)_handleEnableRemoteAccess:(id)arg1;
- (void)_handleQueryRemoteAccess:(id)arg1;
- (void)_configureConfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)_addResidentWithUsername:(id)arg1 publicKey:(id)arg2 destination:(id)arg3;
- (void)_sendResidentInviteWithDestination:(id)arg1;
- (void)_configureUnconfiguredResident:(id)arg1 desiredConfigState:(unsigned long long)arg2;
- (id)__accessoryIdentifiers;
- (void)_updateConfigurationStateForResidentDevice:(id)arg1 desiredConfigState:(unsigned long long)arg2 message:(id)arg3;
- (void)notifyNewRemotePeersFound:(_Bool)arg1 remoteUsersRemoved:(id)arg2 forceRemoteNotificationRegistration:(_Bool)arg3;
- (void)_remoteAccessEnabled:(_Bool)arg1;
- (void)remoteAccessEnabled:(_Bool)arg1;
- (void)updateNetworkConnectivity:(_Bool)arg1 companionReachable:(_Bool)arg2;
- (_Bool)_residentDeviceAvailable;
- (id)_residentUsers;
- (_Bool)migrateAfterResidentChange;
- (_Bool)mergeResidentFromHome:(id)arg1 dataVersion:(unsigned long long)arg2;
- (void)removeResidentCapableDevice:(id)arg1;
- (void)addResidentCapableDevice:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *residentCapableDevices;
@property(readonly, nonatomic, getter=isResidentSupported) _Bool residentSupported;
- (void)_handleMultipleCharacteristicRead:(id)arg1;
- (id)_prepareMultipleCharacteristicRead:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_redispatchReadForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_readCharacteristicValuesForAccessories:(id)arg1 readRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)readCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_performOperation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldWaitForAccessoriesToBeReachable;
- (id)writeRequestTuplesFromMessage:(id)arg1;
- (void)_handleMultipleCharacteristicWrite:(id)arg1;
- (void)_addResponseTuplesFromDictionary:(id)arg1 accessoryRequestMapTable:(id)arg2 responseTuples:(id)arg3 completedGroup:(id)arg4;
- (void)_writeCharacteristicValues:(id)arg1 requestMessage:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_redispatchWriteForAccessories:(id)arg1 dispatchGroup:(id)arg2 requestMap:(id)arg3 requestMessage:(id)arg4 responseTuples:(id)arg5;
- (void)_writeCharacteristicValuesForAccessories:(id)arg1 writeRequestMap:(id)arg2 responseTuples:(id)arg3 requestMessage:(id)arg4 viaDevice:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_applyDeviceLockCheck:(id)arg1;
- (void)writeCharacteristicValues:(id)arg1 identifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_notifyChangedCharacteristics:(id)arg1 identifier:(id)arg2 multiPartResponse:(_Bool)arg3 moreMessagesInMultipart:(_Bool)arg4 requestMessage:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_updateBulletinBoardOfChangedCharacteristics:(id)arg1;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2;
- (void)notifyOfChangedCharacterisitic:(id)arg1;
- (void)_postInternalNotificationForChangedCharacterisitics:(id)arg1 modifiedAccessories:(id)arg2 changedByThisDevice:(_Bool)arg3;
- (void)_handleCharacterisiticsChangedNotification:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1 toUserDeviceAddress:(id)arg2;
- (void)_notifyRemoteUsersOfChangedCharacteristics:(id)arg1;
- (void)_notifyChangedCharacteristics:(id)arg1;
- (id)_notificationPayloadForChangedCharacterisitics:(id)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)_handleRetrievalForBlockedAccessory:(id)arg1 hapAccessory:(id)arg2 blockedBridgedAccessories:(id)arg3 unblockMessage:(id)arg4;
- (void)_handleUnblock:(id)arg1;
- (unsigned long long)reachableIPAccessories;
- (long long)reachableAccessories;
- (void)_evaluateAtHomeState;
- (void)_reachabilityChangedForAccessory:(id)arg1 reachable:(_Bool)arg2;
- (void)_sendInvitationCancelationRequestToInvitee:(id)arg1;
- (void)__handleCompletedOutgoingInvitation:(id)arg1;
- (void)__handleCancelledOutgoingInvitation:(id)arg1;
- (void)__handleAcceptedOutgoingInvitationResponse:(id)arg1 destinationAddress:(id)arg2 publicKey:(id)arg3 username:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_updateOutgoingInviationsWithCompleteUserManagementOperation:(id)arg1;
- (void)_handleUpdateRequestForHomeInvitationFromInvitee:(id)arg1;
- (void)_handleUpdateOutgoingInvitationState:(id)arg1;
- (void)_postOutgoingInvitationStateChangedNotification:(id)arg1 newInvitationState:(long long)arg2;
- (void)_updateOutgoingInvitationForUser:(id)arg1 invitationState:(long long)arg2 error:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_sendInvitation:(id)arg1 confirm:(_Bool)arg2 message:(id)arg3;
- (void)_addOutgoingInvitations:(id)arg1 message:(id)arg2;
- (void)_handleOutgoingInvitations:(id)arg1;
- (void)_removeUser:(id)arg1 message:(id)arg2;
- (void)_removeOutgoingInvitationForUser:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)_handleRemoveUser:(id)arg1;
- (void)_handleAddRelayAccessTokens:(id)arg1;
- (void)_sendAccessTokensToUser:(id)arg1 user:(id)arg2 error:(id)arg3;
- (void)sendAccessTokensToUser:(id)arg1 user:(id)arg2;
- (void)_handleAddUserToRelayAccessories:(id)arg1;
- (void)addUserToRelayAccessoriesWithConsentTokens:(id)arg1;
- (void)_handleUpdateUserAccess:(id)arg1;
- (void)_addUsersWithIDs:(id)arg1 message:(id)arg2;
- (void)_handleUserInvitations:(id)arg1;
- (void)_addUser:(id)arg1 userPrivilege:(unsigned long long)arg2 confirm:(_Bool)arg3 message:(id)arg4;
- (void)_handleAddUser:(id)arg1;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessory:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (id)_prepareUserManagementOperationForUser:(id)arg1 accessories:(id)arg2 type:(unsigned long long)arg3 error:(id *)arg4;
- (void)_addAllUsersToAccessories:(id)arg1;
- (void)_removeAllUsersFromAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isUserValid:(id)arg1 error:(id *)arg2;
- (_Bool)_verifyUserManagementPermissionForAccessory:(id)arg1 error:(id *)arg2;
- (id)_currentUser;
@property(readonly, nonatomic) HMDUser *currentUser; // @synthesize currentUser=_currentUser;
- (id)_owner;
@property(readonly, nonatomic) HMDUser *owner; // @synthesize owner=_owner;
- (void)_removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeWithMergeSecondaryAccessory:(id)arg1 removedFromBridgeAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removePairedAccessory:(id)arg1;
- (void)_addPairedAccessory:(id)arg1;
- (void)resetConfiguration;
- (void)_removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_removeAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (id)_removeAccessoriesCommon:(id)arg1 message:(id)arg2;
- (void)_removeService:(id)arg1;
- (void)_removeCharacteristic:(id)arg1;
- (void)_removeAccessoryWithUUID:(id)arg1 message:(id)arg2;
- (void)_removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeReachableAccessory:(id)arg1 hapAccessory:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAccessoriesForPrimaryAccessory:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendRemoveCompletionStatusForHMDAccessories:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_handleRemoveAccessory:(id)arg1;
- (void)_addNewAccessories:(id)arg1 bridgeAccessory:(id)arg2 message:(id)arg3;
- (void)_handleAddAccessories:(id)arg1;
- (void)_processPairingRequestForMessage:(id)arg1 cancelPairing:(_Bool)arg2;
- (void)_handleContinuePairingAccessory:(id)arg1;
- (void)_handleCancelPairingAccessory:(id)arg1;
- (CDUnknownBlockType)_setupCodeProviderForMessage:(id)arg1;
- (void)_presentPairingPasswordDialogForAccessory:(id)arg1 setupCodeAvailable:(CDUnknownBlockType)arg2;
- (void)_handleAddAccessory:(id)arg1;
- (id)_createPairedAccessoriesForUnpairedAccessory:(id)arg1 accessoryServer:(id)arg2;
- (id)_addAccessory:(id)arg1 configurationApp:(id)arg2;
- (_Bool)_shouldAddAccessory:(id)arg1;
- (void)_handleAccessoryReachabilityChange:(id)arg1;
- (void)_notifyRegisteredDevicesOfReachabilityChange:(id)arg1;
- (void)_deregisterDeviceForReachabilityNotification:(id)arg1;
- (void)_registerDeviceForReachabilityNotification:(id)arg1 accessoryList:(id)arg2;
- (void)_handleAccessoryReachabilityRegistration:(id)arg1 register:(_Bool)arg2;
- (void)_handleSetAppData:(id)arg1;
- (id)_getContainerForAppData:(id)arg1;
- (void)_handleQueryUserIsAdmin:(id)arg1;
- (void)_removeTrigger:(id)arg1 message:(id)arg2;
- (void)_handleRemoveTrigger:(id)arg1;
- (void)_addNewTrigger:(id)arg1 message:(id)arg2 notification:(id)arg3 payloadAnnex:(id)arg4;
- (void)_handleAddTriggers:(id)arg1;
- (void)_handleAddTimerTrigger:(id)arg1;
- (_Bool)_validateAddingNewTriggerWithName:(id)arg1 message:(id)arg2;
- (void)_handleAddEventTrigger:(id)arg1;
- (void)_handleExecuteActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1;
- (void)removeTriggerOwnedActionSet:(id)arg1;
- (void)addTriggerOwnedActionSet:(id)arg1;
- (void)_handleRemoveActionSet:(id)arg1;
- (void)_handleAddActionSet:(id)arg1;
- (id)builtInActionSetInfo;
- (void)_handleRemoveServiceGroup:(id)arg1;
- (void)_handleAddServiceGroup:(id)arg1;
- (void)_handleRemoveZone:(id)arg1;
- (void)_handleAddZone:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_updateWoWState;
- (void)_registerForMessages;
- (_Bool)_hasPairedReachableBTLEAccessories;
- (void)_updateRemoteReachability:(_Bool)arg1 accessories:(id)arg2;
- (void)_registerForReachabilityChangeNotifications:(id)arg1 mode:(_Bool)arg2;
- (void)registerForRemoteAccessoryReachabilityNotiifications:(_Bool)arg1;
- (id)_discoveredAccessoriesForServer:(id)arg1;
- (id)_discoveredAccessoriesForServer:(id)arg1 linkType:(long long)arg2;
- (id)_primaryAccessoryForServer:(id)arg1;
- (id)_pairedAccessoriesForServer:(id)arg1;
- (id)_pairedAccessoriesForServer:(id)arg1 linkType:(long long)arg2;
- (void)auditNotifications;
- (void)_auditNotifications;
- (void)handleBackgroundTaskAgentJob:(id)arg1;
- (void)checkTimerTriggers;
- (void)notifyChangedCharacteristics:(id)arg1;
- (void)writeCharacteristicValues:(id)arg1 transactionId:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)regionStateUpdated:(int)arg1;
- (void)reachabilityChangedForAccessory:(id)arg1 reachable:(_Bool)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2;
- (id)removeName:(id)arg1;
- (id)addName:(id)arg1;
- (id)validateName:(id)arg1;
- (void)removeAllAccessoriesWithCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)reEvaluateTriggers;
- (id)userWithUUID:(id)arg1;
- (id)serviceGroupWithUUID:(id)arg1;
- (id)serviceGroupWithName:(id)arg1;
- (id)triggerWithUUID:(id)arg1;
- (id)triggerWithName:(id)arg1;
- (id)triggerOwnedActionSetWithUUID:(id)arg1;
- (id)actionSetWithUUID:(id)arg1;
- (id)actionSetWithName:(id)arg1;
- (id)zoneWithUUID:(id)arg1;
- (id)zoneWithName:(id)arg1;
- (id)accessoryWithUUID:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (void)sendConfigureBulletinNotification;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(_Bool)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(_Bool)arg2;
- (void)saveToCurrentAccountWithReason:(id)arg1;
- (void)_modifyAllRegistrationsForNotificationsInNotificationRegistry:(_Bool)arg1;
- (void)_handleModifyCharacteristicNotifications:(id)arg1;
- (void)auditUsersForNotifications:(id)arg1;
- (id)_populateCharacteristicsThatNeedNotificationsFromDictionary:(id)arg1 error:(id *)arg2;
- (void)_modifyNotificationsWithPayload:(id)arg1 enableNotification:(_Bool)arg2 withResidentDevice:(id)arg3;
- (void)_modifyNotificationsOnResidentWithPayload:(id)arg1 enableNotification:(_Bool)arg2;
- (void)_subscribeForHomeNotificationsOnDirectTransports:(_Bool)arg1;
- (void)_subscribeForNotificationFromRemoteGateway:(_Bool)arg1;
- (void)_subscribeForHomeNotificationsFromRemoteGateway:(_Bool)arg1;
- (void)subscribeForNotificationsFromRemoteGateway;
- (void)_modifyNotificationOnResident:(_Bool)arg1 ignoreDeviceUnlockRequirement:(_Bool)arg2 forCharacteristics:(id)arg3;
- (void)modifyNotificationOnResident:(_Bool)arg1 ignoreDeviceUnlockRequirement:(_Bool)arg2 forCharacteristics:(id)arg3;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 viaDevice:(id)arg4;
- (void)redispatchToResidentMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (void)addCompanionAsResidentUser:(id)arg1;
- (id)_characteristicNotificationPayloadsOnDirectTransports:(_Bool)arg1;
- (id)_characteristicNotificationPayloadsForRemoteGateway:(_Bool)arg1;
- (void)_handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(_Bool)arg2;
- (id)_pairedAccessoryWithIdentifier:(id)arg1;
- (_Bool)applyDeviceLockStatus:(id)arg1;
- (_Bool)isDeviceLocked;
- (void)invalidate;
- (void)configureWithRelayManager:(id)arg1;
- (_Bool)configure:(id)arg1;
- (_Bool)mergeOutgoingInvitations:(id)arg1 dataVersion:(long long)arg2 locallyAddedUsers:(id)arg3 locallyRemovedUsers:(id)arg4;
- (_Bool)_mergeResidentsMissingInCloud:(id)arg1 homeManager:(id)arg2;
- (_Bool)_doesResidentExistInMyCircleWithAddress:(id)arg1 homeManager:(id)arg2;
- (_Bool)mergeUsersWithExistingUsers:(id)arg1 remoteAdminUser:(id)arg2 homeManager:(id)arg3 dataVersion:(long long)arg4;
- (id)_createBuiltinActionSets;
- (void)createBuiltinActionSets;
- (id)createActionSetWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3;
- (_Bool)updateActionSetExecutionDates:(id)arg1;
- (_Bool)takeOwnershipOfBuiltinActionSets:(id)arg1;
- (id)filterBuiltinActionSets:(id)arg1;
- (void)computeBridgedAccessoriesForAllBridges;
- (void)fixupBridgeForBridgedAccessories:(id)arg1 potentialBridgeAccessories:(id)arg2;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)takeOwnershipOfAccessories:(id)arg1;
- (void)takeOwnershipOfNotificationRegistry:(id)arg1;
- (void)takeOwnershipOfTriggers:(id)arg1 triggersToReactivate:(id)arg2 dataVersion:(long long)arg3;
- (void)_migrateTrigger:(id)arg1 actionSetsInHome:(id)arg2 triggersToReactivate:(id)arg3;
- (void)fixupReplacementAccessories:(id)arg1 commonAccessories:(id)arg2 idsDataSync:(_Bool)arg3 dataVersion:(long long)arg4 locallyAdded:(id)arg5;
- (void)handleAppTermination:(id)arg1;
- (void)_startHomeNotificationDeregistrationTimer;
- (void)_disableNotificationsForClient:(id)arg1;
- (void)_cleanAddAccessoryOperations;
- (void)handleAccessoryReachabilityChangeNotification:(id)arg1;
- (void)_addPairedAccessories:(id)arg1;
- (void)addPairedAccessories:(id)arg1;
- (void)_deregisterPairedAccessory:(id)arg1;
- (void)_registerPairedAccessory:(id)arg1 btleTransport:(_Bool)arg2;
- (id)pairedAccessoryServerIdentifiers;
- (void)setPairedAccessories:(id)arg1;
- (id)_pairedAccessories;
- (id)pairedAccessories;
- (void)setAnyBTLEAccessoryReachable:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAnyBTLEAccessoryReachable) _Bool anyBTLEAccessoryReachable; // @synthesize anyBTLEAccessoryReachable=_anyBTLEAccessoryReachable;
- (id)dumpState;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithName:(id)arg1 uuid:(id)arg2 defaultRoomUUID:(id)arg3 owner:(id)arg4 homeManager:(id)arg5;
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (id)assistantObject;
- (id)url;
- (id)assistantUniqueIdentifier;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

