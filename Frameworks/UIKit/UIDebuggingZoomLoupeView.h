//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol UIDebuggingZoomDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomLoupeView : UIView
{
    id <UIDebuggingZoomDelegate> _delegate;
    struct CGPoint _currentlyInspectedPoint;
}

@property(nonatomic) __weak id <UIDebuggingZoomDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint currentlyInspectedPoint; // @synthesize currentlyInspectedPoint=_currentlyInspectedPoint;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

