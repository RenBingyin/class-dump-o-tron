//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class AVAssetResourceLoadingRequest, NSObject<OS_dispatch_queue>, NSURL;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSURL *_certificateURL;
    NSURL *_keyServerURL;
    AVAssetResourceLoadingRequest *_resourceLoadingRequest;
    CDUnknownBlockType _responseBlock;
    _Bool _iTunesStoreRequest;
}

- (void).cxx_destruct;
- (id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1;
- (id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3;
- (void)_sendResponseBlockWithError:(id)arg1;
- (id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 error:(id *)arg3;
- (void)start;
- (void)main;
@property(getter=isITunesStoreRequest) _Bool ITunesStoreRequest;
@property(copy) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain) AVAssetResourceLoadingRequest *resourceLoadingRequest; // @synthesize resourceLoadingRequest=_resourceLoadingRequest;
@property(retain) NSURL *keyServerURL; // @synthesize keyServerURL=_keyServerURL;
@property(retain) NSURL *certificateURL; // @synthesize certificateURL=_certificateURL;
- (id)init;

@end

