//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBXTextStorage.h"

@interface MyTextStorage : PBXTextStorage
{
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (unsigned long long)characterPositionFromLine:(unsigned long long)arg1;
- (unsigned long long)lineFromCharacterPosition:(unsigned long long)arg1;
- (id)methodForLine:(unsigned long long)arg1;
- (void)processEditing;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;

@end

