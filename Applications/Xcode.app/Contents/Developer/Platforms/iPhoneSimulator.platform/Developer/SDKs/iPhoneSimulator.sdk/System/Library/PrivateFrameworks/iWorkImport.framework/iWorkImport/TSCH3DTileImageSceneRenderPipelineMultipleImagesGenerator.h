//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DTileImageSceneRenderPipelineImageGenerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCH3DTileImageSceneRenderPipelineMultipleImagesGenerator : TSCH3DTileImageSceneRenderPipelineImageGenerator
{
    NSMutableArray *mImages;
}

- (id)images;
- (void)processSourceRegion:(const box_0260e9b3 *)arg1 targetRegion:(const box_0260e9b3 *)arg2;
- (void)dealloc;
- (id)init;

@end

