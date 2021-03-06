//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/WebFrameLoadDelegate-Protocol.h>

@class NSArray, NSError, NSString, NSURL, UIWebBrowserView, WebDataSource;
@protocol _UIWebBrowserLoadingControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIWebBrowserLoadingController : NSObject <WebFrameLoadDelegate>
{
    NSURL *_backURL;
    NSURL *_forwardURL;
    NSArray *_fallbackURLs;
    _Bool _securePageHasInsecureContent;
    NSString *_lastSuccessfulURLString;
    _Bool _loadEndedWithError;
    _Bool _loadStoppedFromAPI;
    NSError *_errorThatCausedLoadToEnd;
    WebDataSource *_dataSourceWithError;
    unsigned int _pendingFrameLoadMessages;
    NSString *_userTypedAddress;
    _Bool _canGoBack;
    _Bool _canGoForward;
    _Bool _loading;
    float _estimatedProgress;
    id <_UIWebBrowserLoadingControllerDelegate> _delegate;
    UIWebBrowserView *_browserView;
    NSString *_title;
    NSString *_URLString;
    NSURL *_URL;
    long long _loadingState;
}

@property(nonatomic) long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) float estimatedProgress; // @synthesize estimatedProgress=_estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) _Bool canGoForward; // @synthesize canGoForward=_canGoForward;
@property(readonly, nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(retain, nonatomic) UIWebBrowserView *browserView; // @synthesize browserView=_browserView;
@property(nonatomic) id <_UIWebBrowserLoadingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didRunInsecureContent:(id)arg2;
- (void)webViewDidDisplayInsecureContent:(id)arg1;
- (void)webView:(id)arg1 didPopStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didReplaceStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didPushStateWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didCancelClientRedirectForFrame:(id)arg2;
- (void)webView:(id)arg1 willPerformClientRedirectToURL:(id)arg2 delay:(double)arg3 fireDate:(id)arg4 forFrame:(id)arg5;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)_didNotLoadURL;
@property(readonly, nonatomic, getter=isSecure) _Bool secure;
- (void)_setSecurePageHasInsecureContent:(_Bool)arg1;
- (void)loadUserTypedAddress:(id)arg1;
- (void)_tryMultipleURLs:(id)arg1;
- (void)_loadRequest:(id)arg1 userDriven:(_Bool)arg2;
- (void)_setFallbackURLs:(id)arg1;
- (void)_updateAfterHistoryChange;
- (void)_setLoading:(_Bool)arg1 withError:(_Bool)arg2 fromDelegate:(_Bool)arg3 fromFragmentLoad:(_Bool)arg4;
- (id)_getDataSourceURL:(id)arg1;
- (void)_updateURL;
- (void)_updateURLString;
- (void)_setUserTypedAddress:(id)arg1;
- (void)_setLoading:(_Bool)arg1 withError:(_Bool)arg2;
- (void)_setLoading:(_Bool)arg1 withError:(_Bool)arg2 fromFragmentLoad:(_Bool)arg3;
- (void)_setLoadingFromDelegate:(_Bool)arg1 withError:(id)arg2 dataSource:(id)arg3;
- (void)stopLoading;
- (void)goForward;
- (void)goBack;
- (void)reload;
- (_Bool)_URLMayStartLoad:(id)arg1;
- (id)_dataSourceURL;
- (void)_performWebViewLoadSelector:(SEL)arg1 forceProgress:(_Bool)arg2;
- (void)_progressChanged:(id)arg1;
- (void)_attemptTransitionToLoadingState:(long long)arg1;
- (void)_updateBackForward;
- (void)_setForwardURL:(id)arg1;
- (void)_setBackURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

