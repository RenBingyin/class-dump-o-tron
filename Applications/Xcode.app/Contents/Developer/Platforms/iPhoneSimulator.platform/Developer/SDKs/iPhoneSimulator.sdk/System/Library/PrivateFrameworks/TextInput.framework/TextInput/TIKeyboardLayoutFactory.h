//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject
{
    void *_layoutsLibraryHandle;
    NSMutableDictionary *_internalCache;
}

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;
@property(retain) NSMutableDictionary *internalCache; // @synthesize internalCache=_internalCache;
@property(readonly, nonatomic) void *layoutsLibraryHandle; // @synthesize layoutsLibraryHandle=_layoutsLibraryHandle;
- (id)keyboardPrefixForWidth:(double)arg1;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (id)init;
- (void)dealloc;

@end

