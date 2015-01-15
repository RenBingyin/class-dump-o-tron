//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IBICCatalogDocument, NSString;

@interface IBICPasteboardManager : NSObject <DVTInvalidation>
{
    NSString *_localPasteboarParentIDType;
    IBICCatalogDocument *_document;
}

+ (id)pasteboardTypesForAcceptingCatalogItems;
+ (void)initialize;
@property(readonly) IBICCatalogDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)parentsOfDocumentLocalDragMovedItems:(id)arg1;
- (unsigned long long)dragOperationForDragInfo:(id)arg1 insertingIntoItem:(id)arg2 destinationAllowedOperations:(unsigned long long)arg3;
- (unsigned long long)dragItems:(id)arg1 inWindow:(id)arg2 withDraggedImageState:(id)arg3 mouseDownEvent:(id)arg4;
- (BOOL)canDragItems:(id)arg1;
- (void)addItems:(id)arg1 toPasteboard:(id)arg2;
- (id)pasteboardTypesForItems:(id)arg1;
- (id)decodeCatalogContentFromPasteboard:(id)arg1;
- (id)cobbleTogetherCatalogFromContentAtPath:(id)arg1;
- (void)importContentFromPaths:(id)arg1 intoCatalog:(id)arg2;
- (id)decodeCatalogItemsFromPasteboard:(id)arg1;
- (void)importContentFromPath:(id)arg1 intoCatalogFolder:(id)arg2 populatingImageRepPaths:(id)arg3;
- (void)importMultipartImages:(id)arg1 intoFolder:(id)arg2;
- (id)multipartImagesFromPaths:(id)arg1;
- (id)pathsFromPasteboard:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

