//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableURLRequest, NSString, NSURL, NSURLRequest, NSURLResponse, WebArchive, WebFrame, WebResource;

@interface WebDataSource : NSObject
{
    void *_private;
}

+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;
+ (void)initialize;
+ (id)_repTypesAllowImageTypeOmission:(_Bool)arg1;
- (void)addSubresource:(id)arg1;
- (id)subresourceForURL:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *subresources;
@property(readonly, nonatomic) WebResource *mainResource;
@property(readonly, nonatomic) WebArchive *webArchive;
@property(readonly, nonatomic) NSURL *unreachableURL;
@property(readonly, copy, nonatomic) NSString *pageTitle;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, copy, nonatomic) NSString *textEncodingName;
@property(readonly, nonatomic) NSURLResponse *response;
@property(readonly, nonatomic) NSMutableURLRequest *request;
@property(readonly, nonatomic) NSURLRequest *initialRequest;
@property(readonly, nonatomic) WebFrame *webFrame;
@property(readonly, nonatomic) id <WebDocumentRepresentation> representation;
@property(readonly, copy, nonatomic) NSData *data;
- (void)finalize;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (void)_setRepresentation:(id)arg1;
- (id)dataSourceDelegate;
- (void)setDataSourceDelegate:(id)arg1;
- (void)_setAllowToBeMemoryMapped;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setDeferMainResourceDataLoad:(_Bool)arg1;
- (_Bool)_transferApplicationCache:(id)arg1;
- (id)_responseMIMEType;
- (void)_addSubframeArchives:(id)arg1;
- (id)_mainDocumentError;
- (id)_initWithDocumentLoader:(PassRefPtr_a1b5a79e)arg1;
- (struct DocumentLoader *)_documentLoader;
- (void)_makeRepresentation;
- (_Bool)_isDocumentHTML;
- (id)_webView;
- (id)_URL;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(_Bool)arg2;
- (void)_revertToProvisionalState;
- (void)_setMainDocumentError:(id)arg1;
- (void)_receivedData:(id)arg1;
- (void)_finishedLoading;

@end

