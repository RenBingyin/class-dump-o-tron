//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XCConfigurationInspectionContext, XCPropertyInfoContext;

@protocol XCConfigurationInspectables <NSObject>
- (XCPropertyInfoContext *)createPropertyInfoContextWithBuildAction:(NSString *)arg1 configurationName:(NSString *)arg2;
- (XCConfigurationInspectionContext *)configurationInspectionContextForConfigurationNamed:(NSString *)arg1;
- (NSString *)name;
@end

