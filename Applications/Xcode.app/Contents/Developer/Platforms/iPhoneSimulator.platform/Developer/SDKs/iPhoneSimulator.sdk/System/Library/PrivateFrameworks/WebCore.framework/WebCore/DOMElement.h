//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMNode.h>

@class DOMCSSStyleDeclaration, NSString;

@interface DOMElement : DOMNode
{
}

- (void)remove;
- (_Bool)webkitMatchesSelector:(id)arg1;
- (_Bool)matches:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (id)querySelector:(id)arg1;
- (id)getElementsByClassName:(id)arg1;
- (void)scrollByPages:(int)arg1;
- (void)scrollByLines:(int)arg1;
- (void)scrollIntoViewIfNeeded:(_Bool)arg1;
- (void)scrollIntoView:(_Bool)arg1;
- (void)blur;
- (void)focus;
- (_Bool)hasAttributeNS:(id)arg1:(id)arg2;
- (_Bool)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (_Bool)hasAttribute:(id)arg1;
- (id)setAttributeNodeNS:(id)arg1;
- (id)getAttributeNodeNS:(id)arg1:(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1:(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (void)removeAttributeNS:(id)arg1:(id)arg2;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (void)setAttributeNS:(id)arg1:(id)arg2:(id)arg3;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (id)getAttributeNS:(id)arg1:(id)arg2;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByTagName:(id)arg1;
- (id)removeAttributeNode:(id)arg1;
- (id)setAttributeNode:(id)arg1;
- (id)getAttributeNode:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1:(id)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (id)getAttribute:(id)arg1;
- (id)webkitRegionOverset;
@property(readonly, copy) NSString *innerText;
@property(readonly) unsigned int childElementCount;
@property(readonly) DOMElement *nextElementSibling;
@property(readonly) DOMElement *previousElementSibling;
@property(readonly) DOMElement *lastElementChild;
@property(readonly) DOMElement *firstElementChild;
- (id)classList;
@property(copy) NSString *className;
@property(readonly) DOMElement *offsetParent;
@property(readonly) int scrollHeight;
@property(readonly) int scrollWidth;
@property int scrollTop;
@property int scrollLeft;
@property(readonly) int clientHeight;
@property(readonly) int clientWidth;
@property(readonly) int clientTop;
@property(readonly) int clientLeft;
@property(readonly) int offsetHeight;
@property(readonly) int offsetWidth;
@property(readonly) int offsetTop;
@property(readonly) int offsetLeft;
@property(readonly) DOMCSSStyleDeclaration *style;
@property(readonly, copy) NSString *tagName;
- (_Bool)isFocused;
- (id)_getURLAttribute:(id)arg1;
- (struct __CTFont *)_font;
- (int)structuralComplexityContribution;

@end

