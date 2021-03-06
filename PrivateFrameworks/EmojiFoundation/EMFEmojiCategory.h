//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EMFEmojiCategory : NSObject
{
    NSString *_identifier;
}

+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)localizedSkinToneEmojiDescriptionForLocale:(id)arg1;
+ (id)localizedSkinToneEmojiDescription;
+ (id)localizedRecentsDescriptionForLocale:(id)arg1;
+ (id)localizedRecentsDescription;
+ (CDStruct_c0454aff *)_emojiSetForIdentifier:(id)arg1 setCount:(unsigned long long *)arg2;
+ (id)_baseLocalizationKeyForIdentifier:(id)arg1;
+ (id)categoryWithIdentifier:(id)arg1;
+ (id)categoryIdentifierList;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)emojiTokensForLocaleData:(id)arg1;
- (id)emojiStringsForEmojiChar:(CDStruct_c0454aff)arg1;
- (id)shortLocalizedNameForLocale:(id)arg1;
- (id)localizedNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *shortLocalizedName;
@property(readonly, nonatomic) NSString *localizedName;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

