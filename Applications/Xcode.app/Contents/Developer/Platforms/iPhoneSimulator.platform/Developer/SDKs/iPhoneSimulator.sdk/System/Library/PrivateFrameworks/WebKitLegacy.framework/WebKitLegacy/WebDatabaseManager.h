//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WebDatabaseManager : NSObject
{
}

+ (void)scheduleEmptyDatabaseRemoval;
+ (void)removeEmptyDatabaseFiles;
+ (id)sharedWebDatabaseManager;
+ (void)endBackgroundTask;
+ (void)startBackgroundTask;
+ (void)didFinishLastTransaction;
+ (void)willBeginFirstTransaction;
- (_Bool)deleteDatabase:(id)arg1 withOrigin:(id)arg2;
- (_Bool)deleteOrigin:(id)arg1;
- (void)deleteAllDatabases;
- (id)detailsForDatabase:(id)arg1 withOrigin:(id)arg2;
- (id)databasesWithOrigin:(id)arg1;
- (id)origins;
- (id)init;

@end

