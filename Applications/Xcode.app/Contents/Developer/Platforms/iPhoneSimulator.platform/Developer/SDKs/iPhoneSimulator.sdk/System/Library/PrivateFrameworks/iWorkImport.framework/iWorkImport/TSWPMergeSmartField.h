//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPMergeSmartField : TSWPPlaceholderSmartField
{
    NSString *_property;
    NSString *_label;
    NSString *_key;
    int _category;
    _Bool _requiresFollowingWhitespace;
    NSString *_whitespace;
    NSString *_guid;
    NSString *_tableField;
}

@property(copy, nonatomic) NSString *tableField; // @synthesize tableField=_tableField;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *whitespace; // @synthesize whitespace=_whitespace;
@property(nonatomic) _Bool requiresFollowingWhitespace; // @synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace;
@property(nonatomic) int category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (id)scriptTag;
- (int)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;

@end

