//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNClassicStylesheetRecord, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface KNClassicThemeRecord : TSPObject
{
    NSString *mUUID;
    KNClassicStylesheetRecord *mStylesheetRecord;
    NSMutableArray *mMasters;
}

@property(readonly, nonatomic) NSArray *masters; // @synthesize masters=mMasters;
- (void)addMaster:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
@property(retain, nonatomic) KNClassicStylesheetRecord *stylesheetRecord;
@property(copy, nonatomic) NSString *UUID;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ClassicThemeRecordArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ClassicThemeRecordArchive *)arg1 unarchiver:(id)arg2;

@end

