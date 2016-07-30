//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer;

@interface RPPipViewController : UIViewController
{
    AVCaptureSession *_pipSession;
    AVCaptureDevice *_videoDevice;
    AVCaptureDeviceInput *_videoInput;
    AVCaptureVideoPreviewLayer *_previewLayer;
}

@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureDevice *videoDevice; // @synthesize videoDevice=_videoDevice;
@property(retain, nonatomic) AVCaptureSession *pipSession; // @synthesize pipSession=_pipSession;
- (void).cxx_destruct;
- (void)setPreviewOrientation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)stopPipSession;
- (void)startPipSession;
- (void)setUpPipSession;
- (id)init;

@end
