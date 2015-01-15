//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUIThemeRendition, NSString;

@protocol CUIStructuredThemeStorage <NSObject>
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (CUIThemeRendition *)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (double)fontSizeForFontSizeType:(NSString *)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(NSString *)arg3;
- (_Bool)hasPhysicalColorWithName:(NSString *)arg1;
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(NSString *)arg2;

@optional
- (unsigned long long)colorSpaceID;
@end

