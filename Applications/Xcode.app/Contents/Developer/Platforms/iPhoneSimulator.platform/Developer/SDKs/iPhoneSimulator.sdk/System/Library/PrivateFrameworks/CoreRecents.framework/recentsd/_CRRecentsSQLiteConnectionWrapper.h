//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRSQLiteConnection;

@interface _CRRecentsSQLiteConnectionWrapper : NSObject
{
    unsigned long long _refcount;
    _Bool _writer;
    CRSQLiteConnection *_connection;
}

+ (id)wrapperWithConnection:(id)arg1 forWriting:(_Bool)arg2;
@property(retain, nonatomic) CRSQLiteConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool writer; // @synthesize writer=_writer;
- (unsigned long long)decrementRefcount;
- (unsigned long long)incrementRefcount;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 forWriting:(_Bool)arg2;

@end

