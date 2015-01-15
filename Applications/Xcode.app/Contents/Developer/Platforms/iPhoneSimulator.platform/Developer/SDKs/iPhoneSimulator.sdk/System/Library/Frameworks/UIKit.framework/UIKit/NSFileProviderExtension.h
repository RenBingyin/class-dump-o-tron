//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSExtensionRequestHandling.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface NSFileProviderExtension : NSObject <NSExtensionRequestHandling>
{
    NSObject<OS_dispatch_queue> *_extensionDispatchQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSURL *_memberQueueDocumentStorageURL;
    NSString *_memberQueueProviderIdentifier;
}

+ (id)_relativeComponentsOfURL:(id)arg1 fromBaseURL:(id)arg2;
+ (id)_resourceIDOfURL:(id)arg1 outError:(id *)arg2;
+ (id)placeholderURLForURL:(id)arg1;
+ (_Bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *memberQueueProviderIdentifier; // @synthesize memberQueueProviderIdentifier=_memberQueueProviderIdentifier;
@property(retain, nonatomic) NSURL *memberQueueDocumentStorageURL; // @synthesize memberQueueDocumentStorageURL=_memberQueueDocumentStorageURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)stopProvidingItemAtURL:(id)arg1;
- (void)itemChangedAtURL:(id)arg1;
- (void)startProvidingItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)providePlaceholderAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)persistentIdentifierForItemAtURL:(id)arg1;
- (id)URLForItemWithPersistentIdentifier:(id)arg1;
- (id)documentStorageURL;
- (id)providerIdentifier;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

