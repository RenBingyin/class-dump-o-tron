//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VOTElementManagementProtocol.h"

@class NSString, VOTElement;

@interface VOTElementManagerTV : NSObject <VOTElementManagementProtocol>
{
    VOTElement *_firstResponder;
    VOTElement *_currentElement;
    VOTElement *_currentApplication;
    NSString *_lastHeaderText;
    id <VOTElementUpdateProtocol> updateDelegate;
}

@property(nonatomic) id <VOTElementUpdateProtocol> updateDelegate; // @synthesize updateDelegate;
- (void)moveToElementMatchingRotorType:(int)arg1 inDirection:(long long)arg2;
- (void)systemServerDied;
- (_Bool)isReadingAll;
- (_Bool)shouldAllowSpeaking;
- (void)updateApplicationAndSpeak:(id)arg1;
- (void)updateApplication;
- (struct CGRect)currentLineFrame;
- (void)updateCurrentElementFrame;
- (_Bool)allowsSystemControlEvent;
- (void)handlePlayPauseButtonPress;
- (void)handleStateReset;
- (void)handleHomeButtonPress;
- (void)handleEvent:(id)arg1;
- (id)currentApplication;
- (id)currentElement;
- (void)sendRequest:(id)arg1;
- (void)_handleKeyboardKeySelectedNotification:(id)arg1;
- (void)_handleAnnouncementNotification:(id)arg1;
- (id)_headerTextForElement:(id)arg1;
- (void)_handleActiveControlUpdated:(id)arg1;
- (void)_handleFirstResponderChangedNotification:(id)arg1;
- (void)_handleScreenChangedNotification:(id)arg1;
- (void)handleNotification:(int)arg1 withData:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

