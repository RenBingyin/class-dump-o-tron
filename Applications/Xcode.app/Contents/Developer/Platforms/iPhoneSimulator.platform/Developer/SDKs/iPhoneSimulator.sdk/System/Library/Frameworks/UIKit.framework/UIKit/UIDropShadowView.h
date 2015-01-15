//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView
{
    double _cornerRadius;
    UIView *_contentView;
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
}

@property(nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateShadowPath;
- (void)dealloc;
- (id)init;

@end

