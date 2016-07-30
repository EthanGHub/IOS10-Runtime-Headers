//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

#import <SpringBoardUIServices/SBUIPasscodeEntryFieldDelegate-Protocol.h>
#import <SpringBoardUIServices/SBUIPasscodeLockNumberPadDelegate-Protocol.h>

@class NSString, SBUIPasscodeLockNumberPad, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeEntryFieldDelegate>
{
    UILabel *_statusTitleView;
    UILabel *_statusSubtitleView;
    UIView *_statusBackgroundView;
    SBUIPasscodeLockNumberPad *_numberPad;
    UIView *_topToStatusFieldOrEntryFieldFiller;
    UIView *_entryFieldToNumberPadFiller;
    UIView *_leftToNumberPadFiller;
    UIView *_rightToNumberPadFiller;
    UIView *_bottomToNumberPadFiller;
    NSString *_lastCharacterBeforeBackspace;
    _Bool _undoInputOnTouchCancellation;
    _Bool _useLightStyle;
    _Bool _hasPerformedLayoutOnce;
}

@property(retain, nonatomic) UILabel *statusSubtitleView; // @synthesize statusSubtitleView=_statusSubtitleView;
@property(retain, nonatomic) UILabel *statusTitleView; // @synthesize statusTitleView=_statusTitleView;
@property(retain, nonatomic) NSString *lastCharacterBeforeBackspace; // @synthesize lastCharacterBeforeBackspace=_lastCharacterBeforeBackspace;
@property(nonatomic, getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:) _Bool undoInputOnTouchCancellation; // @synthesize undoInputOnTouchCancellation=_undoInputOnTouchCancellation;
- (void).cxx_destruct;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg1;
- (void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2;
- (_Bool)_usesLightStyle;
- (id)_numericEntryFieldIfExists;
- (double)_numberPadOffsetFromTopOfScreen;
- (void)_noteKeyUp:(id)arg1;
- (void)_noteBackspaceHit;
- (void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(_Bool)arg2;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_toggleForStatusField;
- (void)_layoutStatusView;
- (id)_newStatusSubtitleView;
- (id)_newStatusTitleView;
- (double)_statusTitleWidth;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (id)_statusSubtitleViewTitleFont;
- (id)_statusTitleViewTitleFont;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (void)_setHasInput:(_Bool)arg1;
- (_Bool)_includesStatusView;
- (id)_newEntryField;
- (id)_numberPad;
- (id)_statusBackgroundView;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (void)_luminanceBoostDidChange;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (id)passcode;
- (void)layoutSubviews;
- (double)backgroundAlpha;
- (void)dealloc;
- (id)initWithLightStyle:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
