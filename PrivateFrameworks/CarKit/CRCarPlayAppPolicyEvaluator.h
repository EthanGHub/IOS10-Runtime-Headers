//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRCarPlayAppBlacklist;

@interface CRCarPlayAppPolicyEvaluator : NSObject
{
    _Bool _geoSupported;
    CRCarPlayAppBlacklist *_blacklist;
}

@property(retain, nonatomic) CRCarPlayAppBlacklist *blacklist; // @synthesize blacklist=_blacklist;
@property(nonatomic, getter=isGeoSupported) _Bool geoSupported; // @synthesize geoSupported=_geoSupported;
- (void).cxx_destruct;
- (id)effectivePolicyForAppDeclaration:(id)arg1;
- (_Bool)_isValidMessagingApp:(id)arg1;
- (_Bool)_connectedProtocolsIntersectsAppProtocols:(id)arg1;
- (id)init;

@end

