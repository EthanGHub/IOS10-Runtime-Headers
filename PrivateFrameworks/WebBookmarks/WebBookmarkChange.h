//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WebBookmark;

@interface WebBookmarkChange : NSObject
{
    int _bookmarkID;
    int _parentID;
    long long _changeType;
    WebBookmark *_bookmark;
}

+ (id)bookmarkAddChangeWithBookmark:(id)arg1;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int parentID; // @synthesize parentID=_parentID;
@property(nonatomic) int bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4;
- (id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3;

@end

