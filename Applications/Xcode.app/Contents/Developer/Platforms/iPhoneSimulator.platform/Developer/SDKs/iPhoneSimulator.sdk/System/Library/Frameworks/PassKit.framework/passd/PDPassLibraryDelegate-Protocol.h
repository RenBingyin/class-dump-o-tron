//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PDPassLibrary;

@protocol PDPassLibraryDelegate <NSObject>
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)passbookUIServiceLaunched;
- (void)introduceDatabaseIntegrityProblem;
- (void)migrateData;
- (void)nukeStuff;
- (void)passLibrary:(PDPassLibrary *)arg1 requestedPassUpdate:(NSString *)arg2 handler:(void (^)(_Bool))arg3;
@end

