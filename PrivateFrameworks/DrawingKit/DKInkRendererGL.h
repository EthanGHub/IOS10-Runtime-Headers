//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GLKit/GLKView.h>

#import <DrawingKit/DKInkRenderer-Protocol.h>
#import <DrawingKit/DKOpenGLRendererDelegate-Protocol.h>

@class DKOpenGLRenderer, NSMutableArray, NSString, UIColor;
@protocol DKInkRendererDelegate;

__attribute__((visibility("hidden")))
@interface DKInkRendererGL : GLKView <DKOpenGLRendererDelegate, DKInkRenderer>
{
    UIColor *_inkColor;
    NSMutableArray *_brushPointQueue;
    NSMutableArray *_brushStrokes;
    NSMutableArray *_currentBrushStroke;
    _Bool _initialized;
    double _backingScale;
    DKOpenGLRenderer *_inkRenderer;
    _Bool _needToNotify;
    _Bool scaleDrawingToFitCanvas;
    _Bool drawingEnabled;
    id <DKInkRendererDelegate> delegate;
    double _drawingScale;
    unsigned long long _mode;
}

@property(nonatomic) _Bool drawingEnabled; // @synthesize drawingEnabled;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(nonatomic) _Bool scaleDrawingToFitCanvas; // @synthesize scaleDrawingToFitCanvas;
@property(nonatomic) __weak id <DKInkRendererDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
- (void).cxx_destruct;
- (void)rendererDidFinishAnimatingDrawing:(id)arg1;
- (void)teardown;
- (void)addPointsFromBrushPointQueue;
- (void)displayForcefully;
- (void)drawRect:(struct CGRect)arg1;
- (void)display;
@property(readonly, nonatomic) unsigned long long maximumPointsForBleedAnimation;
@property(readonly, nonatomic) _Bool supportsBleedAnimation;
- (void)force;
- (void)removeLastStroke;
- (void)completeAnimationsImmediately;
- (void)resetRendererState;
- (void)clear;
- (void)endStroke;
- (void)addPoint:(CDStruct_09aaf5d3)arg1;
- (void)beginStroke;
- (void)dealloc;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool initialized;
- (_Bool)canBecomeFirstResponder;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

