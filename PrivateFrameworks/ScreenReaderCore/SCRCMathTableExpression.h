//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableExpression : SCRCMathArrayExpression
{
}

- (_Bool)canBeWrappedInLatexMathIndicators;
- (id)latexDescriptionInMathMode:(_Bool)arg1;
- (unsigned long long)numberOfTables;
- (unsigned long long)_numberOfColumns;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (_Bool)isMultiRowTable;

@end
