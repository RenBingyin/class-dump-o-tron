//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseResult.h>

@class ML3DatabaseDistantConnection, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ML3DatabaseDistantResult : ML3DatabaseResult
{
    NSArray *_cachedRows;
    ML3DatabaseDistantConnection *_distantConnection;
    NSString *_sql;
    NSArray *_parameters;
}

@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) ML3DatabaseDistantConnection *distantConnection; // @synthesize distantConnection=_distantConnection;
- (void).cxx_destruct;
- (_Bool)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)_remoteEnumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (id)columnNameIndexMap;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithStatement:(id)arg1;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;

@end

