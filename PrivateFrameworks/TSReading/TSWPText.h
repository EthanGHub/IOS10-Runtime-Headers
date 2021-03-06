//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSWPColumnMetrics-Protocol.h>
#import <TSReading/TSWPLayoutOwner-Protocol.h>
#import <TSReading/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSString, TSDCanvas, TSDLayout, TSPObject, TSUColor, TSWPColumnStyle, TSWPListStyle, TSWPPadding, TSWPParagraphStyle, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPStyleProvider, TSWPTextDelegate;

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPParagraphStyle *_paragraphStyle;
    TSWPListStyle *_listStyle;
    TSWPColumnStyle *_columnStyle;
    TSUColor *_textColorOverride;
    TSWPStorage *_storage;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned long long _pageNumber;
    unsigned long long _pageCount;
    int _flags;
    struct CGPoint _anchor;
    unsigned int _naturalAlignment;
    int _naturalDirection;
    NSObject<TSWPTextDelegate> *_delegate;
    id <TSWPStyleProvider> _styleProvider;
}

@property(retain, nonatomic) TSUColor *textColorOverride; // @synthesize textColorOverride=_textColorOverride;
@property(readonly, nonatomic) int naturalDirection; // @synthesize naturalDirection=_naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment; // @synthesize naturalAlignment=_naturalAlignment;
@property(retain, nonatomic) id <TSWPStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(readonly, retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(nonatomic) NSObject<TSWPTextDelegate> *delegate; // @synthesize delegate=_delegate;
- (_Bool)forceWesternLineBreaking;
- (id)lineHintsForTarget:(id)arg1;
- (id)textWrapper;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (_Bool)caresAboutStorageChanges;
@property(readonly, nonatomic) _Bool layoutIsValid;
- (_Bool)adjustColumnOriginForAlignment;
- (_Bool)isLayoutOffscreen;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (id)currentInlineDrawableLayouts;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool wantsLineFragments;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (_Bool)isLastTarget;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
- (void)drawText:(id)arg1 inContext:(struct CGContext *)arg2 minSize:(struct CGSize)arg3 maxSize:(struct CGSize)arg4 anchor:(struct CGPoint)arg5 flags:(int)arg6 viewScale:(double)arg7;
- (void)drawColumn:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(_Bool)arg3 viewScale:(double)arg4;
- (void)drawColumn:(id)arg1 selection:(id)arg2 inContext:(struct CGContext *)arg3 isFlipped:(_Bool)arg4 viewScale:(double)arg5;
- (struct CGSize)measureStorage:(id)arg1;
- (struct CGSize)measureText:(id)arg1;
- (id)layoutText:(id)arg1 kind:(int)arg2 minSize:(struct CGSize)arg3 maxSize:(struct CGSize)arg4 anchor:(struct CGPoint)arg5 flags:(int)arg6;
- (id)layoutText:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 flags:(int)arg5;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 pageNumber:(unsigned long long)arg5 pageCount:(unsigned long long)arg6 flags:(int)arg7;
- (id)layoutTextStorage:(id)arg1 minSize:(struct CGSize)arg2 maxSize:(struct CGSize)arg3 anchor:(struct CGPoint)arg4 flags:(int)arg5;
- (void)dealloc;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3;
- (id)initWithParagraphStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(unsigned int)arg3 naturalDirection:(int)arg4;
- (id)initWithParagraphStyle:(id)arg1 listStyle:(id)arg2 columnStyle:(id)arg3 alignmentForNaturalAlignment:(unsigned int)arg4 naturalDirection:(int)arg5;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsDescendersToClip;
@property(readonly, nonatomic) _Bool allowsLastLineTruncation;
@property(readonly, nonatomic) _Bool alwaysAllowWordSplit;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) _Bool ignoresEquationAlignment;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) unsigned int maxLineCount;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) _Bool pushAscendersIntoColumn;
@property(readonly, nonatomic) _Bool shouldHyphenate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double textScaleFactor;

@end

