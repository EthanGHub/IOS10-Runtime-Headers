//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKAssertion : NSObject
{
    _Bool _invalidateWhenBackgrounded;
    NSString *_reason;
    unsigned long long _type;
    long long _state;
    CDUnknownBlockType _invalidationHandler;
    NSString *_identifier;
}

+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)assertionExistsOfType:(unsigned long long)arg1;
+ (void)preheatConnection;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) _Bool invalidateWhenBackgrounded; // @synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;

@end

