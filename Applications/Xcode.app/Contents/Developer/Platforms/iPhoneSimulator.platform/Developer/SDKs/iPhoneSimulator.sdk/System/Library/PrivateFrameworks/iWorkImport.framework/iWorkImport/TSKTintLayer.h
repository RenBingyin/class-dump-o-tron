//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAReplicatorLayer.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface TSKTintLayer : CAReplicatorLayer
{
    CALayer *_contentsLayer;
}

@property(retain, nonatomic) CALayer *contentsLayer; // @synthesize contentsLayer=_contentsLayer;
- (void)layoutSublayers;
@property struct CGColor *tintColor;
- (void)setNeedsDisplay;
- (void)setContents:(id)arg1;
- (id)contents;

@end

