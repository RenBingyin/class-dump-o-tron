//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKit/PKPaymentAuthorizationParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : PKPaymentAuthorizationParam
{
    _Bool _animated;
    long long _dataType;
    NSError *_error;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;

@end

