//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (TSUAdditions)
+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionaryIfPossible:(id)arg1;
- (void)removeObjectsWithoutKeys:(id)arg1;
- (id)objectForKey:(id)arg1 withDefaultOfClass:(Class)arg2;
- (id)objectForKey:(id)arg1 withDefaultUsingBlock:(CDUnknownBlockType)arg2;
@end
