//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LakituRequest.h"

@class NSString;

@interface EscrowGenericRequest : LakituRequest
{
    NSString *_baseURL;
    NSString *baseURL;
    NSString *label;
}

+ (Class)responseClass;
@property(retain, nonatomic) NSString *label; // @synthesize label;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)bodyDictionary;

@end

