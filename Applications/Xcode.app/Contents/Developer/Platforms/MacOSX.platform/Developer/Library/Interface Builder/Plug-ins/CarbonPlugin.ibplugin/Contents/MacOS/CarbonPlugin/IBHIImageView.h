//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBHIView.h"

@interface IBHIImageView : IBHIView
{
    float alpha;
    BOOL opaque;
    BOOL scaleToFit;
}

+ (struct CGImage *)cachedImageForSizing;
- (void)setScaleToFit:(BOOL)arg1;
- (BOOL)scaleToFit;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)isOpaque;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (void)customizeViewForStructureOutsetCalculation:(struct OpaqueControlRef *)arg1;
- (void)drawRect:(struct _NSRect)arg1;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;

@end

