//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPBroadcastActivityCommunicationHostProtocol-Protocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>
{
    RPBroadcastActivityViewController *_broadcastActivityViewController;
}

@property(nonatomic) __weak RPBroadcastActivityViewController *broadcastActivityViewController; // @synthesize broadcastActivityViewController=_broadcastActivityViewController;
- (void).cxx_destruct;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;
- (long long)modalPresentationStyle;
- (unsigned long long)popoverArrowDirection;
- (struct CGRect)popoverControllerSourceRect;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 cancelled:(_Bool)arg2;
- (void)viewDidLoad;

@end
