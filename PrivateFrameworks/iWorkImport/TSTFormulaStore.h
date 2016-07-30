//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCECalculationEngine, TSCEOwnerFormulaMap, TSUSparseArray;

__attribute__((visibility("hidden")))
@interface TSTFormulaStore : NSObject
{
    struct __CFUUID *_ownerID;
    TSCECalculationEngine *_calcEngine;
    TSUSparseArray *_formulas;
    unsigned long long _nextIndex;
    TSCEOwnerFormulaMap *_formulasForUndo;
}

+ (struct TSUCellCoord)coordFromIndex:(unsigned long long)arg1;
+ (unsigned long long)indexFromCoord:(const struct TSUCellCoord *)arg1;
@property(retain, nonatomic) TSCEOwnerFormulaMap *formulasForUndo; // @synthesize formulasForUndo=_formulasForUndo;
@property(retain, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
- (void)saveToArchive:(struct FormulaStoreArchive *)arg1 archiver:(id)arg2;
- (id)initWithOwnerID:(struct __CFUUID *)arg1 archive:(const struct FormulaStoreArchive *)arg2 unarchiver:(id)arg3;
- (void)foreach:(CDUnknownBlockType)arg1;
- (const struct TSCEFormula *)formulaAtIndex:(unsigned long long)arg1;
- (void)registerAllFormulaToCalculationEngine;
- (void)clearFormulaAtIndex:(unsigned long long)arg1;
- (void)setFormula:(struct TSCEFormula)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)appendIndexedFormula:(struct TSCEFormula)arg1;
- (void)rollbackToMark:(unsigned long long)arg1;
- (unsigned long long)markForRollback;
- (unsigned long long)maxIndex;
- (unsigned long long)reserveNextIndex;
- (id)description;
- (struct TSUCellCoord)reserveNextCoordinate;
- (void)dealloc;
- (id)initWithOwnerID:(struct __CFUUID *)arg1;
- (unsigned long long)formulaCount;
@property(nonatomic) struct __CFUUID *formulaOwnerID;

@end
