//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRBrushDataSource.h"

@class XRRun;

@protocol XRStrataDataSource <XRBrushDataSource>
- (struct XRStrataGroup *)run:(XRRun *)arg1 strataGroupForPoint:(struct XRGraphPoint *)arg2 graphAtIndex:(long long)arg3;

@optional
- (double)widthOfBlockGraphForRun:(XRRun *)arg1 usingScale:(struct CGSize)arg2;
@end

