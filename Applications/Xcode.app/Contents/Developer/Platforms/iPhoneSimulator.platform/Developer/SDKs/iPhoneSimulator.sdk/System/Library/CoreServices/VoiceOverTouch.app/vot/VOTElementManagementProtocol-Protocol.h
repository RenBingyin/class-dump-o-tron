//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, VOTElement, VOTEvent;

@protocol VOTElementManagementProtocol <NSObject>
@property(nonatomic) id <VOTElementUpdateProtocol> updateDelegate;
- (void)moveToElementMatchingRotorType:(int)arg1 inDirection:(long long)arg2;
- (VOTElement *)currentApplication;
- (VOTElement *)currentElement;
- (void)systemServerDied;
- (_Bool)isReadingAll;
- (_Bool)shouldAllowSpeaking;
- (void)updateApplicationAndSpeak:(NSNumber *)arg1;
- (void)updateApplication;
- (struct CGRect)currentLineFrame;
- (void)updateCurrentElementFrame;
- (_Bool)allowsSystemControlEvent;
- (void)handlePlayPauseButtonPress;
- (void)handleStateReset;
- (void)handleHomeButtonPress;
- (void)handleNotification:(int)arg1 withData:(NSData *)arg2;
- (void)handleEvent:(VOTEvent *)arg1;
@end

