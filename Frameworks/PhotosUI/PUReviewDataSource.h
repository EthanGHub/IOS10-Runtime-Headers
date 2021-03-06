//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableDictionary;

@interface PUReviewDataSource : NSObject
{
    NSHashTable *__observers;
    NSMutableArray *__assetIdentifiers;
    NSMutableDictionary *__assetsByIdentifier;
    NSMutableDictionary *__representativeAssetsByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetIdentifiersByBurstIdentifier;
    NSMutableDictionary *__enqueuedBurstAssetsByAssetIdentifier;
    long long __nestedPerformChanges;
    long long __pendingChangeNotifications;
}

@property(nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications; // @synthesize _pendingChangeNotifications=__pendingChangeNotifications;
@property(nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges; // @synthesize _nestedPerformChanges=__nestedPerformChanges;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetsByAssetIdentifier; // @synthesize _enqueuedBurstAssetsByAssetIdentifier=__enqueuedBurstAssetsByAssetIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetIdentifiersByBurstIdentifier; // @synthesize _enqueuedBurstAssetIdentifiersByBurstIdentifier=__enqueuedBurstAssetIdentifiersByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier; // @synthesize _representativeAssetsByBurstIdentifier=__representativeAssetsByBurstIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *_assetsByIdentifier; // @synthesize _assetsByIdentifier=__assetsByIdentifier;
@property(readonly, nonatomic) NSMutableArray *_assetIdentifiers; // @synthesize _assetIdentifiers=__assetIdentifiers;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
- (void).cxx_destruct;
- (id)description;
- (id)orderedIdentifiers;
- (id)assetsByIdentifier;
- (void)_notifyObserversOfDataSourceChange;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)processPendingBurstAssets;
- (void)enqueuePendingBurstAsset:(id)arg1;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)arg1;
- (void)removeAssetWithIdentifier:(id)arg1;
- (void)removeAllAssets;
- (_Bool)_removeAssetWithIdentifier:(id)arg1;
- (void)replaceAsset:(id)arg1;
- (void)insertAssets:(id)arg1;
- (void)insertAsset:(id)arg1;
- (void)_insertAssetWithoutNotifying:(id)arg1;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)arg1;
- (id)existingAssetForIdentifier:(id)arg1;
- (id)_initWithAssetIdentifiers:(id)arg1 assetsByIdentifier:(id)arg2 representativeAssetsByBurstIdentifier:(id)arg3;
- (id)init;

@end

