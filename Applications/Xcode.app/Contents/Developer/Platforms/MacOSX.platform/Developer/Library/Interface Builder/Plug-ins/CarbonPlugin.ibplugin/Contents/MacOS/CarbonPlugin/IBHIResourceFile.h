//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IBHIResourceFile : NSObject
{
    NSString *path;
    short refNumber;
    BOOL loaded;
    NSMutableDictionary *resTypesToResIDs;
}

- (BOOL)isLoaded;
- (void)deactivate;
- (void)activate;
- (id)enumerateResources;
- (id)resourceInfo;
- (short)refNumber;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

