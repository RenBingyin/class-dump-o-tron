//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JAWT_SurfaceLayers.h"

@class CALayer;

@interface AWTSurfaceLayers : NSObject <JAWT_SurfaceLayers>
{
    CALayer *layer;
    CALayer *windowLayer;
}

+ (void)repaintLayersRecursively:(id)arg1;
- (id)initWithWindowLayer:(id)arg1;
@property(retain) CALayer *layer;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly) CALayer *windowLayer; // @synthesize windowLayer;

@end

