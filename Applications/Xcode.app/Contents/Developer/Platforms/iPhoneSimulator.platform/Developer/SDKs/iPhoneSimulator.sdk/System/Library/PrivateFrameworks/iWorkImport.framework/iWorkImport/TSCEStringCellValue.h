//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCEStringCellValue : TSCECellValue
{
    struct TSCEStringValue *mStringValue;
}

- (void)encodeToArchive:(struct StringCellValueArchive *)arg1;
- (id)initWithArchive:(const struct StringCellValueArchive *)arg1;
- (_Bool)isEqualToCellValue:(id)arg1;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_bfed0e84)formatStruct;
- (struct TSCEStringValue *)stringValue;
- (void)dealloc;
- (id)initWithStringValue:(struct TSCEStringValue *)arg1;
- (id)initWithString:(id)arg1;

@end

