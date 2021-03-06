//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface BRAsset : NSObject
{
    _Bool _isNull;
    long long _type;
    NSDictionary *_parameters;
}

+ (id)nullAsset;
@property(readonly, nonatomic) _Bool isNull; // @synthesize isNull=_isNull;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id propertyList;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(_Bool)arg3;
- (id)init;

@end

