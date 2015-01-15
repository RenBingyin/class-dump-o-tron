//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOMapServiceCompletionTicket.h"

@class GEOMapServiceTraits, GEOSearchRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOAutoCompleteTicket : NSObject <GEOMapServiceCompletionTicket>
{
    GEOSearchRequest *_searchRequest;
    GEOMapServiceTraits *_traits;
}

@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
- (_Bool)matchesFragment:(id)arg1;
- (void)cancel;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAutoCompleteRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

