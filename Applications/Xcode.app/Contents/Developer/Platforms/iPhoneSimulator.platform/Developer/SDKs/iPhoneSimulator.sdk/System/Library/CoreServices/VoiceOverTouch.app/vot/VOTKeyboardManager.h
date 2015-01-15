//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SCRCTargetSelectorTimer, VOTKeyInfo;

@interface VOTKeyboardManager : NSObject
{
    NSDictionary *_keyboardCommandsTable;
    NSDictionary *_singleLetterCommandsTable;
    NSString *_lastLayout;
    NSDictionary *_layoutToKeyboardMap;
    NSDictionary *_keyboardMap;
    unsigned int _currentModifiers;
    _Bool _controlKeyDown;
    NSString *_lastCommand;
    SCRCTargetSelectorTimer *_keyRepeatTimer;
    unsigned int _keyboardHelpMask;
    _Bool _isQuickNavOn;
    SCRCTargetSelectorTimer *_quickNavRepostTimer;
    SCRCTargetSelectorTimer *_quickNavKeyTimer;
    unsigned long long _quickNavStateMask;
    unsigned long long _quickNavLastDownState;
    _Bool _quickNavDidSendDown;
    _Bool _capsLockOn;
    _Bool _captureModeEnabled;
    _Bool _explictlyEnabledQuickNav;
    VOTKeyInfo *_keyDownInfo;
}

+ (id)keyboardManager;
+ (void)initialize;
@property(nonatomic) _Bool explictlyEnabledQuickNav; // @synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav;
@property(readonly, nonatomic) _Bool isQuickNavOn; // @synthesize isQuickNavOn=_isQuickNavOn;
@property(nonatomic) _Bool captureModeEnabled; // @synthesize captureModeEnabled=_captureModeEnabled;
- (void)_postEvent:(id)arg1;
- (void)_handleQuickNavPressTimer:(id)arg1;
- (void)_handleQuickNavPress:(id)arg1;
- (void)_handleQuickNavDownArrowRepostPress:(id)arg1;
- (void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned int)arg3 keyFlags:(unsigned short)arg4 keyDown:(_Bool)arg5 source:(unsigned short)arg6;
- (id)_voiceOverCommandForKeyInfo:(id)arg1;
- (void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowInfo:(id)arg3;
- (void)_keyRepeat:(id)arg1;
- (void)_handleKeyboardKeyEvent:(id)arg1;
- (void)_updateEventFlags:(id)arg1;
- (void)_handleAnnouncementsForKeyInfo:(id)arg1;
- (_Bool)_handleArrowKeyEvent:(id)arg1;
- (void)_initializeQuickNav;
- (_Bool)_dispatchCommandForKeyInfo:(id)arg1;
- (id)_localizeKeyboardString:(id)arg1;
- (void)setKeyDownInfo:(id)arg1;
- (void)updateQuickNavState:(_Bool)arg1;
- (id)keyDownInfo;
- (void)postEvent:(id)arg1;
- (id)singleLetterCommandForKeyInfo:(id)arg1;
- (id)keyboardCommandForKeyInfo:(id)arg1;
- (void)loadKeyboardMap;
- (void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(int)arg2;
- (id)init;
- (void)dealloc;

@end

