//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class BSMachPortSendRight, NSError;

@protocol SBSRemoteAlertClientHandle <NSObject>
- (void)queue_noteInvalidWithError:(NSError *)arg1;
- (void)queue_setActive:(_Bool)arg1;
- (BSMachPortSendRight *)queue_token;
@end

