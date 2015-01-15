//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class JaliscoImporter, NSDictionary, NSError, NSString;

@interface JaliscoUpdateOperation : CloudLibraryOperation
{
    NSError *_error;
    long long _reason;
    JaliscoImporter *_importer;
    NSString *_powerEventBeginName;
    NSString *_powerEventEndName;
    NSDictionary *_powerEventPayload;
    _Bool _initialImport;
}

@property(copy) NSDictionary *powerEventPayload; // @synthesize powerEventPayload=_powerEventPayload;
@property(copy) NSString *powerEventEndName; // @synthesize powerEventEndName=_powerEventEndName;
@property(copy) NSString *powerEventBeginName; // @synthesize powerEventBeginName=_powerEventBeginName;
@property(readonly, nonatomic, getter=isInitialImport) _Bool initialImport; // @synthesize initialImport=_initialImport;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
@property(readonly, nonatomic) float updateProgress;
- (void)performUpdate;
- (unsigned int)_serverDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;
- (void)endPerformUpdate;
- (void)beginPerformUpdate;
- (void)handleSuccess:(long long)arg1;
- (id)newImporter;
- (_Bool)preflightImport;
- (_Bool)includeHiddenItems;
- (long long)localDatabaseRevision;
- (id)connection;
- (id)queryFilterPercentEscaped;
- (void)main;
- (void)cancel;
- (void)setError:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setInitialImport:(_Bool)arg1;
- (id)initWithReason:(long long)arg1;

@end

