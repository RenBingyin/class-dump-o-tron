//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DBGViewDebuggerSupport_iOS : NSObject
{
}

+ (void)_collectClassInfoForSubviews:(id)arg1;
+ (id)_snapshotView:(id)arg1 errorString:(id *)arg2;
+ (void)_snapshotView:(id)arg1 andAddDataToDictionary:(id)arg2;
+ (_Bool)_layerShouldSupersedeSnapshot:(id)arg1;
+ (id)_snapshotMethodForView:(id)arg1;
+ (id)_primaryWindowFromWindows:(id)arg1;
+ (id)_layerInfo:(id)arg1;
+ (id)_layerInTree:(id)arg1 representingView:(id)arg2;
+ (id)_deepCopyLayer:(id)arg1;
+ (void)disableLayersAsSnapshots;
+ (void)enableLayersAsSnapshots;
+ (id)fetchViewHierarchy;
+ (id)fetchViewHierarchyWithOptions:(id)arg1;
+ (id)_displayNameForView:(id)arg1;
+ (id)_collectSubviewInfoForView:(id)arg1 representedLayer:(id)arg2;
+ (void)_populateConstraintInfosArray:(id)arg1 forViewHierarchy:(id)arg2;
+ (id)_collectViewInfo:(id)arg1;
+ (void)addPathForClass:(Class)arg1;
+ (id)classMap;
+ (unsigned long long)minorVersion;
+ (unsigned long long)majorVersion;

@end

