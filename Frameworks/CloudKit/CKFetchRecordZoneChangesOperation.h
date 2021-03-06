//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation
{
    _Bool _fetchAllChanges;
    _Bool _shouldFetchAssetContents;
    NSArray *_recordZoneIDs;
    NSDictionary *_optionsByRecordZoneID;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;
    CDUnknownBlockType _recordZoneFetchCompletionBlock;
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;
    NSMutableDictionary *_statusByZoneID;
    NSMutableDictionary *_perItemErrors;
}

@property(retain, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(copy, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock; // @synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(copy, nonatomic) NSDictionary *optionsByRecordZoneID; // @synthesize optionsByRecordZoneID=_optionsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (void).cxx_destruct;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (long long)changeTypesFromSetCallbacks;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)recordZoneChangesStatusByZoneID;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;

@end

