//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol NDSpringBoardAppObserver <NSObject>
- (void)applicationNoLongerInForeground:(NSString *)arg1;
- (void)applicationEnteredForeground:(NSString *)arg1;
- (void)applicationWasSuspended:(NSString *)arg1;
- (void)applicationBackgroundUpdatesTurnedOff:(NSString *)arg1;
- (void)applicationWasQuitFromAppSwitcher:(NSString *)arg1;
@end

