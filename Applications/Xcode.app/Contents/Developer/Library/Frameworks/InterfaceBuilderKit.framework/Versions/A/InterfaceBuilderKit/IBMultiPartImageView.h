//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage;

@interface IBMultiPartImageView : NSView
{
    double imageAlpha;
    double slicePoint;
    NSImage *image;
    long long orientation;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setOrientation:(long long)arg1;
- (long long)orientation;
- (void)setImage:(id)arg1;
- (id)image;
- (void)setSlicePoint:(double)arg1;
- (double)slicePoint;
- (void)setImageAlpha:(double)arg1;
- (double)imageAlpha;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

