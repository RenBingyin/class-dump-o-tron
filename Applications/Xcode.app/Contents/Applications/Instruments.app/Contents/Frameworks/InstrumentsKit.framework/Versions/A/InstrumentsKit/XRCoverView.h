//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class XRCoverViewController;

@interface XRCoverView : NSView
{
    XRCoverViewController *controller;
}

- (void)setFrame:(struct CGRect)arg1;
- (id)controller;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (void)setupWithImageSize:(struct CGSize)arg1;

@end

