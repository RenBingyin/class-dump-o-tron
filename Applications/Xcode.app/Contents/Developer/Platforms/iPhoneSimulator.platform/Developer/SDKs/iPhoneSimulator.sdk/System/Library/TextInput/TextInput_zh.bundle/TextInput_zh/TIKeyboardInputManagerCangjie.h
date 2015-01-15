//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased
{
    _Bool _suchengEnabled;
    _Bool _supportsEnglish;
}

+ (id)ASCIIFromCangjie:(id)arg1;
+ (id)cangjieFromASCII:(id)arg1;
+ (id)ASCIIToCangjieMap;
+ (id)cangjieToASCIIMap;
+ (Class)wordSearchClass;
+ (void)removeDynamicDictionaryForInputMode:(id)arg1;
@property(nonatomic) _Bool supportsEnglish; // @synthesize supportsEnglish=_supportsEnglish;
@property(nonatomic) _Bool suchengEnabled; // @synthesize suchengEnabled=_suchengEnabled;
- (id)sortingMethods;
- (_Bool)isPunctuationInput;
- (id)cangjieInputSet;
- (id)cangjieAlphabetSet;
- (id)cangjieSet;
- (unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(_Bool)arg2;
- (id)nonstopPunctuationCharacters;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (_Bool)selectedCandidateIsEnglish;
- (_Bool)firstCandidateIsEnglish;
- (void)updateMarkedText;
- (id)formattedSearchString;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)syncToKeyboardState:(id)arg1 afterContextChange:(_Bool)arg2;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)syncToLayoutState:(id)arg1;
- (_Bool)supportsNumberKeySelection;
- (id)keyboardBehaviors;
- (struct TIInputManagerZephyr *)initImplementation;

@end

