//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIMovieCardSectionDetail-Protocol.h>

@class NSString;

@interface SearchUIMovieCardSectionDetail : NSObject <SearchUIMovieCardSectionDetail>
{
    NSString *_title;
    NSString *_descriptionText;
    unsigned long long _descriptionMaxLines;
}

@property(nonatomic) unsigned long long descriptionMaxLines; // @synthesize descriptionMaxLines=_descriptionMaxLines;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
