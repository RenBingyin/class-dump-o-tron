//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFLock;

@interface MFWebKitMainThread : NSObject
{
    struct __CFDictionary *_visibleDict;
    MFLock *_visibleDictLock;
}

+ (id)sharedInstance;
- (int)dictValueForMimeType:(id)arg1;
- (void)_mainThreadPopulateDictForMimeType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

