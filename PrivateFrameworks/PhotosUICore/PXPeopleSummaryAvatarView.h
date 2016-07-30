//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSmartScaleView.h>

@class UIImageView;
@protocol PXFaceCollection;

@interface PXPeopleSummaryAvatarView : PXSmartScaleView
{
    UIImageView *_imageView;
    id <PXFaceCollection> _faceCollection;
}

@property(retain, nonatomic) id <PXFaceCollection> faceCollection; // @synthesize faceCollection=_faceCollection;
@property(retain) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)updateImage;
- (void)viewScaleDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
