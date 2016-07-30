//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSArray, NSString;

@interface HMDCharacteristicEnableNotificationLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _enabled;
    _Bool _isClient;
    NSArray *_characteristics;
    unsigned long long _transportType;
    HMDAccessory *_accessory;
}

+ (id)logEventEnableNotification:(_Bool)arg1 characteristics:(id)arg2 accessory:(id)arg3 isClient:(_Bool)arg4 transportType:(unsigned long long)arg5;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) _Bool isClient; // @synthesize isClient=_isClient;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initWithEnabled:(_Bool)arg1 characteristics:(id)arg2 accessory:(id)arg3 isClient:(_Bool)arg4 transportType:(unsigned long long)arg5;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
