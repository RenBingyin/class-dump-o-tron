//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface GPUGLStateMirror : NSObject <NSCopying>
{
    StateMirrorManager_912556b7 _manager;
    unsigned long long _retrievalContextID;
    int _functionIndex;
    BOOL _isDisassemblerAvailable;
}

@property int functionIndex; // @synthesize functionIndex=_functionIndex;
@property(nonatomic) unsigned long long retrievalContextID; // @synthesize retrievalContextID=_retrievalContextID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)nameForVariable:(const char *)arg1;
- (unsigned long long)getSharegroupID;
- (BOOL)isFramebufferAttachment:(id)arg1;
- (BOOL)isResourceItemBoundAt:(struct GPUGLBindPoint)arg1 resourceItem:(id)arg2;
- (struct GPUGLBindPoint)getBindPointForResourceItem:(id)arg1;
- (CDStruct_58878026)getParameterAsGLuint4:(unsigned int)arg1 ofTexture:(int)arg2;
- (id)getParameter:(unsigned int)arg1 ofTexture:(int)arg2;
- (id)labelForImageResource:(id)arg1;
- (BOOL)isAttachmentWritable:(unsigned int)arg1;
- (const struct DrawableInfo<GPUGLSMObjectTypes> *)drawableObjectForDrawableID:(unsigned long long)arg1;
- (unsigned long long)mainDrawableID;
- (int)getDeviceOrientation;
- (BOOL)getMarker:(int)arg1 markerText:(id *)arg2;
- (int)getMarkerStackDepth;
- (void)setupChildrenForBoundResourceGroup:(id)arg1 resourceType:(unsigned int)arg2;
- (void)setupChildrenForAllResourceGroup:(id)arg1 resourceType:(unsigned int)arg2;
- (id)_currentContextInfoFromOutlineItem:(id)arg1;
- (void)_addTransformFeedbackObjectsToResourceGroup:(id)arg1;
- (void)_addBoundTransformFeedbackObjectToResourceGroup:(id)arg1;
- (void)_addTexturesToResourceGroup:(id)arg1;
- (void)_addBoundTexturesToResourceGroup:(id)arg1 maxCombinedImageUnits:(unsigned int)arg2;
- (void)_addVertexArraysToResourceGroup:(id)arg1;
- (void)_addBoundVertexArraysToResourceGroup:(id)arg1;
- (void)_addQueriesToResourceGroup:(id)arg1;
- (void)_addShadersToResourceGroup:(id)arg1;
- (void)_addProgramsToResourceGroup:(id)arg1;
- (void)_addBoundProgramToResourceGroup:(id)arg1;
- (void)_addFramebuffersToResourceGroup:(id)arg1;
- (void)_addBoundFramebuffersToResourceGroup:(id)arg1;
- (void)_addFramebufferAttachmentsToResourceGroup:(id)arg1 fromFramebufferBinding:(unsigned int)arg2 withPrefix:(const char *)arg3;
- (void)_addRenderbuffersToResourceGroup:(id)arg1;
- (void)_addBuffersToResourceGroup:(id)arg1;
- (void)_addBoundBuffersToResourceGroup:(id)arg1;
- (void)_addAllObjectsToParent:(id)arg1 objectType:(int)arg2 targetUsingBlock:(CDUnknownBlockType)arg3;
- (BOOL)_isDefaultObjectInUse:(int)arg1 context:(const ContextStateMirror_e2d92de6 *)arg2;
- (id)_addTextureObject:(const void *)arg1 toParent:(id)arg2 textureObjectID:(unsigned int)arg3 layerIndex:(unsigned int)arg4 attachment:(unsigned int)arg5 context:(const ContextStateMirror_e2d92de6 *)arg6 prefix:(const char *)arg7;
- (id)_addObjectToParent:(id)arg1 objectID:(unsigned int)arg2 objectInternalID:(unsigned int)arg3 target:(unsigned int)arg4 attachment:(int)arg5 context:(const ContextStateMirror_e2d92de6 *)arg6 prefix:(const char *)arg7;
- (id)_createGPUTraceResourceItemWithParent:(id)arg1 object:(const void *)arg2 objectID:(unsigned int)arg3 labelTarget:(unsigned int)arg4 context:(const ContextStateMirror_e2d92de6 *)arg5 prefix:(const char *)arg6 suffix:(const char *)arg7 type:(unsigned int)arg8;
- (id)generateProgramGroup:(unsigned int)arg1 isPipeline:(unsigned int)arg2 withParent:(id)arg3;
- (unsigned int)currentProgramPipelineBinding;
- (unsigned int)currentProgramBinding;
- (void)_createSubItemsForResourceItem:(id)arg1;
- (void)_createShaderResourcesForProgramItem:(id)arg1 forProgram:(const ProgramObject_8ea7d896 *)arg2;
- (id)_labelForObject:(unsigned long long)arg1 context:(const ContextStateMirror_e2d92de6 *)arg2 target:(unsigned int)arg3 prefix:(const char *)arg4 suffix:(const char *)arg5 thumbnail:(BOOL)arg6;
- (const ContextStateMirror_e2d92de6 *)contextStateMirror;
- (const FramebufferObject_36862a27 *)currentDisplayableFrameBuffer;
- (const TextureObject_d19e20a8 *)textureObjectFromInternalID:(int)arg1;
- (const RenderbufferObject_9cc06c11 *)renderBufferObjectFromInternalID:(int)arg1;
- (const BufferObject_20ffc69a *)bufferObjectFromBufferID:(int)arg1;
- (void)setRetrievalContext:(unsigned long long)arg1;
- (unsigned int)processFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
@property(readonly, nonatomic) StateMirrorManager_912556b7 *manager; // @dynamic manager;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProperties:(id)arg1;
- (id)init;

@end

