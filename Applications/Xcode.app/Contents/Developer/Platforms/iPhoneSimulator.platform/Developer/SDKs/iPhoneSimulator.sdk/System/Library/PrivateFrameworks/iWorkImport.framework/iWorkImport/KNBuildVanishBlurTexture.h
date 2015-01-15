//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface KNBuildVanishBlurTexture : NSObject
{
    unsigned int _textureName;
    double _blurAmount;
    struct CGRect _frame;
    struct CGRect _bounds;
}

@property(nonatomic) double blurAmount; // @synthesize blurAmount=_blurAmount;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned int textureName; // @synthesize textureName=_textureName;
- (id)description;
- (void)teardown;
- (id)initWithTextureName:(unsigned int)arg1 frame:(struct CGRect)arg2 blurAmount:(double)arg3;

@end

