//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBAbstractPlatformTool.h"

@class IBICCatalogCompilerOptions, IBICCatalogCompilerResult, NSArray, NSData, NSSet;

@protocol IBCocoaTouchImageCatalogTool <IBAbstractPlatformTool>
- (void)registerSchema:(NSData *)arg1;
- (IBICCatalogCompilerResult *)compileImageCatalogsFromPaths:(NSArray *)arg1 usingSchemaProviderClassNames:(NSSet *)arg2 options:(IBICCatalogCompilerOptions *)arg3 imageSetRepWhiteList:(NSSet *)arg4;
@end

