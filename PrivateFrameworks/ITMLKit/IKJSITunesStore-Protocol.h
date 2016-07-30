//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSString;

@protocol IKJSITunesStore <JSExport>
@property(readonly, nonatomic, getter=isManagedAppleID) _Bool managedAppleID;
@property(retain, nonatomic) id cookie;
@property(retain, nonatomic) NSString *cookieURL;
@property(retain, nonatomic) NSString *storefront;
@property(readonly, nonatomic) NSString *networkConnectionType;
@property(readonly, nonatomic) NSString *userAgent;
@property(readonly, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic) NSString *DSID;
- (void)updateServiceEligibility:(NSDictionary *)arg1;
- (void)signOut;
- (void)authenticate:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)evaluateScripts:(NSArray *)arg1:(JSValue *)arg2;
- (void)loadStoreContent:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getServiceEligibility:(NSDictionary *)arg1:(JSValue *)arg2;
- (NSDictionary *)eligibilityForService:(NSDictionary *)arg1;
- (void)clearCookies;
- (void)flushUnreportedEvents;
- (void)recordEvent:(NSString *)arg1:(NSDictionary *)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)invalidateBag;
- (JSValue *)getBag;
@end
