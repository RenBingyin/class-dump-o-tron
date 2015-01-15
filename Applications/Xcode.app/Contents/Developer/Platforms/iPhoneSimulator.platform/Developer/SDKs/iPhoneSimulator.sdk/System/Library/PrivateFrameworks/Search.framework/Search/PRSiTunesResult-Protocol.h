//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PRSBaseResult.h"

@class NSArray, NSString, PRSImage;

@protocol PRSiTunesResult <PRSBaseResult>
@property(retain, nonatomic) PRSImage *icon;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *section_header;
@property(retain, nonatomic) NSString *templateName;

@optional
@property(retain, nonatomic) NSString *string_format;
@property(retain, nonatomic) NSString *card_title;
@property(retain, nonatomic) NSArray *more_glyphs;
@property(retain, nonatomic) NSString *rating_text;
@property(nonatomic) float rating;
@property(nonatomic) _Bool rt_newline;
@property(retain, nonatomic) NSString *rt_text;
@property(retain, nonatomic) PRSImage *rt_glyph;
@property(nonatomic) _Bool description_nowrap;
@property(retain, nonatomic) NSString *resultDescription;
@end

