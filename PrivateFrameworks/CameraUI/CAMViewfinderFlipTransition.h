//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMPreviewView, CAMSnapshotView;

@interface CAMViewfinderFlipTransition : NSObject
{
    CAMPreviewView *__previewView;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
}

@property(retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // @synthesize _targetSnapshotView=__targetSnapshotView;
@property(retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // @synthesize _backSnapshotView=__backSnapshotView;
@property(retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // @synthesize _frontSnapshotView=__frontSnapshotView;
@property(readonly, nonatomic) CAMPreviewView *_previewView; // @synthesize _previewView=__previewView;
- (void).cxx_destruct;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performFlipTransitionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanupFromFlipTransition;
- (id)initWithPreviewView:(id)arg1;

@end
