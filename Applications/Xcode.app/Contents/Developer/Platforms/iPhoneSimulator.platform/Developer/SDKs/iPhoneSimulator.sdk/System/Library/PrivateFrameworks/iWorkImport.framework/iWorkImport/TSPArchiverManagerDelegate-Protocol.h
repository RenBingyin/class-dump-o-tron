//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSPArchiver, TSPArchiverManager, TSPObject;

@protocol TSPArchiverManagerDelegate <NSObject>

@optional
- (_Bool)archiverManager:(TSPArchiverManager *)arg1 shouldDelayArchivingObject:(TSPObject *)arg2;
- (void)archiverManager:(TSPArchiverManager *)arg1 didCreateArchiver:(TSPArchiver *)arg2;
@end

