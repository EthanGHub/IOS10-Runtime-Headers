//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface AVLoadedTimeRangesView : UIView
{
    NSArray *_loadedTimeRanges;
    struct CGRect _clipRect;
    UIColor *_fillColor;
}

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) struct CGRect clipRect;
@property(retain, nonatomic) NSArray *loadedTimeRanges;
- (id)initWithFrame:(struct CGRect)arg1;

@end
