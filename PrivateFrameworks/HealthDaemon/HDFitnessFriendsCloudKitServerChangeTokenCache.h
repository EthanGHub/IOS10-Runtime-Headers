//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HDFitnessFriendsCloudKitServerChangeTokenCache : NSObject
{
    NSMutableDictionary *_databaseChangeTokensByDatabaseScope;
    NSMutableDictionary *_zoneChangeTokensByZoneID;
}

- (void).cxx_destruct;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (void)setServerChangeToken:(id)arg1 forDatabase:(id)arg2;
- (id)serverChangeTokenForDatabase:(id)arg1;
- (id)init;

@end
