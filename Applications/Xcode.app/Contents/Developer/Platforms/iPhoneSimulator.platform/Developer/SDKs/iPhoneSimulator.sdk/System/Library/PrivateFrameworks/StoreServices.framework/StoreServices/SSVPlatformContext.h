//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface SSVPlatformContext : NSObject <NSCopying>
{
    NSString *_lookupURLString;
    id <SSVSAPContext> _sapContext;
    NSArray *_signedHeaders;
    NSArray *_signedQueryParameters;
    NSString *_unpersonalizedLookupURLString;
}

@property(readonly, nonatomic) NSString *unpersonalizedLookupURLString; // @synthesize unpersonalizedLookupURLString=_unpersonalizedLookupURLString;
@property(readonly, nonatomic) NSArray *signedQueryParameters; // @synthesize signedQueryParameters=_signedQueryParameters;
@property(readonly, nonatomic) NSArray *signedHeaders; // @synthesize signedHeaders=_signedHeaders;
@property(retain, nonatomic) id <SSVSAPContext> SAPContext; // @synthesize SAPContext=_sapContext;
@property(readonly, nonatomic) NSString *lookupURLString; // @synthesize lookupURLString=_lookupURLString;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDictionary *bagDictionary;
- (id)initWithBagDictionary:(id)arg1;

@end

