//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIATarget, UIThreadSafeMutableDictionary;

@interface UIAutomationObjCBridge : NSObject
{
    struct OpaqueJSContext *_context;
    UIThreadSafeMutableDictionary *_classDictionary;
    id _delegate;
    id _logger;
    UIATarget *_localTarget;
}

+ (char *)createJavaScriptNameFromSelector:(SEL)arg1;
+ (id)sharedInstance;
@property UIATarget *localTarget; // @synthesize localTarget=_localTarget;
@property(retain) id logger; // @synthesize logger=_logger;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property(retain) UIThreadSafeMutableDictionary *classDictionary; // @synthesize classDictionary=_classDictionary;
@property struct OpaqueJSContext *context; // @synthesize context=_context;
- (struct OpaqueJSContext *)_initializeContext;
- (void)_addUIAutomationConstants;
- (void)_addUIAutomationConstantWithName:(const char *)arg1 value:(double)arg2 andGlobalObject:(struct OpaqueJSValue *)arg3;
- (struct OpaqueJSValue *)JSValueFromContext:(struct OpaqueJSContext *)arg1 withObjCObject:(id)arg2 exception:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)globalObject;
- (void)reset;
- (struct OpaqueJSContext *)initializeContextWithDelegate:(id)arg1 andLogger:(id)arg2;
- (void)dealloc;
- (id)init;

@end

