//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

__attribute__((visibility("hidden")))
@interface DDCallAction : DDTelephoneNumberAction
{
}

+ (_Bool)isAvailable;
- (id)callProvider;
- (long long)TTYType;
- (int)interactionType;
- (void)perform;
- (id)localizedName;
- (id)localizedCallStringForName:(id)arg1 usingCallRelay:(_Bool)arg2;
- (_Bool)_titleFitsInActionSheet:(id)arg1;
- (double)_systemFontSize;
- (id)contactAndLabelForPhoneNumber:(id *)arg1;
- (id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2;
- (id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2;

@end

