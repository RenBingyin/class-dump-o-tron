//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject
{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}

- (id)exception;
- (id)functionName;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (id)_convertValueToObjcValue:(struct JSValue)arg1;
- (id)_initWithGlobalObject:(id)arg1 functionName:(struct String)arg2 exceptionValue:(struct JSValue)arg3;

@end

