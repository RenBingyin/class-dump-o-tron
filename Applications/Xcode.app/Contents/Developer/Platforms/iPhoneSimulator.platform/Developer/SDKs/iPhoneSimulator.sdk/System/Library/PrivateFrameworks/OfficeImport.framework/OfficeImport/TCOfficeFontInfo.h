//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TCOfficeFontInfo : NSObject
{
    _Bool _isBold;
    _Bool _isItalic;
    NSString *_fontName;
    NSString *_alphaFontName;
}

@property(nonatomic) _Bool isItalic; // @synthesize isItalic=_isItalic;
@property(nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(retain, nonatomic) NSString *alphaFontName; // @synthesize alphaFontName=_alphaFontName;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)description;

@end

