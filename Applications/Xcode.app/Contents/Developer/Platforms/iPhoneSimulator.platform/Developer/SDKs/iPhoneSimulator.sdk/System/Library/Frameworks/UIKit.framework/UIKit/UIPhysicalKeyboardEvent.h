//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPhysicalButtonsEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent
{
    int _inputFlags;
    NSString *_modifiedInput;
    NSString *_unmodifiedInput;
    NSString *_shiftModifiedInput;
    NSString *_commandModifiedInput;
    NSString *_markedInput;
    long long _modifierFlags;
    NSString *_privateInput;
}

+ (id)_eventWithInput:(id)arg1 inputFlags:(int)arg2;
@property(retain, nonatomic) NSString *_privateInput; // @synthesize _privateInput;
@property(nonatomic) int _inputFlags; // @synthesize _inputFlags;
@property(nonatomic) long long _modifierFlags; // @synthesize _modifierFlags;
@property(retain, nonatomic) NSString *_markedInput; // @synthesize _markedInput;
@property(retain, nonatomic) NSString *_commandModifiedInput; // @synthesize _commandModifiedInput;
@property(retain, nonatomic) NSString *_shiftModifiedInput; // @synthesize _shiftModifiedInput;
@property(retain, nonatomic) NSString *_unmodifiedInput; // @synthesize _unmodifiedInput;
@property(retain, nonatomic) NSString *_modifiedInput; // @synthesize _modifiedInput;
@property(readonly, nonatomic) long long _gsModifierFlags;
- (void)_privatizeInput;
- (void)dealloc;
- (id)_cloneEvent;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_matchesKeyCommand:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1 keyboard:(struct __GSKeyboard *)arg2;
@property(readonly, nonatomic) long long _keyCode;
@property(readonly, nonatomic) _Bool _isKeyDown;
- (long long)type;

@end

