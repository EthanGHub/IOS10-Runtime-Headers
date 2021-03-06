//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)showMenu:(_Bool)arg1;
- (void)_updateHandleSelection;
- (void)_prepareHandleSelection;
- (void)_updateWordSelectionForPage:(id)arg1 atPoint:(struct CGPoint)arg2;
- (int)didTapSelectionHandlersForGesture:(id)arg1;
- (_Bool)isSelectingText;
- (void)scrollViewDidEndDecelerating;
- (void)touchSwipe:(id)arg1;
- (void)touchPan:(id)arg1;
- (void)touchTap:(id)arg1;
- (void)touchLongUp:(id)arg1;
- (void)touchLongMoved:(id)arg1;
- (void)touchLongDown:(id)arg1;
- (id)initWithView:(id)arg1;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;

@end

