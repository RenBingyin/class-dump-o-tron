//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAResponse.h"

@class NSArray, NSMutableArray;

@interface QuotaAppDetailsResponse : AAResponse
{
    NSMutableArray *_apps;
}

@property(readonly, nonatomic) NSArray *apps; // @synthesize apps=_apps;
- (id)description;
- (void)addApps:(id)arg1;
- (void)dealloc;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

