//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "StarkButton.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface StarkButton : UIButton <StarkButton>
{
    double _screenScale;
    _Bool _usesMinimumWidth;
    long long _starkButtonCompositingStyle;
    long long _starkButtonHighlightStyle;
    long long _starkButtonSize;
    UIImage *_unmodifiedRegularStateImage;
    long long _displayedLightLevel;
    long long _starkTextWeight;
    long long _interactionModel;
}

+ (void)getTopButtonBarGlyphNormalImage:(out id *)arg1 darkerImage:(out id *)arg2 disabledImage:(out id *)arg3 fromImage:(id)arg4 lightLevel:(long long)arg5 scale:(double)arg6;
@property(nonatomic) long long interactionModel; // @synthesize interactionModel=_interactionModel;
@property(nonatomic) long long starkTextWeight; // @synthesize starkTextWeight=_starkTextWeight;
@property(nonatomic) long long displayedLightLevel; // @synthesize displayedLightLevel=_displayedLightLevel;
@property(retain, nonatomic) UIImage *unmodifiedRegularStateImage; // @synthesize unmodifiedRegularStateImage=_unmodifiedRegularStateImage;
@property(nonatomic) long long starkButtonSize; // @synthesize starkButtonSize=_starkButtonSize;
@property(nonatomic) long long starkButtonHighlightStyle; // @synthesize starkButtonHighlightStyle=_starkButtonHighlightStyle;
@property(nonatomic) long long starkButtonCompositingStyle; // @synthesize starkButtonCompositingStyle=_starkButtonCompositingStyle;
@property(nonatomic) _Bool usesMinimumWidth; // @synthesize usesMinimumWidth=_usesMinimumWidth;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)_updateAttributedTitles;
- (void)_updateBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_updateImagesFromUnmodifiedRegularImage;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)attributedStringForTitle:(id)arg1 state:(unsigned long long)arg2;
- (id)_currentStyleAttributesForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

