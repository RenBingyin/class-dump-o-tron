//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@interface UITableTextAccessibilityElement : UIAccessibilityElement
{
    id _attributeDelegate;
    SEL _selector;
    id textDelegate;
}

@property(nonatomic) id textDelegate; // @synthesize textDelegate;
- (id)_accessibilityCustomActions;
- (id)description;
- (id)_accessibilitySpeakThisString;
- (_Bool)_accessibilityIsSpeakThisElement;
- (id)_accessibilityEquivalenceTag;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (_Bool)_accessibilityIsAwayAlertElement;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (_Bool)accessibilityActivate;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (_Bool)_accessibilityIsInTableCell;
- (struct _NSRange)accessibilityRowRange;
- (_Bool)_accessibilityIsScannerElement;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLanguage;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_tableViewCellAttributeDelegate;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (id)_tableViewCellTextDelegate;
- (id)attributeDelegate;
- (void)setAttributeDelegate:(id)arg1;

@end

