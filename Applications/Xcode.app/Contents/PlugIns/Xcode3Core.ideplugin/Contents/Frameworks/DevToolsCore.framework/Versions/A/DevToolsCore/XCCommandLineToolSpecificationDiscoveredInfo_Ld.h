//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/XCCommandLineToolSpecificationDiscoveredInfo.h>

@class NSArray, NSString;

@interface XCCommandLineToolSpecificationDiscoveredInfo_Ld : XCCommandLineToolSpecificationDiscoveredInfo
{
    NSString *_versionString;
    NSString *_buildNumberString;
    BOOL _supportsEmittingDependencyInfo;
    NSArray *_configuredForArchs;
}

@property(copy) NSArray *configuredForArchs; // @synthesize configuredForArchs=_configuredForArchs;
- (void).cxx_destruct;
- (BOOL)supportsEmittingDependencyInfo;
- (id)buildNumberString;
- (void)setVersionString:(id)arg1;
- (id)versionString;

@end

