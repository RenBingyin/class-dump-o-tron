//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDELocalizationWorkContext.h"

#import "IDELocalizationWorkWriteStrings.h"

@class DVTFilePath, DVTLocale, IDEContainer<IDELocalizedContainer>, IDEGroup<IDELocalizedGroup>, NSDictionary;

@interface Xcode3LocalizedIBDocumentAdaptorWriteWorkContext : IDELocalizationWorkContext <IDELocalizationWorkWriteStrings>
{
    BOOL IDELocalizationWork_createdNewSubitem;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
    IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
    DVTLocale *IDELocalizationWork_language;
    DVTFilePath *IDELocalizationWork_path;
}

@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem; // @synthesize IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language; // @synthesize IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group; // @synthesize IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container; // @synthesize IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end

