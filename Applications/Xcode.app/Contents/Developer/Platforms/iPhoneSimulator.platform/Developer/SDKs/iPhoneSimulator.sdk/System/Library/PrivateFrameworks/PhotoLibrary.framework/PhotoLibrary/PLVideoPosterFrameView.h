//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface PLVideoPosterFrameView : UIView
{
    UIImageView *_imageView;
    unsigned long long _scaleMode;
}

@property(readonly, nonatomic) struct CGRect imageFrame;
- (id)imageView;
- (id)image;
- (void)setScaleMode:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

