//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCClientZone.h>

@class BRCAppLibrary, BRCPrivateAppLibrary, BRCPrivateServerZone, BRCProblemReport, BRCServerZoneHealthState, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCPrivateClientZone : BRCClientZone
{
    NSMutableArray *_syncBarriers;
    BRCServerZoneHealthState *_zoneHealthState;
    BRCProblemReport *_problemReport;
    NSMutableArray *_faultsLiveBarriers;
}

@property(readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState; // @synthesize zoneHealthState=_zoneHealthState;
- (void).cxx_destruct;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (_Bool)dumpActivityToContext:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool isDocumentScopePublic;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (_Bool)removeSyncDownForAliasData:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (_Bool)itemID:(id)arg1 isStrictChildOfItemID:(id)arg2;
- (_Bool)existsByParentID:(id)arg1 andName:(id)arg2;
- (id)faultByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)reservedItemByParentID:(id)arg1 andDisplayName:(id)arg2;
- (id)aliasByUnsaltedBookmarkData:(id)arg1;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)serverItemByParentID:(id)arg1 andName:(id)arg2;
- (void)fixupItemsOnInitialZoneCreation;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(CDUnknownBlockType)arg2;
- (_Bool)recomputeAppSyncBlockState;
- (_Bool)checkIfAppSyncShouldBeEnabled;
@property(readonly, nonatomic) _Bool zoneHealthNeedsSyncUp;
- (void)zoneHealthWasReset;
- (void)syncedDownZoneHealthState:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (void)clearProblemReport;
- (void)updateWithPlist:(id)arg1;
- (id)plist;
- (void)resume;
- (void)setServerZone:(id)arg1;
- (_Bool)dumpTablesToContext:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BRCPrivateAppLibrary *defaultPrivateAppLibrary;
@property(readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
- (id)asPrivateClientZone;
@property(readonly, nonatomic) _Bool isPrivateZone;

// Remaining properties
@property(readonly, nonatomic) BRCAppLibrary *defaultAppLibrary; // @dynamic defaultAppLibrary;
@property(readonly, nonatomic) _Bool isSharedZone; // @dynamic isSharedZone;

@end

