//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AASigningSession : NSObject
{
    NSString *_certURL;
    NSString *_sessionURL;
    int _error;
}

@property(readonly, nonatomic) int error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)dealloc;
- (id)signatureForData:(id)arg1;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;

@end

