//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDNanoUserDefaultsSyncEntity.h>

#import <HealthDaemon/HDNanoSyncEntity-Protocol.h>

@class NSString;

@interface HDUnprotectedNanoUserDefaultsSyncEntity : HDNanoUserDefaultsSyncEntity <HDNanoSyncEntity>
{
}

+ (id)_didReceiveKeysAndValuesNotificationName;
+ (long long)syncEntityType;
+ (long long)category;
+ (_Bool)supportsSpeculativeNanoSyncChanges;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (int)nanoSyncObjectType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
