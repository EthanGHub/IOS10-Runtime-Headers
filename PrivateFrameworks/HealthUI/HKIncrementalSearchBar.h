//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

#import <HealthUI/UISearchBarDelegate-Protocol.h>

@class NSString, UIBarButtonItem, _SearchEntryWithMatchDisplay;
@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIToolbar <UISearchBarDelegate>
{
    id <HKIncrementalSearchBarDelegate> _searchBarDelegate;
    NSString *_matchDisplayText;
    UIBarButtonItem *_upBarButtonItem;
    UIBarButtonItem *_downBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    _SearchEntryWithMatchDisplay *_searchEntry;
}

+ (id)regularExpressionFromString:(id)arg1 quoteForJavascript:(_Bool)arg2 caseless:(_Bool *)arg3;
+ (id)_patternFromSearchString:(id)arg1 quoteForJavascript:(_Bool)arg2;
+ (_Bool)_hasUppercaseCharacters:(id)arg1;
@property(readonly, nonatomic) _SearchEntryWithMatchDisplay *searchEntry; // @synthesize searchEntry=_searchEntry;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *downBarButtonItem; // @synthesize downBarButtonItem=_downBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *upBarButtonItem; // @synthesize upBarButtonItem=_upBarButtonItem;
@property(retain, nonatomic) NSString *matchDisplayText; // @synthesize matchDisplayText=_matchDisplayText;
@property(retain, nonatomic) id <HKIncrementalSearchBarDelegate> searchBarDelegate; // @synthesize searchBarDelegate=_searchBarDelegate;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)downAction:(id)arg1;
- (void)upAction:(id)arg1;
- (void)activateSearch:(_Bool)arg1;
- (void)setMatchDisplayVisible:(_Bool)arg1;
@property(retain, nonatomic) NSString *searchText;
- (void)setDownEnabled:(_Bool)arg1;
- (void)setUpEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)widthOfBarButtonItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

