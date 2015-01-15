//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLImageElement : DOMHTMLElement
{
}

@property(readonly, copy) NSURL *absoluteImageURL;
@property(readonly, copy) NSString *altDisplayString;
@property(readonly) int y;
@property(readonly) int x;
@property(readonly) int naturalWidth;
@property(readonly) int naturalHeight;
@property(copy) NSString *lowsrc;
@property(readonly) _Bool complete;
@property int width;
@property int vspace;
@property(copy) NSString *useMap;
- (void)setSrcset:(id)arg1;
- (id)srcset;
@property(copy) NSString *src;
@property(copy) NSString *longDesc;
@property _Bool isMap;
@property int hspace;
@property int height;
- (void)setCrossOrigin:(id)arg1;
- (id)crossOrigin;
@property(copy) NSString *border;
@property(copy) NSString *alt;
@property(copy) NSString *align;
@property(copy) NSString *name;
- (id)mimeType;
- (id)dataRepresentation:(_Bool)arg1;

@end

