//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPDisposable.h"

@class NSString;

@interface CPFont : NSObject <CPDisposable>
{
    struct CGPDFFont *cgPDFFont;
    struct CGFont *cgFont;
    NSString *fontName;
    _Bool exactMatch;
    CDStruct_05724ab2 descriptor;
    struct __CFDictionary *kernDictionary;
    double kernUnitsPerEm;
    _Bool isHorizontal;
    double defaultWidth;
    _Bool disposed;
}

- (void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long *)arg2 toArray:(unsigned short *)arg3 maxChars:(unsigned int)arg4;
- (_Bool)getGlyphs:(unsigned short *)arg1 forCodes:(const unsigned short *)arg2 count:(unsigned int)arg3;
- (double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2;
- (_Bool)isHorizontal;
- (double)underlineThickness;
- (double)underlinePosition;
- (double)spaceWidth;
- (double)missingWidth;
- (double)maxWidth;
- (double)avgWidth;
- (double)stemH;
- (double)stemV;
- (double)xHeight;
- (double)capHeight;
- (double)leading;
- (double)descent;
- (double)ascent;
- (double)italicAngle;
- (struct CGRect)fontBBox;
- (unsigned int)flags;
- (double)fontWeight;
- (double)fontStretch;
- (_Bool)isSameFontAs:(id)arg1;
- (id)fontName;
- (struct CGFont *)cgFont;
- (struct CGPDFFont *)cgPDFFont;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWith:(struct CGPDFDictionary *)arg1;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)arg1;
- (void)getFontName;
- (id)matchingFontName;

@end

