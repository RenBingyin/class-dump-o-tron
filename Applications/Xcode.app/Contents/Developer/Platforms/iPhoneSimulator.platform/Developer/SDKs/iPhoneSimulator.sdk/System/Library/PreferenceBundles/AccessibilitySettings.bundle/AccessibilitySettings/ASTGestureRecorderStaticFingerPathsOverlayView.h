//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASTGestureRecorderHelperView.h"

@class UIColor;

@interface ASTGestureRecorderStaticFingerPathsOverlayView : ASTGestureRecorderHelperView
{
    UIColor *_backgroundGradientPatternColor;
}

@property(retain, nonatomic) UIColor *backgroundGradientPatternColor; // @synthesize backgroundGradientPatternColor=_backgroundGradientPatternColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)_backgroundGradientPatternColorNeedsRefresh;
- (void)_replacedDataSource:(id)arg1 withDataSource:(id)arg2;
- (void)_replacedStyleProvider:(id)arg1 withStyleProvider:(id)arg2;
- (void)reloadAllFingerPaths;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

