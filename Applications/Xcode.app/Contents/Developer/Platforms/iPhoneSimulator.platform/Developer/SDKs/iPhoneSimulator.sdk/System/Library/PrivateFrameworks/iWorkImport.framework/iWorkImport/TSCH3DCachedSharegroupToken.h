//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DSharegroupToken.h>

#import "TSCH3DSharegroupDelayCheckerParent.h"

@class TSCH3DGLSharegroup, TSCH3DSharegroupDelayChecker;

__attribute__((visibility("hidden")))
@interface TSCH3DCachedSharegroupToken : TSCH3DSharegroupToken <TSCH3DSharegroupDelayCheckerParent>
{
    TSCH3DSharegroupDelayChecker *mChecker;
    TSCH3DGLSharegroup *mSharegroup;
}

- (void)willCheckCondition;
- (void)releaseSharegroup:(id)arg1;
- (void)flushTokenSharegroup;
- (void)deleteTokenSharegroup;
- (void)didRemoveAllInterests;
- (id)tokenSharegroup;
- (void)dealloc;
- (id)init;

@end

