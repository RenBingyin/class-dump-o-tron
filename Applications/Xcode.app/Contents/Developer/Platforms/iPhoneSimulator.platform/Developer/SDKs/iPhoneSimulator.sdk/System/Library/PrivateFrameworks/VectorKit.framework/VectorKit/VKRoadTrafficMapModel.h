//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKVectorMapModel.h>

@class VKRoadMapModel, VKTrafficDrawStyle;

__attribute__((visibility("hidden")))
@interface VKRoadTrafficMapModel : VKVectorMapModel
{
    VKRoadMapModel *_roadModel;
    _Bool _enabled;
    VKTrafficDrawStyle *_trafficDrawStyle;
    struct unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager>> _trafficManager;
}

@property(retain, nonatomic) VKRoadMapModel *roadModel; // @synthesize roadModel=_roadModel;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)didReceiveMemoryWarning;
- (void)stylesheetDidChange;
- (unsigned long long)mapLayerPosition;

@end

