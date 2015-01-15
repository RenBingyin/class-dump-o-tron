//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HDJournalEntry;

@protocol HDHealthDatabase <NSObject>
- (void)addJournalEntry:(HDJournalEntry *)arg1;
- (_Bool)performJournalMergeUsingBlock:(_Bool (^)(HDSQLiteDatabase *))arg1 errorHandler:(void (^)(NSError *))arg2;
- (_Bool)performTransactionWithOptions:(unsigned long long)arg1 usingBlock:(_Bool (^)(HDSQLiteDatabase *))arg2 errorHandler:(void (^)(NSError *))arg3;
@end

