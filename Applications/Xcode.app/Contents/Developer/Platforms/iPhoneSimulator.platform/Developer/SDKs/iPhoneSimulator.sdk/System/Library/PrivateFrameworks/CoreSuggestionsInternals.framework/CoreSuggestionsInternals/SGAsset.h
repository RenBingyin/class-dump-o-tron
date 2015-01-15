//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGAsset : NSObject
{
    NSString *_fileName;
    NSString *_resourcePath;
    CDUnknownBlockType _onUpdate;
}

+ (int)assetVersion;
+ (void)forEachInstance:(CDUnknownBlockType)arg1;
+ (void)triggerAssetUpdated;
+ (void)updateAssetMetadata;
+ (void)asyncUpdateAssetMetadata;
+ (void)initialize;
- (void).cxx_destruct;
- (id)path;
- (id)initWithFileName:(id)arg1 fileExtension:(id)arg2 resourceBundle:(id)arg3 onUpdate:(CDUnknownBlockType)arg4;

@end

