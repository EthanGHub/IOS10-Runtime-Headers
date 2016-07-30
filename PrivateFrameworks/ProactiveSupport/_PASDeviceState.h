//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/_PASDeviceStateProtocol-Protocol.h>

@class NSString;

@interface _PASDeviceState : NSObject <_PASDeviceStateProtocol>
{
}

+ (id)currentOsBuild;
+ (_Bool)isConstrainedDevice;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(CDUnknownBlockType)arg1;
+ (void)blockUntilFirstUnlock;
+ (_Bool)isDeviceFormattedForProtection;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;
+ (id)registerForLockStateChangeNotifications:(CDUnknownBlockType)arg1;
+ (int)lockState;
+ (_Bool)isUnlocked;
+ (_Bool)isClassCLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
