//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SUUserRatingView : UIView
{
    float _value;
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
}

+ (double)reflectionHeight;
+ (id)copyImageForRating:(float)arg1 backgroundColor:(id)arg2 style:(long long)arg3;
- (struct CGRect)_foregroundImageClipBounds;
- (void)layoutSubviews;
- (void)setValue:(float)arg1;
- (float)heightWithoutReflection;
- (id)initWithStyle:(long long)arg1;
- (id)initWithForeground:(id)arg1 background:(id)arg2;
- (id)init;

@end

