//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, TSCECalculationEngine;

__attribute__((visibility("hidden")))
@interface TSCETableInfosByName : NSObject
{
    NSMutableDictionary *_tableInfosByTableNameByContainerName;
    TSCECalculationEngine *_calcEngine;
}

+ (id)tableNameForTableInfo:(id)arg1;
+ (id)containerNameForTableInfo:(id)arg1;
- (_Bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)description;
- (id)tableInfoForTableName:(id)arg1 containerName:(id)arg2;
- (void)renameTableInfo:(id)arg1 fromName:(id)arg2;
- (void)dropTableInfo:(id)arg1;
- (void)dropTableInfo:(id)arg1 withTableName:(id)arg2 withContainerName:(id)arg3;
- (void)addTableInfo:(id)arg1;
- (void)dealloc;
- (id)initWithCalcEngine:(id)arg1;

@end

