//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSConditionLock;

__attribute__((visibility("hidden")))
@interface _SCRCThreadTask : NSObject
{
    id _target;
    SEL _selector;
    unsigned int _count;
    NSConditionLock *_waitLock;
    unsigned int _mask;
}

+ (id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void)fire;
- (void)setWaitLock:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;

@end

