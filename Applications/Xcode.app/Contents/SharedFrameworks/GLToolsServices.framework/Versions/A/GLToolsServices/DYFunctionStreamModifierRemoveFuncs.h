//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYFunctionStreamModifier.h"

@interface DYFunctionStreamModifierRemoveFuncs : DYFunctionStreamModifier
{
    int _currentFileType;
    unsigned int _removedFunctionCount;
}

+ (BOOL)isAppleInternalContextFunction:(struct Function *)arg1 contextSet:(unordered_set_febeaddf *)arg2;
@property(readonly, nonatomic) unsigned int removedFunctionCount; // @synthesize removedFunctionCount=_removedFunctionCount;
- (void)onBeginFileInArchiveModifier:(id)arg1;
- (id)initWithDeltaFilesTextureAndBufferLoadFilter;
- (id)initWithAppleInternalContextFilter;
- (id)initWithCaptureFunctions:(id)arg1;
- (id)init;

@end

