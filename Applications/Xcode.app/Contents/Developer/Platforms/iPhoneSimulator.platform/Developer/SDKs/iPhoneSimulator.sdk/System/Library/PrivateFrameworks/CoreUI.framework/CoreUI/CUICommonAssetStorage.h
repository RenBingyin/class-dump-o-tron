//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CUICommonAssetStorage : NSObject
{
    struct _carheader {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        char _field6[128];
        char _field7[256];
        unsigned char _field8[16];
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned int _field12;
    } *_header;
    struct _renditionkeyfmt *_keyfmt;
    void *_imagedb;
    void *_colordb;
    void *_fontdb;
    void *_fontsizedb;
    void *_zcglyphdb;
    void *_zcbezeldb;
    void *_facetKeysdb;
    void *_elementDebugInfoDB;
    void *_partDebugInfoDB;
    _Bool _swap;
}

+ (void)initialize;
- (float)fontSizeForFontSizeType:(id)arg1;
- (_Bool)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;
- (const struct FontValue *)_fontValueForFontType:(id)arg1;
- (_Bool)hasColorForName:(const char *)arg1;
- (_Bool)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;
- (id)zeroCodeBezelList;
- (id)zeroCodeGlyphList;
- (id)_zeroCodeListFromTree:(const void *)arg1;
- (void)_swapZeroCodeInformation:(CDStruct_c0454aff *)arg1;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (id)allRenditionNames;
- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;
- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)assetKeysMatchingBlock:(CDUnknownBlockType)arg1;
- (id)allAssetKeys;
- (id)assetForKey:(id)arg1;
- (_Bool)assetExistsForKey:(id)arg1;
- (void)_swapRenditionKeyArray:(unsigned short *)arg1;
- (unsigned int)colorSpaceID;
- (unsigned int)associatedChecksum;
- (id)uuid;
- (unsigned int)renditionCount;
- (const char *)versionString;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)keyFormatData;
- (int)keySemantics;
- (long long)storageTimestamp;
- (long long)_storagefileTimestamp;
- (unsigned int)schemaVersion;
- (unsigned int)coreuiVersion;
- (unsigned int)storageVersion;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)path;
- (id)initWithPath:(id)arg1 forWriting:(_Bool)arg2;
- (id)initWithPath:(id)arg1;
- (_Bool)swapped;
- (void)_swapKeyFormat;
- (void)_swapHeader;
- (void)_bringHeaderInfoUpToDate;
- (void)_initDefaultHeaderVersion:(double)arg1 versionString:(const char *)arg2;
- (id)displayNameForPartID:(long long)arg1;
- (id)constantNameForPartID:(long long)arg1;
- (id)displayNameForElementID:(long long)arg1;
- (id)constantNameForElementID:(long long)arg1;
- (id)_displayNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;
- (id)_constantNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;
- (id)_dataForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;

@end

