//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TNFormulaIDWrapper : NSObject <NSCopying>
{
    CDStruct_a91f2c80 mID;
}

@property(readonly) CDStruct_a91f2c80 formulaID; // @synthesize formulaID=mID;
- (id).cxx_construct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToTNFormulaIDWrapper:(id)arg1;
- (CDStruct_a91f2c80)chartFormulaID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTNChartFormulaID:(CDStruct_a91f2c80)arg1;

@end

