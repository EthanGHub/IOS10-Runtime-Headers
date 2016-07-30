//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SUScriptDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_cachedNestedScriptDictionaries;
    NSDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (_Bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (_Bool)isKeyExcludedFromWebScript:(const char *)arg1;
@property(readonly) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)attributeKeys;
- (id)stringRepresentation;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
