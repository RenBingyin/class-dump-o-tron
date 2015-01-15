//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIKeyboardInputManagerZephyr.h"

@interface TIKeyboardInputManager_vi : TIKeyboardInputManagerZephyr
{
    void **m_transliterator;
    _Bool m_compositionDisabled;
    _Bool m_useInternalIndex;
}

+ (void)cleanupUnikey;
+ (void)setupUnikey;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (unsigned long long)deleteLengthForString:(id)arg1;
- (unsigned int)inputIndex;
- (void)setInputIndex:(unsigned int)arg1;
- (void)setInput:(id)arg1;
- (void)acceptInput;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (_Bool)handleThisCharacter:(unsigned short)arg1;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint)arg3 firstDelete:(unsigned long long *)arg4 fromVariantKey:(_Bool)arg5;
- (id)decomposeTelex:(id)arg1;
- (void **)createTransliterator;
- (_Bool)doesComposeText;
- (void)dealloc;
- (struct TIInputManagerZephyr *)initImplementation;
- (id)initWithConfig:(id)arg1;

@end

