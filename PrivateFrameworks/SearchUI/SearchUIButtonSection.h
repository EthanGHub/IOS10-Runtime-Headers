//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIMovieCardSectionBuyButton-Protocol.h>

@class NSString, NSURL;

@interface SearchUIButtonSection : NSObject <SearchUIMovieCardSectionBuyButton>
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_url;
    NSString *_adamID;
    NSString *_offerIdentifier;
}

@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

