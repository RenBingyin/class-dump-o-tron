//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadLabel : NSObject
{
    shared_ptr_338aa11d _label;
    int _navLabelType;
    id <VKLabelNavFeature> _navFeature;
    NSString *_displayGroup;
    long long _alignment;
    float _desiredOffsetDistance;
    unsigned int _displayID;
}

@property(nonatomic) float desiredOffsetDistance; // @synthesize desiredOffsetDistance=_desiredOffsetDistance;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned int displayID; // @synthesize displayID=_displayID;
@property(readonly, nonatomic) const shared_ptr_338aa11d *label; // @synthesize label=_label;
@property(nonatomic) id <VKLabelNavFeature> navFeature; // @synthesize navFeature=_navFeature;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)displayGroup;
@property(readonly, nonatomic) _Bool isJunctionLabel;
@property(readonly, nonatomic) _Bool isRoadLabel;
@property(readonly, nonatomic) _Bool isShieldLabel;
- (void)dealloc;
- (id)initWithNavFeature:(id)arg1 label:(const shared_ptr_338aa11d *)arg2 navLabelType:(int)arg3;

@end

