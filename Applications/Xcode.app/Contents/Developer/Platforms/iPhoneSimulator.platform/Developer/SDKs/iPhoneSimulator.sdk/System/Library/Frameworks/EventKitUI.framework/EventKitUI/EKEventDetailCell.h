//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class EKEvent;

__attribute__((visibility("hidden")))
@interface EKEventDetailCell : UITableViewCell
{
    EKEvent *_event;
    _Bool _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

+ (double)detailsCellDefaultHeight;
+ (double)detailsPostLabelSpace;
+ (double)detailsBottomVerticalInset;
+ (double)detailsTopVerticalInset;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1;
+ (id)_bodyFontAtDefaultSize;
- (void).cxx_destruct;
- (_Bool)needsLayoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)sizeToFit;
- (_Bool)update;
@property(readonly, nonatomic) _Bool isEditable;
- (void)setEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;

@end

