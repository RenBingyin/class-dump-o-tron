//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface SFCircleProgressView : UIView
{
}

+ (Class)layerClass;
- (double)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
@property(nonatomic) _Bool showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

