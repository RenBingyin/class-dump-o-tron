//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowTemplate.h"

@interface NSWindowTemplate (IBWindowSizeInspectorIntegration)
- (BOOL)usesFlippedScreenCoordinates;
- (struct CGRect)contentRectWithAutoPositionMaskApplied;
- (void)setDesignableContentRect:(struct CGRect)arg1;
- (struct CGRect)designableContentRect;
- (struct CGRect)currentScreenLayoutFrame;
- (void)setDesignableHasMaxSize:(BOOL)arg1;
- (BOOL)designableHasMaxSize;
- (void)setDesignableHasMinSize:(BOOL)arg1;
- (BOOL)designableHasMinSize;
- (void)setGMaxSize:(id)arg1;
- (id)gMaxSize;
- (void)setGMinSize:(id)arg1;
- (id)gMinSize;
@end

