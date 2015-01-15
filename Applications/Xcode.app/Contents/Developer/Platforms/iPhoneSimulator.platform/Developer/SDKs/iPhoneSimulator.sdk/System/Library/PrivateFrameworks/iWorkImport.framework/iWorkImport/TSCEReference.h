//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCEReference : NSObject
{
    CDStruct_39788696 mRef;
    NSString *mOverrideText;
    NSString *mOverrideTextAsTyped;
    unsigned char mStickyBits;
    _Bool mWasConstructedViaNames;
}

- (id).cxx_construct;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(_Bool)arg5;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(_Bool)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2;
- (struct __CFUUID *)tableID;
- (CDStruct_5744d895)rangeReference;
- (CDStruct_39788696)cReference;
- (_Bool)wasConstructedViaNames;
- (void)setWasConstructedViaNames:(_Bool)arg1;
- (unsigned char)stickyBits;
- (void)setStickyBits:(unsigned char)arg1;
- (id)overrideTextAsTyped;
- (void)setOverrideTextAsTyped:(id)arg1;
- (id)overrideText;
- (void)setOverrideText:(id)arg1;
- (id)initWithCellReference:(CDStruct_78b871e1)arg1;
- (id)initWithRangeReference:(CDStruct_5744d895)arg1;

@end

