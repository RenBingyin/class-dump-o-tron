//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSCECellValue : NSObject
{
    int mValueType;
}

@property(nonatomic) int valueType; // @synthesize valueType=mValueType;
- (void)encodeCellValueToArchive:(struct CellValueArchive *)arg1;
- (id)initCellValueWithArchive:(const struct CellValueArchive *)arg1;
- (_Bool)isEqualToCellValue:(id)arg1;
- (CDStruct_bfed0e84)formatStruct;
- (id)displayString;
- (void)dealloc;

@end

