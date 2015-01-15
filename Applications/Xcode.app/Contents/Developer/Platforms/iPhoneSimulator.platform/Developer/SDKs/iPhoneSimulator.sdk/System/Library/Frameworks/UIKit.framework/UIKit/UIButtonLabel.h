//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel
{
    _Bool _reverseShadow;
    UIButton *_button;
}

+ (id)_defaultAttributes;
- (void)invalidateIntrinsicContentSize;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_defaultAttributes;
- (struct CGSize)intrinsicContentSize;
- (void)setReverseShadow:(_Bool)arg1;
- (struct CGSize)shadowOffset;
- (void)setTextAlignment:(long long)arg1;
- (void)setAdjustsFontSizeToFitWidth:(_Bool)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)_setMinimumFontSize:(double)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setFont:(id)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (void)_setWantsAutolayout;

@end

