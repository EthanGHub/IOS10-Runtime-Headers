//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, NSURL;

@protocol ICSearchIndexFile
@property(readonly, copy, nonatomic) NSString *name;
- (void)removeDocumentsForIdentifiers:(NSArray *)arg1;
- (void)addDocumentWithIdentifier:(NSString *)arg1 content:(NSString *)arg2 transactionId:(id *)arg3;
- (void)close;
- (_Bool)openWithURL:(NSURL *)arg1 transactionId:(id *)arg2;
- (_Bool)createWithURL:(NSURL *)arg1;
- (_Bool)opened;
@end
