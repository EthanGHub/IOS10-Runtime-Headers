//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OITSUProgress.h>

@class NSObject, OITSUProgressContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressContextProgress : OITSUProgress
{
    OITSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    _Bool hasAddedProgressContextObserver;
}

- (void)p_progressDidChange:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (_Bool)isIndeterminate;
- (double)maxValue;
- (double)value;
- (void)dealloc;
- (id)init;
- (id)initWithProgressContext:(id)arg1;

@end
