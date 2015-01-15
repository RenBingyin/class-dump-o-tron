//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSMutableArray, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface MPURatingControl : UIControl
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSMutableArray *_imageViews;
    id <MPURatingControlDelegate> _delegate;
    double _rating;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

+ (id)ratingDotImage;
+ (id)ratingStarImage;
@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) __weak id <MPURatingControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateImageViewsForRatingAnimated:(_Bool)arg1;
- (void)setRating:(double)arg1 animated:(_Bool)arg2;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (double)ratingValueForLocationInView:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

