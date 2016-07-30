//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ControlCenterUI/CCUIControlCenterObserver-Protocol.h>

@class BSTimer, CCUIControlCenterLabel, CCUIControlCenterStatusUpdate, NSMutableArray, NSMutableDictionary, NSString;
@protocol CCUIControlCenterStatusViewDelegate;

@interface CCUIControlCenterStatusView : UIView <CCUIControlCenterObserver>
{
    CCUIControlCenterLabel *_statusLabel;
    CCUIControlCenterLabel *_statusLabel2;
    int _statusState;
    NSMutableDictionary *_statusByReason;
    NSMutableArray *_statusReasonQueue;
    CCUIControlCenterStatusUpdate *_activeStatus;
    BSTimer *_statusTimer;
    id <CCUIControlCenterStatusViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CCUIControlCenterStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (long long)_layoutStyle;
- (id)viewForFirstBaselineLayout;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_rescindStatusUpdate:(id)arg1;
- (void)presentStatusUpdate:(id)arg1;
- (void)_resetLabelState;
- (void)_animateNextStatus;
- (void)_animateWithDuration:(double)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3;
- (void)_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (void)_setStatusState:(int)arg1;
- (id)_getNextStatusString;
- (void)_restartTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_evaluateStatusStateForNewStatus:(id)arg1;
- (id)_peekNextStatus;
- (id)_popNextStatus;
- (_Bool)_hasPendingStatus;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
