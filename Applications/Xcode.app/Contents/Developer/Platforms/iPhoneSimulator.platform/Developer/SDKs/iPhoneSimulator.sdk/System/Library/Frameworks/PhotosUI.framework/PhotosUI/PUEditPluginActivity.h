//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity
{
    PUEditPlugin *_plugin;
}

+ (long long)activityCategory;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (_Bool)_isHiddenByDefault;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithPlugin:(id)arg1;

@end

