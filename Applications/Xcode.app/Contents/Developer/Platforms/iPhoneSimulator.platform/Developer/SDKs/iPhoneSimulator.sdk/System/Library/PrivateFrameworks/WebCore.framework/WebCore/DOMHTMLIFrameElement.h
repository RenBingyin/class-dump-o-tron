//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class DOMAbstractView, DOMDocument, NSString;

@interface DOMHTMLIFrameElement : DOMHTMLElement
{
}

@property(readonly) DOMAbstractView *contentWindow;
@property(readonly) DOMDocument *contentDocument;
@property(copy) NSString *width;
- (void)setSrcdoc:(id)arg1;
- (id)srcdoc;
@property(copy) NSString *src;
@property(copy) NSString *scrolling;
- (void)setSandbox:(id)arg1;
- (id)sandbox;
@property(copy) NSString *name;
@property(copy) NSString *marginWidth;
@property(copy) NSString *marginHeight;
@property(copy) NSString *longDesc;
@property(copy) NSString *height;
@property(copy) NSString *frameBorder;
@property(copy) NSString *align;
- (int)structuralComplexityContribution;

@end

