//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, NSURL, UIAlertView, UIView, UIWebPDFViewHandler;

@protocol UIWebPDFViewHandlerDelegate

@optional
- (UIAlertView *)alertViewForUIWebPDFViewHandler:(UIWebPDFViewHandler *)arg1;
- (double)minimumVerticalContentOffsetForPDFViewHandler:(UIWebPDFViewHandler *)arg1;
- (UIView *)hostViewForLinkSheet:(UIWebPDFViewHandler *)arg1;
- (NSArray *)pdfViewHandler:(UIWebPDFViewHandler *)arg1 actionsForURL:(NSURL *)arg2 suggestedActions:(NSArray *)arg3;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(UIWebPDFViewHandler *)arg1;
- (void)highlightSearchResultBounds:(struct CGRect)arg1 resultRects:(NSArray *)arg2 contentViews:(NSArray *)arg3 forPDFViewHandler:(UIWebPDFViewHandler *)arg4;
- (NSString *)passwordForPDFViewHandler:(UIWebPDFViewHandler *)arg1;
- (struct CGPoint)originForPDFPageLabelViewWithHandler:(UIWebPDFViewHandler *)arg1 proposedOrigin:(struct CGPoint)arg2;
- (struct CGRect)frameForPDFViewWithHandler:(UIWebPDFViewHandler *)arg1 proposedFrame:(struct CGRect)arg2;
- (void)pdfViewHandler:(UIWebPDFViewHandler *)arg1 linkClicked:(NSURL *)arg2;
- (void)pdfViewHandler:(UIWebPDFViewHandler *)arg1 willClickLink:(NSURL *)arg2;
@end

