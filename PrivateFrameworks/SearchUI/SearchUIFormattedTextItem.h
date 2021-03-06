//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIFormattedTextItem-Protocol.h>

@class NSString, UIImage;

@interface SearchUIFormattedTextItem : NSObject <SearchUIFormattedTextItem>
{
    _Bool _highlighted;
    _Bool _bold;
    NSString *_text;
    UIImage *_glyph;
}

+ (id)textItemWithText:(id)arg1 highlighted:(_Bool)arg2 bold:(_Bool)arg3;
+ (id)textItemWithImage:(id)arg1;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) UIImage *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

