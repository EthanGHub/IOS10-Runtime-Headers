//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, NSURL;

@protocol _WKObservablePageState
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, nonatomic) _Bool _webProcessIsResponsive;
@property(readonly, nonatomic) _Bool hasOnlySecureContent;
@property(readonly, nonatomic) double estimatedProgress;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
@end

