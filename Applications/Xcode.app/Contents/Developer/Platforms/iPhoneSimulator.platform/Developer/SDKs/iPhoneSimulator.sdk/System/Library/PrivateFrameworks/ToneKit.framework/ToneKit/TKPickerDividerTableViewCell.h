//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIColor, UIView;

@interface TKPickerDividerTableViewCell : UITableViewCell
{
    UIView *_dividerView;
    long long _contentBackdropOverlayBlendMode;
}

@property(nonatomic, setter=_setContentBackdropOverlayBlendMode:) long long _contentBackdropOverlayBlendMode; // @synthesize _contentBackdropOverlayBlendMode;
@property(retain, nonatomic, setter=_setDividerView:) UIView *_dividerView; // @synthesize _dividerView;
- (struct CGRect)_dividerViewFrame;
- (void)layoutSubviews;
- (void)setSeparatorStyle:(long long)arg1;
@property(nonatomic) long long contentBackdropOverlayBlendMode;
@property(retain, nonatomic) UIColor *contentBackgroundColor;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

