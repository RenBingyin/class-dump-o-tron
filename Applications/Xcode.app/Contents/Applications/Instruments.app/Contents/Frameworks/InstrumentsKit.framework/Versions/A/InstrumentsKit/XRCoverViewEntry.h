//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XRCoverViewEntry : NSObject
{
    NSString *name;
    NSString *path;
    long long _sortIndex;
    NSObject *_representedObject;
    struct CGImage *image;
    struct CGSize imageSize;
    unsigned int imageFailed:1;
    unsigned int requestedImage:1;
    unsigned int markedImage:1;
}

+ (void)sweepImageQueue;
- (id)description;
- (_Bool)requestImageOfSize:(struct CGSize)arg1;
- (void)postNotificationName:(id)arg1;
- (struct CGImage *)imageOfSize:(struct CGSize)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (long long)compareWithDesktopImage:(id)arg1 keys:(const int *)arg2;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (long long)sortIndex;
- (void)setSortIndex:(long long)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

