//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface ADResourceDownloadJob : NSObject
{
    NSURLRequest *_request;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _authenticationBlock;
    unsigned long long _maximumSize;
    NSData *_clientAuditToken;
    NSURLResponse *_response;
    NSMutableData *_data;
    long long _status;
    NSString *_mimeType;
    NSString *_UTI;
    id _userData;
    double _enqueueTime;
    double _startTime;
    double _completeTime;
    double _responseTime;
    NSURLConnection *_connection;
}

+ (id)downloadJobWithRequest:(id)arg1 maximumSize:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) double completeTime; // @synthesize completeTime=_completeTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double enqueueTime; // @synthesize enqueueTime=_enqueueTime;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property(nonatomic) unsigned long long maximumSize; // @synthesize maximumSize=_maximumSize;
@property(copy, nonatomic) CDUnknownBlockType authenticationBlock; // @synthesize authenticationBlock=_authenticationBlock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)description;
@property(readonly, nonatomic) double totalTime;
- (void)dealloc;

@end
