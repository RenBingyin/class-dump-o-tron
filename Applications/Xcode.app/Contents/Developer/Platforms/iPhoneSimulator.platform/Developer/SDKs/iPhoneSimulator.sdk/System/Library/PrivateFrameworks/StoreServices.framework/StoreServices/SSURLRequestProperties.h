//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSData, NSDictionary, NSInputStream, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <SSXPCCoding, NSCoding, NSCopying, NSMutableCopying>
{
    long long _allowedRetryCount;
    _Bool _allowsBootstrapCellularData;
    unsigned long long _cachePolicy;
    NSString *_clientAuditBundleIdentifier;
    NSData *_clientAuditTokenData;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    _Bool _isITunesStoreRequest;
    long long _kbsyncType;
    _Bool _largeDownload;
    unsigned long long _networkServiceType;
    NSDictionary *_requestParameters;
    BOOL _requiresExtendedValidationCertificates;
    _Bool _requiresHTTPS;
    _Bool _shouldDecodeResponse;
    _Bool _shouldDisableCellular;
    _Bool _shouldDisableCellularFallback;
    _Bool _shouldProcessProtocol;
    _Bool _shouldSendSecureToken;
    _Bool _shouldSetCookies;
    double _timeoutInterval;
    NSString *_urlBagKey;
    long long _urlBagType;
    CDUnknownBlockType _urlBagURLBlock;
    NSArray *_urls;
    NSArray *_userAgentComponents;
}

@property(readonly, copy) NSArray *URLs;
@property(readonly, copy) CDUnknownBlockType URLBagURLBlock;
@property(readonly) long long URLBagType;
@property(readonly) _Bool shouldDisableCellularFallback;
@property(readonly) _Bool shouldDisableCellular;
@property(readonly) _Bool shouldDecodeResponse;
@property(readonly) _Bool shouldAddKBSyncData;
@property(readonly) _Bool requiresHTTPS;
@property(readonly) _Bool requiresExtendedValidationCertificates;
@property(readonly) long long KBSyncType;
@property(readonly, getter=isLargeDownload) _Bool largeDownload;
@property(readonly, retain) NSInputStream *HTTPBodyStream;
- (id)copyURLRequest;
@property(readonly) _Bool canBeResolved;
@property(readonly) _Bool allowsBootstrapCellularData;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *userAgentComponents;
@property(readonly, retain) NSURL *URL;
@property(readonly, copy) NSString *URLBagKey;
@property(readonly) double timeoutInterval;
@property(readonly, copy) NSData *clientAuditTokenData;
@property(readonly, copy) NSString *clientAuditBundleIdentifier;
@property(readonly) _Bool shouldSetCookies;
@property(readonly) _Bool shouldSendSecureToken;
@property(readonly) _Bool shouldProcessProtocol;
@property(readonly, copy) NSDictionary *requestParameters;
@property(readonly) unsigned long long networkServiceType;
@property(readonly, getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property(readonly, copy) NSString *HTTPMethod;
@property(readonly, copy) NSDictionary *HTTPHeaders;
@property(readonly, copy) NSData *HTTPBody;
@property(readonly) long long expectedContentLength;
@property(readonly, copy) NSString *clientIdentifier;
@property(readonly) unsigned long long cachePolicy;
@property(readonly) long long allowedRetryCount;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (id)_initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

