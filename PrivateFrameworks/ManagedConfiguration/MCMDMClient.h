//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface MCMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)processUserRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (int)accessRights;
- (_Bool)isActivationLockAllowedWhileSupervised;
- (_Bool)isManagedByMDM;
- (void)uprootMDM;
- (void)migrateMDMWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)simulatePush;
- (void)retryNotNowResponse;
- (void)scheduleTokenUpdateIfNecessary;
- (void)scheduleTokenUpdate;
- (void)notifyNewConfiguration;
- (_Bool)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 signMessage:(_Bool)arg4 outError:(id *)arg5;
- (_Bool)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 useDevelopmentAPNS:(_Bool)arg4 signMessage:(_Bool)arg5 outError:(id *)arg6;
- (void)_createAndStartMDMXPCConnection;
- (void)dealloc;

@end

