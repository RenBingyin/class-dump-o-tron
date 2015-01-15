//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSUMultipleChoiceListChoiceProviding.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTPopUpMenuModel : TSPObject <TSUMultipleChoiceListChoiceProviding>
{
    NSArray *mItems;
}

- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct PopUpMenuModel *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PopUpMenuModel *)arg1;
- (id)popUpItemFromDate:(id)arg1 format:(CDStruct_bfed0e84)arg2;
- (id)popUpItemFromString:(id)arg1;
- (id)popUpItemFromBoolean:(_Bool)arg1;
- (id)popUpItemFromNumber:(double)arg1 format:(CDStruct_bfed0e84)arg2;
- (id)displayStringAtIndex:(unsigned long long)arg1;
- (_Bool)booleanAtIndex:(unsigned long long)arg1;
- (CDStruct_bfed0e84)formatAtIndex:(unsigned long long)arg1;
- (id)dateAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (double)numberAtIndex:(unsigned long long)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned long long)arg1;
- (_Bool)p_booleanForListItem:(id)arg1;
- (id)p_dateForListItem:(id)arg1;
- (id)p_stringForListItem:(id)arg1;
- (double)p_numberForListItem:(id)arg1;
- (int)p_mcListTypeOfListItem:(id)arg1;
- (int)p_mcListTypeForArgType:(int)arg1;
- (id)p_listItemAtIndex:(unsigned long long)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToChoices:(id)arg1;
- (id)choices;
- (void)dealloc;
- (id)initWithItems:(id)arg1 context:(id)arg2;

@end

