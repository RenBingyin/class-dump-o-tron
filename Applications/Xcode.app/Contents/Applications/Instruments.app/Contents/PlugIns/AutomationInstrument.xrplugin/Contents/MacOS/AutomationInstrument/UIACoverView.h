//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSProgressIndicator, NSTextField;

@interface UIACoverView : NSView
{
    NSTextField *_statusField;
    NSProgressIndicator *_indicator;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)setMessage:(id)arg1;

@end

