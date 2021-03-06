//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimeZone;

@interface _HKBehavior : NSObject
{
    _Bool _isDeviceSupported;
    _Bool _isAppleInternalInstall;
    _Bool _isCoachingEventLoggingEnabled;
    _Bool _isAppleWatch;
    _Bool _isCompanionCapable;
    _Bool _hasTelephonyCapability;
    _Bool _requestsRemoteAuthorization;
    _Bool _canCreateSources;
    _Bool _shouldPruneOldSamples;
}

+ (id)_simulatorDefaultName;
+ (id)_simulatorSettings;
+ (void)disableForceBuddy;
+ (void)disableSkipBuddy;
+ (_Bool)_hasCompletedBuddy;
+ (_Bool)_shouldShowBuddy;
+ (_Bool)_isForceBuddyEnabled;
+ (_Bool)_isSkipBuddyEnabled;
+ (_Bool)_hasTelephonyCapability;
+ (_Bool)_isAppleInternalInstall;
+ (_Bool)_isDeviceSupported;
+ (id)currentOSVersion;
+ (id)currentOSBuild;
+ (id)currentDeviceProductType;
+ (id)currentDeviceClass;
+ (id)currentDeviceManufacturer;
+ (id)currentDeviceName;
+ (id)currentDeviceDisplayName;
+ (_Bool)hasTelephonyCapability;
+ (_Bool)hasCompletedBuddy;
+ (_Bool)shouldShowBuddy;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)isCompanionCapable;
+ (_Bool)isDeviceSupported;
+ (_Bool)isRunningStoreDemoMode;
+ (void)resetSharedBehavior;
+ (_Bool)hasPairedWatch;
+ (int)protocolVersionForNRDevice:(id)arg1;
+ (_Bool)allPairedWatchesMeetMinimumVersion:(int)arg1;
+ (void)setSharedBehavior:(id)arg1;
+ (id)sharedBehavior;
+ (id)behaviorQueue;
@property(readonly, nonatomic) _Bool shouldPruneOldSamples; // @synthesize shouldPruneOldSamples=_shouldPruneOldSamples;
@property(readonly, nonatomic) _Bool canCreateSources; // @synthesize canCreateSources=_canCreateSources;
@property(readonly, nonatomic) _Bool requestsRemoteAuthorization; // @synthesize requestsRemoteAuthorization=_requestsRemoteAuthorization;
@property(readonly, nonatomic) _Bool hasTelephonyCapability; // @synthesize hasTelephonyCapability=_hasTelephonyCapability;
@property(readonly, nonatomic) _Bool isCompanionCapable; // @synthesize isCompanionCapable=_isCompanionCapable;
@property(readonly, nonatomic) _Bool isAppleWatch; // @synthesize isAppleWatch=_isAppleWatch;
@property(readonly, nonatomic) _Bool isCoachingEventLoggingEnabled; // @synthesize isCoachingEventLoggingEnabled=_isCoachingEventLoggingEnabled;
@property(readonly, nonatomic) _Bool isAppleInternalInstall; // @synthesize isAppleInternalInstall=_isAppleInternalInstall;
@property(readonly, nonatomic) _Bool isDeviceSupported; // @synthesize isDeviceSupported=_isDeviceSupported;
@property(readonly, copy, nonatomic) NSString *hostWriteAuthorizationUsageDescription;
@property(readonly, copy, nonatomic) NSString *hostReadAuthorizationUsageDescription;
@property(readonly, nonatomic) unsigned long long currentDiskSpaceAvailable;
@property(readonly, nonatomic) unsigned long long totalDiskCapacity;
@property(readonly, nonatomic) NSDictionary *currentDiskUsage;
@property(readonly, copy, nonatomic) NSTimeZone *localTimeZone;
@property(readonly, copy, nonatomic) NSString *currentOSVersion;
@property(readonly, copy, nonatomic) NSString *currentOSBuild;
@property(readonly, copy, nonatomic) NSString *currentDeviceClass;
@property(readonly, copy, nonatomic) NSString *currentDeviceProductType;
@property(readonly, copy, nonatomic) NSString *currentInternalDeviceModel;
@property(readonly, copy, nonatomic) NSString *currentDeviceManufacturer;
@property(readonly, copy, nonatomic) NSString *currentDeviceName;
@property(readonly, copy, nonatomic) NSString *currentDeviceDisplayName;
- (id)init;

@end

