//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GPUFramebufferAttachmentInfo : NSObject
{
    unsigned int _objectType;
    unsigned int _textureLevel;
    unsigned int _textureLayer;
    unsigned int _textureCubemapFace;
}

@property(readonly, nonatomic) unsigned int textureCubemapFace; // @synthesize textureCubemapFace=_textureCubemapFace;
@property(readonly, nonatomic) unsigned int textureLayer; // @synthesize textureLayer=_textureLayer;
@property(readonly, nonatomic) unsigned int textureLevel; // @synthesize textureLevel=_textureLevel;
@property(readonly, nonatomic) unsigned int objectType; // @synthesize objectType=_objectType;
- (id)initWithAttachmentEnum:(unsigned int)arg1 stateMirror:(id)arg2;

@end

