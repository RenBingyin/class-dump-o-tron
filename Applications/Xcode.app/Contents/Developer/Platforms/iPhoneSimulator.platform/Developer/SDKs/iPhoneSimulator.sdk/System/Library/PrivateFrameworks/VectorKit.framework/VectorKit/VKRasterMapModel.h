//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKMapTileModel.h>

#import "VKMapLayer.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKRasterMapModel : VKMapTileModel <VKMapLayer>
{
    NSMutableArray *_sortedTiles;
    unsigned long long _mapLayer;
    _Bool _rasterViewer;
    _Bool _showingNoDataPlaceholders;
    shared_ptr_6e6219d6 _styleQuery;
    shared_ptr_479d1306 _gglClutTexture;
    struct Pos2DUVMesh *_unitMesh;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _renderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _clutRenderState;
}

+ (_Bool)reloadOnStylesheetChange;
@property(readonly, getter=isShowingNoDataPlaceholders) _Bool showingNoDataPlaceholders; // @synthesize showingNoDataPlaceholders=_showingNoDataPlaceholders;
@property(nonatomic) _Bool rasterViewer; // @synthesize rasterViewer=_rasterViewer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldEnableCLUT;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3 roadAlpha:(float)arg4;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglSetupClutTextureForLevelOfDetail:(unsigned long long)arg1 scale:(double)arg2;
- (void)stylesheetDidChange;
- (id)styleManager;
- (void)reset;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned long long mapLayerPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
