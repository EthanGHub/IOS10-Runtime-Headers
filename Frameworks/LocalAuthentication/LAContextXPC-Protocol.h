//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LocalAuthentication/LAContextClientEvaluationProt-Protocol.h>
#import <LocalAuthentication/LAContextEventFeedbackProt-Protocol.h>
#import <LocalAuthentication/LAContextExternalizationProt-Protocol.h>
#import <LocalAuthentication/LAContextPropertiesProt-Protocol.h>

@class NSData;

@protocol LAContextXPC <LAContextExternalizationProt, LAContextPropertiesProt, LAContextClientEvaluationProt, LAContextEventFeedbackProt>
- (void)setCredential:(NSData *)arg1 type:(long long)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)isCredentialSet:(long long)arg1 reply:(void (^)(_Bool, NSError *))arg2;
@end

