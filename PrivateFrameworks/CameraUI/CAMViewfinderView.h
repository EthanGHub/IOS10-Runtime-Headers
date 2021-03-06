//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMBottomBar, CAMBurstIndicatorView, CAMElapsedTimeView, CAMFlashBadge, CAMFlipButton, CAMFocusLockBadge, CAMFramerateIndicatorView, CAMHDRBadge, CAMLivePhotoBadge, CAMPanoramaView, CAMPreviewContainerMaskingView, CAMPreviewContainerView, CAMPreviewView, CAMShutterIndicatorView, CAMTimerIndicatorView, CAMTopBar, CAMViewfinderFlipTransition, CAMViewfinderOpenAndCloseTransition, CAMZoomSlider, CUShutterButton;
@protocol CAMControlVisibilityDelegate;

@interface CAMViewfinderView : UIView
{
    _Bool _automaticallyAdjustsTopBarOrientation;
    long long _layoutStyle;
    id <CAMControlVisibilityDelegate> _visibilityDelegate;
    CAMPreviewView *_previewView;
    CAMTopBar *_topBar;
    CAMBottomBar *_bottomBar;
    CUShutterButton *_shutterButton;
    CAMFlipButton *_flipButton;
    CAMFlashBadge *_flashBadge;
    CAMHDRBadge *_HDRBadge;
    CAMFocusLockBadge *_focusAndExposureLockBadge;
    CAMLivePhotoBadge *_livePhotoBadge;
    CAMShutterIndicatorView *_shutterIndicatorView;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMFramerateIndicatorView *_framerateIndicatorView;
    CAMBurstIndicatorView *_burstIndicatorView;
    CAMTimerIndicatorView *_timerIndicatorView;
    CAMPanoramaView *_panoramaView;
    long long _previewViewOrientation;
    CAMZoomSlider *_zoomSlider;
    long long _desiredAspectRatio;
    long long _maskingAspectRatio;
    long long _orientation;
    CAMPreviewContainerMaskingView *__previewContainerMaskingView;
    CAMPreviewContainerView *__previewContainerView;
    CAMViewfinderOpenAndCloseTransition *__openAndCloseTransition;
    CAMViewfinderFlipTransition *__flipTransition;
}

+ (Class)layerClass;
@property(retain, nonatomic, setter=_setFlipTransition:) CAMViewfinderFlipTransition *_flipTransition; // @synthesize _flipTransition=__flipTransition;
@property(retain, nonatomic, setter=_setOpenAndCloseTransition:) CAMViewfinderOpenAndCloseTransition *_openAndCloseTransition; // @synthesize _openAndCloseTransition=__openAndCloseTransition;
@property(readonly, nonatomic) CAMPreviewContainerView *_previewContainerView; // @synthesize _previewContainerView=__previewContainerView;
@property(readonly, nonatomic) CAMPreviewContainerMaskingView *_previewContainerMaskingView; // @synthesize _previewContainerMaskingView=__previewContainerMaskingView;
@property(nonatomic) _Bool automaticallyAdjustsTopBarOrientation; // @synthesize automaticallyAdjustsTopBarOrientation=_automaticallyAdjustsTopBarOrientation;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long maskingAspectRatio; // @synthesize maskingAspectRatio=_maskingAspectRatio;
@property(nonatomic) long long desiredAspectRatio; // @synthesize desiredAspectRatio=_desiredAspectRatio;
@property(retain, nonatomic) CAMZoomSlider *zoomSlider; // @synthesize zoomSlider=_zoomSlider;
@property(nonatomic) long long previewViewOrientation; // @synthesize previewViewOrientation=_previewViewOrientation;
@property(retain, nonatomic) CAMPanoramaView *panoramaView; // @synthesize panoramaView=_panoramaView;
@property(retain, nonatomic) CAMTimerIndicatorView *timerIndicatorView; // @synthesize timerIndicatorView=_timerIndicatorView;
@property(retain, nonatomic) CAMBurstIndicatorView *burstIndicatorView; // @synthesize burstIndicatorView=_burstIndicatorView;
@property(retain, nonatomic) CAMFramerateIndicatorView *framerateIndicatorView; // @synthesize framerateIndicatorView=_framerateIndicatorView;
@property(retain, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property(retain, nonatomic) CAMShutterIndicatorView *shutterIndicatorView; // @synthesize shutterIndicatorView=_shutterIndicatorView;
@property(retain, nonatomic) CAMLivePhotoBadge *livePhotoBadge; // @synthesize livePhotoBadge=_livePhotoBadge;
@property(retain, nonatomic) CAMFocusLockBadge *focusAndExposureLockBadge; // @synthesize focusAndExposureLockBadge=_focusAndExposureLockBadge;
@property(retain, nonatomic) CAMHDRBadge *HDRBadge; // @synthesize HDRBadge=_HDRBadge;
@property(retain, nonatomic) CAMFlashBadge *flashBadge; // @synthesize flashBadge=_flashBadge;
@property(retain, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(retain, nonatomic) CAMBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) CAMTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) CAMPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak id <CAMControlVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5;
- (void)openForReason:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)closeForReason:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)prepareForAutorotation;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)updateBadgeLayoutForZoomSliderVisibilityChangedAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_layoutBadgeForTinyLayoutStyle:(id)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutSnapshotsOfPreviewView;
- (struct CGAffineTransform)_correctingTransformFromPreviewViewOrientation:(long long)arg1;
- (void)_layoutPanoramaViewForLayoutStyle:(long long)arg1;
- (void)_layoutBottomCenteredView:(id)arg1 forLayoutStyle:(long long)arg2;
- (void)_layoutTopCenteredView:(id)arg1 belowView:(id)arg2 belowViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4;
- (void)_layoutBadgesForLayoutStyle:(long long)arg1;
- (void)_layoutFramerateIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1;
- (void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1;
- (void)_layoutZoomSliderForLayoutStyle:(long long)arg1;
- (void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1;
- (void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1;
- (double)_interpolatedVerticalOffsetForShutterIndicator;
- (void)setMaskingAspectRatio:(long long)arg1 animated:(_Bool)arg2;
- (double)_multiplierForAspectRatio:(long long)arg1;
- (struct CGRect)_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(struct CGRect)arg2 bottomBarFrame:(struct CGRect)arg3;
- (struct CGSize)_previewSizeForAspectRatio:(long long)arg1;
- (_Bool)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1;
- (_Bool)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1;
- (struct CGSize)_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(struct CGSize)arg2;
- (double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1;
- (double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1;
- (_Bool)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1;
- (void)_layoutTopBarForLayoutStyle:(long long)arg1;
- (struct CGSize)_topBarSizeForLayoutStyle:(long long)arg1;
- (double)_interpolatedTopBarHeight;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1;

@end

