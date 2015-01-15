//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLightingModel.h>

__attribute__((visibility("hidden")))
@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel
{
}

- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (id)diffuseTextureTiling;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 percentage:(id)arg5;
- (id)p_lightenDiffuseMaterial:(id)arg1 percentage:(id)arg2;
- (tvec4_ac57c72d)p_lightenedColorForColor:(const tvec4_ac57c72d *)arg1 percentage:(id)arg2;
- (id)phongMaterials;
- (id)init;
- (void)saveToPhongMaterialPackageArchive:(struct Chart3DPhongMaterialPackageArchive *)arg1 environmentPackageArchive:(struct Chart3DEnvironmentPackageArchive *)arg2 archiver:(id)arg3;
- (id)initWithPhongMaterialPackageArchive:(const struct Chart3DPhongMaterialPackageArchive *)arg1 lightingModelArchive:(const struct Chart3DLightingModelArchive *)arg2 unarchiver:(id)arg3;

@end

