//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface IBColorPickerChooserViewColorSwatch : NSView
{
    NSColor *color;
    BOOL highlighted;
    id target;
    SEL action;
}

@property(retain) NSColor *color; // @synthesize color;
- (id)description;
- (void)drawRect:(struct CGRect)arg1;
@property BOOL highlighted;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (id)initWithColor:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)setupTrackingArea;
- (BOOL)isFlipped;

@end

