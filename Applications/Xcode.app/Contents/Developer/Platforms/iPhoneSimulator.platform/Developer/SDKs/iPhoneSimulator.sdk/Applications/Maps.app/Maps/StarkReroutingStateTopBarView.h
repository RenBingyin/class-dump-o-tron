//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface StarkReroutingStateTopBarView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIActivityIndicatorView *_spinner;
    _Bool _animatingAppearance;
    long long _displayedLightLevel;
}

@property(nonatomic) long long displayedLightLevel; // @synthesize displayedLightLevel=_displayedLightLevel;
- (void).cxx_destruct;
- (void)getFramesForTitleLabel:(out struct CGRect *)arg1 spinner:(out struct CGRect *)arg2 messageLabel:(out struct CGRect *)arg3 withCenteredTitleAndMessage:(_Bool)arg4;
- (void)_animateDisappearanceOfMessage;
- (void)_animateAppearanceOfMessage;
- (void)layoutSubviews;
@property(nonatomic) _Bool showsDataConnectionMessage;
- (void)_updateFromStyleValues;
- (void)willMoveToWindow:(id)arg1;
- (void)_fadeViewIfNeeded:(id)arg1 forChanges:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

