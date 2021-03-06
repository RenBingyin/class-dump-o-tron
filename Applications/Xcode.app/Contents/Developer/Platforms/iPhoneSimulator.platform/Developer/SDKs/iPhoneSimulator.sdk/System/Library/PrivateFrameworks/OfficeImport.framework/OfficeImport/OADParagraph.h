//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, OADCharacterProperties, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADParagraph : NSObject
{
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (void)removeUnnecessaryOverrides;
- (void)applyProperties:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)bulletCharacterProperties;
- (_Bool)hasBulletCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (id)paragraphEndCharacterProperties;
- (id)addFooterField;
- (id)addDateTimeField;
- (id)addGenericTextField;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (void)removeAllTextRuns;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (unsigned long long)textRunCount;
- (unsigned long long)characterCount;
- (_Bool)isEmpty;
- (id)properties;
- (void)dealloc;
- (id)init;
- (id)plainText;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (id)addSlideNumberField;

@end

