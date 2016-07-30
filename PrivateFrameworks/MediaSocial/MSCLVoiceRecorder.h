//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/AVVoiceControllerRecordDelegate-Protocol.h>

@class AVVoiceController, NSMutableArray, NSString;
@protocol MSCLVoiceRecorderDelegate, OS_dispatch_source;

@interface MSCLVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate>
{
    NSString *_assetPath;
    id _capturedSelf;
    id <MSCLVoiceRecorderDelegate> _delegate;
    struct OpaqueAudioFileID *_fileID;
    double _maximumRecordingDuration;
    NSObject<OS_dispatch_source> *_recordingTimeoutTimer;
    NSObject<OS_dispatch_source> *_powerMeterTimer;
    NSMutableArray *_stopBlocks;
    long long _totalRecordedPacketCount;
    AVVoiceController *_voiceController;
}

@property(nonatomic) double maximumRecordingDuration; // @synthesize maximumRecordingDuration=_maximumRecordingDuration;
@property(nonatomic) __weak id <MSCLVoiceRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_stopRecordingTimeoutTimer;
- (void)_stopPowerMeterTimer;
- (void)_startRecordingTimeoutTimer;
- (void)_startPowerMeterTimer;
- (void)_finishRecordingWithReason:(long long)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)startRecordingUsingActivationMode:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAssetPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
