//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UILabel;

@interface PricePopoverBar : UIView
{
    UILabel *_priceLabel;
    UILabel *_percentChangeLabel;
    UIImage *_backgroundImage;
    UIImageView *_priceChangeSignView;
    UIImageView *_percentChangeSignView;
    UIColor *_imageMaskColor;
}

@property(retain, nonatomic) UIColor *imageMaskColor; // @synthesize imageMaskColor=_imageMaskColor;
- (void).cxx_destruct;
- (void)setChangeImage:(id)arg1;
- (void)setPercentChange:(id)arg1;
- (void)setPriceString:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (id)initWithBackgroundImage:(id)arg1;

@end

