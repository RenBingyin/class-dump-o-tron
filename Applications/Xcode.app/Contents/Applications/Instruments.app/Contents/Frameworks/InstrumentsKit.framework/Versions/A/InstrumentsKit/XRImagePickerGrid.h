//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMatrix.h"

@class NSMutableArray;

@interface XRImagePickerGrid : NSMatrix
{
    NSMutableArray *_trackingAreas;
}

- (void)updateTrackingAreas;
- (void)loadImages:(id)arg1;
- (void)_layoutCells:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

