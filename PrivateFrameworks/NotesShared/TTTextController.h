//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTTextStorageStyler-Protocol.h>

@class NSString;

@interface TTTextController : NSObject <TTTextStorageStyler>
{
    double _bodyStyleFontSizeThreshold;
    double _headingStyleFontSizeThreshold;
}

+ (struct UIFont *)preferredFontForTTTextStyle:(unsigned int)arg1;
+ (double)bodyParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)attachmentParagraphSpacing;
+ (double)superscriptScaleFactor;
@property(nonatomic) double headingStyleFontSizeThreshold; // @synthesize headingStyleFontSizeThreshold=_headingStyleFontSizeThreshold;
@property(nonatomic) double bodyStyleFontSizeThreshold; // @synthesize bodyStyleFontSizeThreshold=_bodyStyleFontSizeThreshold;
- (id)preferredAttributesForTTTextStyle:(unsigned int)arg1;
- (id)filterStyleAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;
- (void)styleText:(id)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)addLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)styleFontInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(_Bool)arg2;
- (void)resetGuessedFontSizes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
- (id)styleForModelAttributes:(id)arg1;
- (void)addBIToStyle:(id)arg1;
- (id)removeAttribute:(id)arg1 ifInconsistentAtLocation:(unsigned long long)arg2 inTextStorage:(id)arg3 forNewTypingAttributes:(id)arg4;
- (id)referenceAttributesForLocation:(unsigned long long)arg1 textStorage:(id)arg2 currentParagraphStart:(unsigned long long)arg3;
- (id)copyNSParagraphStylefromAttributes:(id)arg1 toAttributes:(id)arg2;
- (id)copyAttribute:(id)arg1 fromAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)strippedTypingAttributesForEmptyParagraphAtTheEndOfDocument:(id)arg1 isTyping:(_Bool)arg2;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)typingAttributesForRange:(struct _NSRange)arg1 forSelectionChange:(_Bool)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4;
- (id)fixedWidthAttributes;
- (id)checklistAttributes;
- (id)defaultListAttributes;
- (id)bodyAttributes;
- (id)captionAttributes;
- (id)subheadingAttributes;
- (id)headingAttributes;
- (id)titleAttributes;
- (id)defaultParagraphStyle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
