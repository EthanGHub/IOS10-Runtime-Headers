//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSObject, NSString, UIImage, UILabel, UISwitch;
@protocol MSCLSettingsTableViewCellDelegate, NSCopying;

@interface MSCLSettingsTableViewCell : UITableViewCell
{
    _Bool _disabled;
    struct CGSize _imageSize;
    _Bool _titleUsesTintColor;
    NSObject<NSCopying> *_value;
    UILabel *_valueLabel;
    UISwitch *_valueSwitch;
    long long _valueType;
    id <MSCLSettingsTableViewCellDelegate> _changeDelegate;
}

@property(nonatomic) __weak id <MSCLSettingsTableViewCellDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property(nonatomic) long long valueType; // @synthesize valueType=_valueType;
@property(copy, nonatomic) NSObject<NSCopying> *value; // @synthesize value=_value;
@property(nonatomic) _Bool titleUsesTintColor; // @synthesize titleUsesTintColor=_titleUsesTintColor;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (void)_reloadTitleTextColor;
- (void)_valueChanged:(id)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UISwitch *switchControl;
@property(retain, nonatomic) UIImage *image;

@end

