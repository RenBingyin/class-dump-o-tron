//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TPAppDelegate : TSABaseApplicationDelegate
{
    _Bool _newDocumentOnLaunch;
    _Bool _appDoneLaunching;
    _Bool _cachedBidiIsSupported;
}

+ (id)sharedDelegate;
- (void)p_inputMethodsChanged:(id)arg1;
- (void)p_localeChanged:(id)arg1;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (_Bool)supportsScrollingInPhoneCommentUI;
- (_Bool)supportsRTL;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayName;
- (id)applicationName;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)previewImageNameForNativeDocument;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)appChartPropertyOverrides;
@property(readonly, nonatomic) NSArray *wordDocumentTypes;
- (id)importableDocumentTypes;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (Class)documentRootClass;
- (id)init;
- (_Bool)textInspectorShowsMoreSubpane;
- (_Bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;

@end

