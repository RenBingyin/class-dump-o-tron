//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BKSProcess;

@protocol BKSProcessDelegate <NSObject>
- (void)process:(BKSProcess *)arg1 isBeingDebugged:(_Bool)arg2;
- (void)processWillExpire:(BKSProcess *)arg1;
- (void)process:(BKSProcess *)arg1 taskStateDidChange:(int)arg2;
@end

