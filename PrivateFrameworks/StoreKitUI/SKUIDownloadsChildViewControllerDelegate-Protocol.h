//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, SSDownload, UIImage, UIViewController;

@protocol SKUIDownloadsChildViewControllerDelegate <NSObject>
- (UIImage *)childViewController:(UIViewController *)arg1 artworkForDownload:(SSDownload *)arg2;
- (void)childViewController:(UIViewController *)arg1 removeDownloads:(NSArray *)arg2;
- (void)childViewController:(UIViewController *)arg1 performActionForDownload:(SSDownload *)arg2;
@end

