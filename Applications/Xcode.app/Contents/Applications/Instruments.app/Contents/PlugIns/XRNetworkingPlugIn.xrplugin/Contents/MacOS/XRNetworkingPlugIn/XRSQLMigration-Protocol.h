//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol XRSQLMigration
- (void)up:(struct sqlite3 *)arg1 newVersion:(int)arg2 isExisting:(BOOL)arg3;
- (int)latestVersion;
@end

