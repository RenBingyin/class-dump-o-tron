//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@class UIView;

@interface UIAccessibilityElementMockView : UIAccessibilityElement
{
    UIView *_view;
    id <UIAccessibilityElementMockViewDelegateProtocol> _delegate;
    long long _subviewIndex;
}

@property(nonatomic) long long subviewIndex; // @synthesize subviewIndex=_subviewIndex;
@property(nonatomic) id <UIAccessibilityElementMockViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (_Bool)_accessibilityIsScannerElement;
- (int)_accessibilityScannerGroupTraits;
- (_Bool)_accessibilityProvidesScannerGroupElements;
- (_Bool)_accessibilityIsScannerGroup;
- (id)_accessibilityScannerGroupElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)description;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (void)dealloc;
- (id)_accessibilityUserTestingParent;
- (void)setAccessibilityContainer:(id)arg1;
- (long long)_accessibilityPageControlIndex;
- (long long)_accessibilityPageControlCount;
- (_Bool)becomeFirstResponder;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (id)_accessibilityTextViewTextOperationResponder;
- (_Bool)_accessibilityScrollToVisible;
- (id)accessibilityContainerElements;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (struct CGPoint)accessibilityActivationPoint;
- (id)_accessibilityUserTestingElementType;
- (id)accessibilityValue;
- (id)accessibilityIdentifier;
- (id)accessibilityIdentification;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityLanguage;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)revalidate;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)_accessibilitySupportsActivateAction;
- (void)_accessibilitySetValue:(id)arg1;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (id)_accessibilityScrollAncestor;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

@end

