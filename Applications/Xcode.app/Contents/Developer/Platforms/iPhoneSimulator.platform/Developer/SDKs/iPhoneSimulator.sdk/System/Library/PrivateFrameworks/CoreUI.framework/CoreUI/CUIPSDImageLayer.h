//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayer.h>

@class CUIImage;

__attribute__((visibility("hidden")))
@interface CUIPSDImageLayer : CUIPSDLayer
{
    CUIImage *_image;
}

@property(readonly, nonatomic) struct CGImage *cgImageRef;
- (void)dealloc;
- (id)initWithCGImageRef:(struct CGImage *)arg1;

@end

