//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OITSUFlushableObject.h>

__attribute__((visibility("hidden")))
@interface OITSUFlushableCachedImage : OITSUFlushableObject
{
    struct CGImage *_image;
    id _delegate;
    SEL _delegateCreateImageSelector;
}

- (struct CGImage *)newImage;
- (_Bool)hasFlushableContent;
- (void)unload;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 createImageSelector:(SEL)arg2;

@end

