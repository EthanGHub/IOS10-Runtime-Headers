//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSSStylePropertyChangeSet.h>

@class TSDSpecShadow, TSSSpecColor, TSSSpecInteger, TSSSpecString, TSWPSpecListStyleBoolArray, TSWPSpecListStyleFloatArray, TSWPSpecListStyleImageDataArray, TSWPSpecListStyleListLabelGeometryArray, TSWPSpecListStyleListLabelTypeArray, TSWPSpecListStyleListNumberTypeArray, TSWPSpecListStyleStringArray;

__attribute__((visibility("hidden")))
@interface TSWPListStylePropertyChangeSet : TSSStylePropertyChangeSet
{
    TSSSpecColor *_fontColor;
    TSSSpecString *_fontName;
    TSWPSpecListStyleFloatArray *_listClassicTextIndentArray;
    TSWPSpecListStyleListLabelGeometryArray *_listLabelGeometryArray;
    TSWPSpecListStyleImageDataArray *_listLabelImageDataArray;
    TSWPSpecListStyleFloatArray *_listLabelIndentArray;
    TSWPSpecListStyleListNumberTypeArray *_listLabelNumberArray;
    TSWPSpecListStyleBoolArray *_listLabelTieredNumberArray;
    TSDSpecShadow *_textShadow;
    TSWPSpecListStyleStringArray *_listLabelStringArray;
    TSWPSpecListStyleFloatArray *_listTextIndentArray;
    TSWPSpecListStyleListLabelTypeArray *_listLabelTypeArray;
    TSSSpecInteger *_writingDirection;
    _Bool _definedFontColor;
    _Bool _definedFontName;
    _Bool _definedListClassicTextIndentArray;
    _Bool _definedListLabelGeometryArray;
    _Bool _definedListLabelImageDataArray;
    _Bool _definedListLabelIndentArray;
    _Bool _definedListLabelNumberArray;
    _Bool _definedListLabelTieredNumberArray;
    _Bool _definedTextShadow;
    _Bool _definedListLabelStringArray;
    _Bool _definedListTextIndentArray;
    _Bool _definedListLabelTypeArray;
    _Bool _definedWritingDirection;
}

- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;

@end
