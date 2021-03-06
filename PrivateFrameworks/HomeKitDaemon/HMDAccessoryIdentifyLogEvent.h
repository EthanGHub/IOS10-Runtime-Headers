//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAccessory, NSString;

@interface HMDAccessoryIdentifyLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    _Bool _isClient;
    unsigned long long _transportType;
    HMDAccessory *_accessory;
}

+ (id)logEventIdentifyAccessory:(id)arg1 isClient:(_Bool)arg2 transportType:(unsigned long long)arg3;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) _Bool isClient; // @synthesize isClient=_isClient;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 isClient:(_Bool)arg2 transportType:(unsigned long long)arg3;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

