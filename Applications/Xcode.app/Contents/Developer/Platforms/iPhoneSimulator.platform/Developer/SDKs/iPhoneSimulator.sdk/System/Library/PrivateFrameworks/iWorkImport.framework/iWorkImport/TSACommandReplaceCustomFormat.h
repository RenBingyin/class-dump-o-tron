//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class TSUCustomFormatWrapper, TSUFormatObject;

__attribute__((visibility("hidden")))
@interface TSACommandReplaceCustomFormat : TSKCommand
{
    unsigned int _customFormatID;
    TSUCustomFormatWrapper *_customFormat;
    TSUFormatObject *_replacementFormat;
}

@property(copy) TSUFormatObject *replacementFormat; // @synthesize replacementFormat=_replacementFormat;
@property unsigned int customFormatID; // @synthesize customFormatID=_customFormatID;
@property(copy) TSUCustomFormatWrapper *customFormat; // @synthesize customFormat=_customFormat;
- (void)saveToArchive:(struct ReplaceCustomFormatCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct ReplaceCustomFormatCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)redo;
- (void)undo;
- (void)commit;
- (id)p_formatObjectForCustomFormat:(id)arg1 customFormatID:(unsigned int)arg2;
- (_Bool)process;
- (id)p_customFormatList;
- (id)p_documentRoot;
- (void)dealloc;
- (id)initWithContext:(id)arg1 customFormat:(id)arg2 replacementFormat:(id)arg3;

@end

