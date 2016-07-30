//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKPluginEntryViewController-Protocol.h>

@class CKTranscriptPluginBalloonView, IMBalloonPlugin, IMBalloonPluginDataSource, NSString;
@protocol CKTranscriptBalloonPluginController;

@interface CKDefaultPluginEntryViewController : UIViewController <CKPluginEntryViewController>
{
    UIViewController<CKTranscriptBalloonPluginController> *_pluginBubbleViewController;
    IMBalloonPluginDataSource *_datasource;
    CKTranscriptPluginBalloonView *_pluginBubbleView;
    IMBalloonPlugin *_plugin;
}

@property(retain, nonatomic) IMBalloonPlugin *plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) CKTranscriptPluginBalloonView *pluginBubbleView; // @synthesize pluginBubbleView=_pluginBubbleView;
@property(readonly, nonatomic) UIViewController<CKTranscriptBalloonPluginController> *pluginBubbleViewController; // @synthesize pluginBubbleViewController=_pluginBubbleViewController;
@property(retain, nonatomic) IMBalloonPluginDataSource *datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)_loadPluginBubbleViewController;
@property(readonly) _Bool wantsClearButton;
- (id)payloadWillSend;
@property(readonly) _Bool wantsEdgeToEdgeLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2 andPlugin:(id)arg3;
- (id)initWithDataSource:(id)arg1 entryViewDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
