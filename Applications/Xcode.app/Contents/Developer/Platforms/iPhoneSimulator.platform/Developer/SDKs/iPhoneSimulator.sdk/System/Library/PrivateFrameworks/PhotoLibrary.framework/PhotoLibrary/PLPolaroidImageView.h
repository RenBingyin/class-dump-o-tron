//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLImageView.h>

@class UIImage, UILabel, UIView;

@interface PLPolaroidImageView : PLImageView
{
    UIView *_posterView;
    UILabel *_nameLabel;
    double _thinBorderWidth;
    _Bool _polaroidBorderVisible;
    struct CGRect _roi;
}

+ (Class)layerClass;
- (void)_updatePolaroidFramePath:(_Bool)arg1;
- (void)_adjustLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 allowRounding:(_Bool)arg2;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;
- (void)layoutSubviews;
- (void)setName:(id)arg1;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect)arg2;
@property(retain, nonatomic) UIImage *posterImage;
- (void)setTransitionProgress:(double)arg1;
- (void)setBorderAndAccessoriesVisible:(_Bool)arg1;
- (double)_tunedProgress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

