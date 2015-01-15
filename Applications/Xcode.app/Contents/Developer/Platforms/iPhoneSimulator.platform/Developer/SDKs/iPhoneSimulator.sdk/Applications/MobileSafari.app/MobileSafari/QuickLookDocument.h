//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSDocumentProxy, NSString, NSURL;

@interface QuickLookDocument : NSObject
{
    LSDocumentProxy *_documentProxy;
    _Bool _needsQuickLookDocumentView;
    NSString *_savedPath;
    NSString *_savedPathWithProperExtension;
    _Bool _shouldDeleteSavedPath;
    _Bool _shouldDeleteSavedPathWithProperExtension;
    NSString *_fileName;
    NSString *_mimeType;
    NSString *_uti;
    NSURL *_sourceURL;
}

@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *savedPathWithProperExtension; // @synthesize savedPathWithProperExtension=_savedPathWithProperExtension;
@property(copy, nonatomic) NSString *savedPath; // @synthesize savedPath=_savedPath;
@property(readonly, nonatomic) _Bool needsQuickLookDocumentView; // @synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView;
@property(retain, nonatomic) LSDocumentProxy *documentProxy; // @synthesize documentProxy=_documentProxy;
- (void).cxx_destruct;
- (void)addQuickLookPrintSettingsToPrintInfo:(id)arg1;
- (void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(_Bool)arg2;
- (void)setSavedPath:(id)arg1 shouldDelete:(_Bool)arg2;
- (void)_deleteSavedPathWithProperExtensionIfNecessary;
- (void)_deleteSavedPathIfNecessary;
- (void)dealloc;
- (id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(_Bool)arg4;

@end

