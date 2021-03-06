//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, QLPrintPageRenderer;

@protocol QLPrintPageRendererDataSource <NSObject>
- (NSData *)printPageRenderer:(QLPrintPageRenderer *)arg1 pdfDataForPageAtIndex:(long long)arg2 printingDone:(_Bool *)arg3;
- (void)printPageRenderer:(QLPrintPageRenderer *)arg1 prepareForDrawingPages:(struct _NSRange)arg2;
- (long long)numberOfPagesInPrintPageRenderer:(QLPrintPageRenderer *)arg1;
@end

