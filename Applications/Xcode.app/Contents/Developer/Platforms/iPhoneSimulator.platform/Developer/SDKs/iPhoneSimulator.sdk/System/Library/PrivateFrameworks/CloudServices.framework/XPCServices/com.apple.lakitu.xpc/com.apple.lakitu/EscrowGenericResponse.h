//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LakituResponse.h"

@class NSString;

@interface EscrowGenericResponse : LakituResponse
{
}

@property(readonly, nonatomic) long long errorCode;
@property(readonly, nonatomic) NSString *message;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) long long version;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

