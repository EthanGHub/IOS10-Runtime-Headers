//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSString, SFAutoUnlockDevice;
@protocol SFUnlockClientProtocol;

@protocol SFUnlockProtocol <NSObject>

@optional
- (void)unlockStateForDevice:(NSString *)arg1 completionHandler:(void (^)(SFUnlockState *, NSError *))arg2;
- (void)establishStashBagWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)unlockEnabledWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)disableUnlockWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enableUnlockWithDevice:(NSString *)arg1 fromKey:(_Bool)arg2 withPasscode:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)removeAllFakeDevices;
- (void)removeFakeAutoUnlockDevice:(NSString *)arg1;
- (void)addFakeAutoUnlockDevice:(SFAutoUnlockDevice *)arg1;
- (void)cancelFakeAutoUnlock;
- (void)attemptFakeAutoUnlockWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)disableFakeAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enableFakeAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)fakeEligibleAutoUnlockDevicesWithCompletionHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)autoUnlockStateWithCompletionHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)cancelAutoUnlock;
- (void)attemptAutoUnlockWithClientProxy:(id <SFUnlockClientProtocol>)arg1;
- (void)disableAutoUnlockForDevice:(SFAutoUnlockDevice *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enableAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)enableAutoUnlockWithDevice:(SFAutoUnlockDevice *)arg1 passcode:(NSString *)arg2 clientProxy:(id <SFUnlockClientProtocol>)arg3;
- (void)eligibleAutoUnlockDevicesWithCompletionHandler:(void (^)(NSSet *, NSError *))arg1;
@end
