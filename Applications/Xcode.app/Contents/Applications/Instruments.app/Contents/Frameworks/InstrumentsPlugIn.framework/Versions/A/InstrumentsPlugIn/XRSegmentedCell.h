//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSegmentedCell.h"

@interface XRSegmentedCell : NSSegmentedCell
{
    BOOL _hideBackground;
}

@property BOOL hideBackground; // @synthesize hideBackground=_hideBackground;
- (void)flashLabel;
- (double)_menuDelayTimeForSegment:(long long)arg1;
- (void)_drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSegment:(long long)arg1 inFrame:(struct CGRect)arg2 withView:(id)arg3;

@end

