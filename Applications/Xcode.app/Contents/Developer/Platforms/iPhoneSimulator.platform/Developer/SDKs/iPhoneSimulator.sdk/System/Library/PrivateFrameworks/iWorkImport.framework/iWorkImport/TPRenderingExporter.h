//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

@class TPPdfHyperlinkController;

__attribute__((visibility("hidden")))
@interface TPRenderingExporter : TSARenderingExporter
{
    TPPdfHyperlinkController *mHyperlinkController;
    unsigned long long mPageIndex;
    unsigned long long mPageCount;
}

- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (_Bool)hasMoreThanOnePageToPrint;
- (unsigned long long)pageCount;
- (double)progressForCurrentPage;
- (double)totalProgess;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (id)currentInfos;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;

@end

