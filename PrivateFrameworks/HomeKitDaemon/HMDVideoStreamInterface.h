//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDStreamInterface.h>

#import <HomeKitDaemon/AVCVideoStreamDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class AVCVideoStream, HAPOSTransaction, HMFTimer, NSNumber, NSObject, NSString;
@protocol HMDVideoStreamInterfaceDelegate, HMDVideoStreamLastDecodedFrameDelegate, OS_dispatch_queue;

@interface HMDVideoStreamInterface : HMDStreamInterface <AVCVideoStreamDelegate, HMFTimerDelegate>
{
    _Bool _reconfigurationMode;
    AVCVideoStream *_videoStream;
    id <HMDVideoStreamInterfaceDelegate> _delegate;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_lastFrameDelegateQueue;
    id <HMDVideoStreamLastDecodedFrameDelegate> _lastFrameDelegate;
    HAPOSTransaction *_snapshotDataTrasaction;
    double _rtcpSendIntervalSec;
}

+ (id)logCategory;
@property(nonatomic) double rtcpSendIntervalSec; // @synthesize rtcpSendIntervalSec=_rtcpSendIntervalSec;
@property(retain, nonatomic) HAPOSTransaction *snapshotDataTrasaction; // @synthesize snapshotDataTrasaction=_snapshotDataTrasaction;
@property __weak id <HMDVideoStreamLastDecodedFrameDelegate> lastFrameDelegate; // @synthesize lastFrameDelegate=_lastFrameDelegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lastFrameDelegateQueue; // @synthesize lastFrameDelegateQueue=_lastFrameDelegateQueue;
@property(nonatomic) _Bool reconfigurationMode; // @synthesize reconfigurationMode=_reconfigurationMode;
@property(retain, nonatomic) HMFTimer *downgradeDebouceTimer; // @synthesize downgradeDebouceTimer=_downgradeDebouceTimer;
@property(retain, nonatomic) HMFTimer *upgradeDebouceTimer; // @synthesize upgradeDebouceTimer=_upgradeDebouceTimer;
@property(readonly) __weak id <HMDVideoStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCVideoStream *videoStream; // @synthesize videoStream=_videoStream;
- (void).cxx_destruct;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (void)stream:(id)arg1 didGetLastDecodedFrame:(id)arg2;
- (void)stream:(id)arg1 downlinkQualityDidChange:(id)arg2;
- (void)stream:(id)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;
- (void)setRtcpSendInterval:(double)arg1;
@property(nonatomic) double rtcpTimeOutIntervalSec;
@property(nonatomic) double rtpTimeOutIntervalSec;
@property(nonatomic, getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
@property(nonatomic) long long direction;
- (void)_callDidGetLastDecodedFrame:(id)arg1;
- (void)_callDidUpdateConfiguration;
- (void)_callNetworkDeteriorated;
- (void)_callNetworkImproved;
- (void)_callStopped:(id)arg1;
- (void)_callStarted:(id)arg1;
- (void)_callRelayStarted:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_downlinkQualityChanged:(id)arg1;
- (void)captureSnapshotWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)stopStream;
- (void)updateStreamConfiguration:(id)arg1;
- (void)enableReconfigurationMode;
- (void)_startStream:(id)arg1;
- (void)startStream:(id)arg1;
- (_Bool)_initializeStreamRemoteLocal;
- (_Bool)_initializeStreamRemoteSender:(id)arg1;
- (_Bool)_initializeStreamRemoteSocketReceiver:(id)arg1;
- (_Bool)_initializeStreamRemoteDestinationReceiver:(id)arg1;
- (_Bool)_createLocalSocket;
@property(readonly, nonatomic) NSNumber *streamToken;
@property(readonly, nonatomic) NSNumber *syncSource;
- (void)dealloc;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

