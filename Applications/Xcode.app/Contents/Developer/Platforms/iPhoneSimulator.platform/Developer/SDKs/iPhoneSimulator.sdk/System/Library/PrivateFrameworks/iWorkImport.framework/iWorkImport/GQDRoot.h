//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GQDRoot : NSObject
{
    struct __CFDictionary *mUidToObjectMap;
    _Bool mAppBundleColorMapLoaded;
    struct __CFDictionary *mAppBundleResourceToColorMap;
    _Bool mAppBundleResourcesUrlInitialized;
    struct __CFURL *mAppBundleResourcesUrl;
    _Bool mIsOldAssetNameMapInitialized;
    struct __CFDictionary *mOldAssetNameMap;
    int mAppBundleVersion;
    unsigned long long mDocVersion;
}

+ (struct _xmlNs *)appNamespace;
- (_Bool)appBundleCanProcessCurrentDocVersion;
- (unsigned long long)documentReleaseVersion;
- (_Bool)readDocumentVersion:(struct _xmlTextReader *)arg1 isTooNew:(_Bool *)arg2;
- (_Bool)readDocumentVersion:(struct _xmlTextReader *)arg1;
- (void)loadAppBundleResourceToColorMap;
- (void)initializeAppBundleResourcesUrl:(struct __CFURL *)arg1;
- (struct __CFURL *)appBundleResourcesUrl:(struct __CFURL *)arg1;
- (id)colorForMissingAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileUrl:(struct __CFURL *)arg3;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 fileExists:(_Bool *)arg3 fileUrl:(struct __CFURL *)arg4;
- (_Bool)includeStyleWithIdentifier:(const char *)arg1 parentIdentifier:(const char *)arg2 uid:(const char *)arg3;
- (void)forgetAboutObject:(id)arg1 withXmlUid:(const char *)arg2;
- (id)objectWithXmlUid:(const char *)arg1;
- (const char *)addIdentifiedObject:(id)arg1 fromCurrentNode:(struct _xmlTextReader *)arg2;
- (id)uuid;
- (_Bool)addObject:(id)arg1 withOwnedXmlUid:(const char *)arg2;
- (Class)classForName:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

