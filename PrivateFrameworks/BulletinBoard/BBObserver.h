//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBAssertionDelegate-Protocol.h>

@class BBObserverServerProxy, NSMapTable, NSMutableDictionary, NSString;
@protocol BBObserverDelegate, OS_dispatch_queue;

@interface BBObserver : NSObject <BBAssertionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    struct {
        unsigned int addBulletinPlayLightsAndSirens:1;
        unsigned int addBulletin:1;
        unsigned int modifyBulletin:1;
        unsigned int modifyBulletinDEPRECATED:1;
        unsigned int removeBulletin:1;
        unsigned int removeBulletinFinal:1;
        unsigned int sectionOrderRule:1;
        unsigned int sectionOrder:1;
        unsigned int sectionInfo:1;
        unsigned int sectionParameters:1;
        unsigned int removeSection:1;
        unsigned int fetchImage:1;
        unsigned int fetchSize:1;
        unsigned int sizeConstraints:1;
        unsigned int multiSizeConstraints:1;
        unsigned int imageForThumbData:1;
        unsigned int sizeForThumbSize:1;
        unsigned int purgeReferences:1;
        unsigned int alertBehaviorOverrides:1;
        unsigned int alertBehaviorOverrideState:1;
        unsigned int invalidatedBulletinIDs:1;
        unsigned int serverConnectionChanged:1;
        unsigned int serverReceivedResponse:1;
    } _delegateFlags;
    NSMutableDictionary *_sectionParameters;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    NSMutableDictionary *_attachmentInfoByAttachmentUUIDByBulletinID;
    BBObserverServerProxy *_serverProxy;
    _Bool _isGateway;
    id <BBObserverDelegate> _delegate;
    unsigned long long _observerFeed;
    NSString *_gatewayName;
    unsigned long long _gatewayPriority;
}

+ (void)initialize;
+ (id)observerGlobalQueue;
@property(readonly, nonatomic) unsigned long long gatewayPriority; // @synthesize gatewayPriority=_gatewayPriority;
@property(readonly, copy, nonatomic) NSString *gatewayName; // @synthesize gatewayName=_gatewayName;
@property(nonatomic) unsigned long long observerFeed; // @synthesize observerFeed=_observerFeed;
@property(nonatomic) __weak id <BBObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)noteServerReceivedResponseForBulletin:(id)arg1;
- (void)noteAlertBehaviorOverrideStateChanged:(id)arg1;
- (void)noteAlertBehaviorOverridesChanged:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)_queue_updateRemoveBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_queue_updateModifyBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_queue_updateAddBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_queue_updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)_queue_serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)serverProxy:(id)arg1 connectionStateDidChange:(_Bool)arg2;
- (void)_queue_registerBulletin:(id)arg1 withTransactionID:(unsigned long long)arg2;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned long long)arg2;
- (id)_queue_attachmentInfoForBulletin:(id)arg1 create:(_Bool)arg2;
- (void)_queue_setAttachmentSize:(struct CGSize)arg1 forKey:(id)arg2 forBulletin:(id)arg3;
- (void)_queue_noteAttachmentSizesFetchedForBulletin:(id)arg1;
- (_Bool)_queue_attachmentSizesFetchedForBulletin:(id)arg1;
- (void)_queue_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletin:(id)arg3;
- (void)_queue_noteAttachmentImagesFetchedForBulletin:(id)arg1;
- (_Bool)_queue_attachmentImagesFetchedForBulletin:(id)arg1;
- (void)_queue_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reasonableConstraintsForAttachmentType:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndProcessImageForBulletin:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_attachmentInfoForBulletin:(id)arg1;
- (struct CGSize)attachmentSizeForKey:(id)arg1 forBulletin:(id)arg2;
- (id)attachmentImageForKey:(id)arg1 forBulletin:(id)arg2;
- (void)getParametersForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)parametersForSectionID:(id)arg1;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeed:(unsigned long long)arg3;
- (void)removeBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletins:(id)arg1 inSection:(id)arg2;
- (void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3;
- (void)clearSection:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getBulletinsPublishedAfterDate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getBulletinsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPrimaryAttachmentDataForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPrivilegedSenderTypesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getAlertBehaviorOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)requestNoticesBulletinsForSectionID:(id)arg1;
- (void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getSectionInfoForActiveSectionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)getSectionOrderRuleWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isValid;
@property(readonly, copy) NSString *description;
- (void)_queue_invalidate;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithCalloutQueue:(id)arg1 gatewayName:(id)arg2 gatewayPriority:(unsigned long long)arg3 isGateway:(_Bool)arg4;
- (id)initWithQueue:(id)arg1 asGateway:(id)arg2 priority:(unsigned long long)arg3;
- (id)initWithQueue:(id)arg1 forGateway:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
