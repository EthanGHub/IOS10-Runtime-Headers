//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResolutionResult.h>

@interface INCurrencyAmountResolutionResult : INIntentResolutionResult
{
}

+ (id)unsupportedWithReason:(long long)arg1 alternativeCurrencyAmounts:(id)arg2;
+ (id)needsMoreDetailsForCurrencyAmount:(id)arg1;
+ (id)confirmationRequiredWithCurrencyAmountToConfirm:(id)arg1;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedCurrencyAmount:(id)arg1;

@end

