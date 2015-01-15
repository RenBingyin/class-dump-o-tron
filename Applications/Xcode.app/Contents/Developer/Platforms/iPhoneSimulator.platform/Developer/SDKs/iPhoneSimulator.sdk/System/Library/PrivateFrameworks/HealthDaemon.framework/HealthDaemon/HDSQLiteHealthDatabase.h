//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDSQLiteDatabase.h>

@class NSString;

@interface HDSQLiteHealthDatabase : HDSQLiteDatabase
{
    NSString *_homeDirectoryPath;
}

+ (id)virtualFilesystemModule;
+ (void)_removeDatabases:(id)arg1 withHomeDirectoryPath:(id)arg2;
+ (void)removeProtectedDatabaseWithHomeDirectoryPath:(id)arg1;
+ (void)removeAllDatabasesWithHomeDirectoryPath:(id)arg1;
@property(copy, nonatomic) NSString *homeDirectoryPath; // @synthesize homeDirectoryPath=_homeDirectoryPath;
- (void).cxx_destruct;
- (_Bool)isProtectedDatabaseAttached;
- (void)detachProtectedDatabase;
- (_Bool)attachProtectedDatabaseWithError:(id *)arg1;
- (id)initWithHomeDirectoryPath:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;

@end

