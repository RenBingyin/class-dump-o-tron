//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITunesPackage, MZDocument;

@interface MZMachineLocalPerPackageRepository : NSObject
{
    ITunesPackage *_package;
    MZDocument *_document;
}

@property MZDocument *document; // @synthesize document=_document;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)needsGeneratedVendorID;
- (void)setNeedsGeneratedVendorID:(BOOL)arg1;
- (void)writeDictionary:(id)arg1;
- (void)_packageWriteDictionary:(id)arg1;
- (void)_documentWriteDictionary:(id)arg1;
- (id)dictionary;
- (void)dealloc;
- (id)initWithPackage:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

