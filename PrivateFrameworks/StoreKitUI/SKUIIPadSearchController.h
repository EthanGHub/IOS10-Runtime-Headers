//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISearchFieldDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate>
{
    SKUIClientContext *_clientContext;
    UIViewController *_parentViewController;
    SKUISearchFieldController *_searchFieldController;
}

@property(readonly, nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)arg1;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)reloadSearchField;
- (id)newSearchFieldBarItem;
- (void)setSearchFieldText:(id)arg1;
- (void)setSearchFieldPlaceholderText:(id)arg1;
@property(readonly, nonatomic) SKUISearchFieldController *searchFieldController;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
