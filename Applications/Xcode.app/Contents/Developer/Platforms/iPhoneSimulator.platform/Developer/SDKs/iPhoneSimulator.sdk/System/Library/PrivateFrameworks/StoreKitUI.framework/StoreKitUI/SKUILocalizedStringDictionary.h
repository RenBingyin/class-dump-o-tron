//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject
{
    NSArray *_bundles;
    NSString *_localeName;
    NSMutableArray *_stringTables;
}

- (void).cxx_destruct;
- (id)_stringTableForBundle:(id)arg1 tableName:(id)arg2;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)localizedStringForKey:(id)arg1;
- (id)initWithLocaleName:(id)arg1 bundles:(id)arg2;

@end

