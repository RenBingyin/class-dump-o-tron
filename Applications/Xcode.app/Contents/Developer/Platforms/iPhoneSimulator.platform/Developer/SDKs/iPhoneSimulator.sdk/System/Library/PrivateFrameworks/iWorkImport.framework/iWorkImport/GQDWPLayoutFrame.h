//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GQDSStyle, GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDWPLayoutFrame : NSObject
{
    char *mStyleRef;
    GQDSStyle *mStyle;
    GQDWPLayoutStorage *mStorage;
    unsigned int mTextScale;
}

- (_Bool)isBlank;
- (unsigned int)textScale;
- (id)storage;
- (id)layoutStyle;
- (void)dealloc;
- (void)resolveStyleRef;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

