//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeSharing/HSRequest.h>

@interface HSItemsRequest : HSRequest
{
    _Bool _shouldParseResponse;
    _Bool _includeHiddenItems;
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
+ (id)requestWithDatabaseID:(unsigned int)arg1;
@property(nonatomic) _Bool includeHiddenItems; // @synthesize includeHiddenItems=_includeHiddenItems;
@property(nonatomic) _Bool shouldParseResponse; // @synthesize shouldParseResponse=_shouldParseResponse;
- (id)canonicalResponseForResponse:(id)arg1;
- (double)timeoutInterval;
- (id)initWithDatabaseID:(unsigned int)arg1 containerID:(unsigned int)arg2;
- (id)initWithDatabaseID:(unsigned int)arg1;
- (id)initWithAction:(id)arg1;

@end

