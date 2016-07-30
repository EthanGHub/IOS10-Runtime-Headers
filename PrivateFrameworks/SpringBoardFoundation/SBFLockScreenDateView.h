//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, UIColor, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView
{
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleView *_dateSubtitleView;
    SBFLockScreenDateSubtitleView *_customSubtitleView;
    _Bool _useDashBoardValues;
    NSDate *_date;
    UIColor *_overrideTextColor;
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
}

+ (double)defaultHeight;
@property(retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView; // @synthesize customSubtitleView=_customSubtitleView;
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_overrideTextColor;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
@property(readonly, nonatomic) double subtitleBaselineOffsetFromOrigin;
@property(readonly, nonatomic) double timeBaselineOffsetFromOrigin;
- (void)_layoutLegacyDateLabel;
- (void)_layoutLegacyTimeLabel;
- (id)_legacyTimeFont;
- (id)_timeFont;
- (void)_layoutSubtitleViews;
- (void)_layoutTimeLabel;
- (void)_layoutDateView;
- (void)layoutSubviews;
- (void)_updateLabelAlpha;
- (void)_setSubtitleAlpha:(double)arg1;
- (void)_updateLabels;
- (id)_timeLabel;
@property(readonly, nonatomic) struct CGRect presentationExtent;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(_Bool)arg2;
@property(readonly, nonatomic) double contentAlpha;
- (void)updateFormat;
@property(nonatomic, getter=isSubtitleHidden) _Bool subtitleHidden;
- (id)initForDashBoard:(_Bool)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
