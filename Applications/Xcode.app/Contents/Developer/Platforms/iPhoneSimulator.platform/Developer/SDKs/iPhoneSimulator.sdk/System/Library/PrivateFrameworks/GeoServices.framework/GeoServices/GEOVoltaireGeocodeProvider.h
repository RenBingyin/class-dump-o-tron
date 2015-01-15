//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOGeocodeProvider.h>

#import "PBRequesterDelegate.h"

@class GEORequester, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    _Bool _isForwardGeocodeRequest;
    _Bool _isBatchRequest;
    _Bool _cancelled;
}

+ (id)batchReverseGeocoderURL;
+ (id)reverseGeocoderURL;
+ (id)forwardGeocoderURL;
+ (id)providerName;
- (void)cancel;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)_batchRequesterDidFinish:(id)arg1;
- (void)_singleRequesterDidFinish:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)reverseGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)forwardGeocode:(id)arg1 success:(CDUnknownBlockType)arg2 networkActivity:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (id)newRequester:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

