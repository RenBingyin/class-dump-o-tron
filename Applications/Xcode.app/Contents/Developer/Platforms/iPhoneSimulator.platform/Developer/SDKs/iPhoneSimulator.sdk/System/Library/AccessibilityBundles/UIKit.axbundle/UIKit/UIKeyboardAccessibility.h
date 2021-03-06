//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UIKeyboardAccessibility_super.h>

@interface UIKeyboardAccessibility : __UIKeyboardAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (void)_voiceOverStatus:(id)arg1;
- (struct CGRect)accessibilityFrame;
- (void)dictationRecognitionFailed;
- (void)insertDictationResult:(id)arg1;
- (_Bool)_accessibilityTriggerDictationFromPath:(id)arg1;
- (_Bool)_accessibilityKeyboardSupportsGestureMode;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (_Bool)_accessibilitySwitchToGestureMode:(_Bool)arg1;
- (_Bool)_axDeleteByWord;
- (_Bool)_axDeleteByCharacter;
- (_Bool)_axShiftLock;
- (_Bool)_axShift;
- (_Bool)_axAdvanceInternationalKeyboard:(_Bool)arg1;
- (_Bool)_axAdvanceKeyboardSuggestion:(_Bool)arg1;
- (_Bool)_axEnterTextValue:(id)arg1;
- (_Bool)_axCommitWord;
- (_Bool)_axAdvanceKeyboardPlane:(_Bool)arg1;
- (_Bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;

@end

