//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, UIActivityIndicatorView, UILabel;

@interface PLSyncProgressView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_infoLabel;
    NSNumberFormatter *_countFormatter;
    int _style;
    int _progressType;
    unsigned long long _currentCount;
    unsigned long long _totalCount;
}

@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) unsigned long long currentCount; // @synthesize currentCount=_currentCount;
@property(readonly, nonatomic) int progressType; // @synthesize progressType=_progressType;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (id)_progressDescription;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setCurrentCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 progressType:(int)arg3;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;

@end

