//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError;

@protocol ADSession_RPC
- (void)_remote_policyEngineDidIdleDisable;
- (void)_remote_heartbeatTokenDidChange:(NSData *)arg1 expirationDate:(double)arg2 error:(NSError *)arg3;
@end
