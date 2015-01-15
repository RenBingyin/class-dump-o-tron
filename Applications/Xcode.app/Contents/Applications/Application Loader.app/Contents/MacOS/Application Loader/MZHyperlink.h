//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSURL;

@interface MZHyperlink : NSButton
{
    NSURL *_url;
    long long _trackingTag;
}

- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setUrlWithString:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (void)setHidden:(BOOL)arg1;
- (void)awakeFromNib;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeTrackingRect;

@end

