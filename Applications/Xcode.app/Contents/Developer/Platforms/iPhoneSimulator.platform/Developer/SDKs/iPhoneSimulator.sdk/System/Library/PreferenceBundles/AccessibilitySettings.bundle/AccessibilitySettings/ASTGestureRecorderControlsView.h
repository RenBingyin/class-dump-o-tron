//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ASTBiggerProgressView, UIButton;

__attribute__((visibility("hidden")))
@interface ASTGestureRecorderControlsView : UIView
{
    id <ASTGestureRecorderControlsViewDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    ASTBiggerProgressView *_progressView;
}

+ (double)defaultHeight;
@property(retain, nonatomic) id rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) id leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) id <ASTGestureRecorderControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonTapped:(id)arg1;
@property(nonatomic, getter=isRightButtonEnabled) _Bool rightButtonEnabled;
@property(nonatomic, getter=isLeftButtonEnabled) _Bool leftButtonEnabled;
- (void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(_Bool)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(_Bool)arg6 animationDuration:(double)arg7 completion:(CDUnknownBlockType)arg8;
- (void)layoutSubviews;
@property(nonatomic) float progress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

