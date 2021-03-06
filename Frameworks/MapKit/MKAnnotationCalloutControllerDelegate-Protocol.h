//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKAnnotationCalloutController, MKAnnotationView, UIControl;

@protocol MKAnnotationCalloutControllerDelegate <NSObject>
- (void)calloutDidAppearForAnnotationView:(MKAnnotationView *)arg1 inCalloutController:(MKAnnotationCalloutController *)arg2;
- (void)calloutController:(MKAnnotationCalloutController *)arg1 annotationView:(MKAnnotationView *)arg2 calloutAccessoryControlTapped:(UIControl *)arg3;
- (void)calloutController:(MKAnnotationCalloutController *)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint)arg2 annotationCoordinate:(struct CLLocationCoordinate2D)arg3 completionHandler:(void (^)(void))arg4;
- (struct CGRect)calloutController:(MKAnnotationCalloutController *)arg1 visibleCenteringRectInAnnotationView:(MKAnnotationView *)arg2;

@optional
- (void)calloutControllerDidFinishMapsTransitionExpanding:(MKAnnotationCalloutController *)arg1;
@end

