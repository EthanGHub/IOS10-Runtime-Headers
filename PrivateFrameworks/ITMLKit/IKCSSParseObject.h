//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IKCSSParseObject : NSObject
{
    NSArray *_cssValue;
    long long _type;
}

+ (id)stringifyList:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *cssValue; // @synthesize cssValue=_cssValue;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

