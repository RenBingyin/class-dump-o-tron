//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBPlugin.h"

@class NSView;

@interface IBSDKPlugin : IBPlugin
{
    NSView *templateView;
}

- (id)pasteboardObjectsForDraggedLibraryView:(id)arg1;
- (id)libraryNibNamesForTargetRuntime:(id)arg1;
- (BOOL)isBuiltIn;
- (id)label;
- (double)documentTemplateDisplayGroupSortOrderForTemplateGroupWithIdentifier:(id)arg1;
- (id)documentTemplateDisplayGroup;
- (id)requiredFrameworks;

@end

