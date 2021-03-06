//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreTelephony/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSSet, NSString;

@interface CTCallCenter : NSObject <CXCallObserverDelegate>
{
    struct queue _queue;
    NSSet *_currentCalls;
    CDUnknownBlockType _callEventHandler;
    CXCallObserver *_callKitObserver;
}

@property CXCallObserver *callKitObserver; // @synthesize callKitObserver=_callKitObserver;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;
@property(retain) NSSet *currentCalls; // @dynamic currentCalls;
- (_Bool)calculateCallStateChanges:(id)arg1;
- (_Bool)getCurrentCallSetFromServer:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType callEventHandler;
- (void)dealloc;
- (void)handleCallStatusChange:(id)arg1;
- (void)initialize;
- (id)init;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

