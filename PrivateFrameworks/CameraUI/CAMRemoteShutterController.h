//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMMotionController;
@protocol CAMRemoteShutterDelegate;

@interface CAMRemoteShutterController : NSObject
{
    _Bool _showingPreview;
    _Bool _capturingVideo;
    _Bool _capturingTimelapse;
    long long _captureMode;
    long long _captureDevice;
    long long _flashMode;
    long long _hdrMode;
    long long _irisMode;
    double _zoomAmount;
    id <CAMRemoteShutterDelegate> _delegate;
    CAMMotionController *__motionController;
}

@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(nonatomic) __weak id <CAMRemoteShutterDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCapturingTimelapse) _Bool capturingTimelapse; // @synthesize capturingTimelapse=_capturingTimelapse;
@property(nonatomic, getter=isCapturingVideo) _Bool capturingVideo; // @synthesize capturingVideo=_capturingVideo;
@property(nonatomic) double zoomAmount; // @synthesize zoomAmount=_zoomAmount;
@property(nonatomic) long long irisMode; // @synthesize irisMode=_irisMode;
@property(nonatomic) long long hdrMode; // @synthesize hdrMode=_hdrMode;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(nonatomic) long long captureMode; // @synthesize captureMode=_captureMode;
@property(nonatomic, getter=isShowingPreview) _Bool showingPreview; // @synthesize showingPreview=_showingPreview;
- (void).cxx_destruct;
- (void)_captureOrientationDidChange:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (void)burstCaptureDidStop;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1;
- (void)burstCaptureWillStart;
- (void)countdownCanceled;
- (void)sendThumbnailImage:(id)arg1;
- (void)sendThumbnailData:(id)arg1;
- (void)_sendMode;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (void)closeConnection;
- (void)openConnection;
- (void)applyCaptureConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2;

@end

