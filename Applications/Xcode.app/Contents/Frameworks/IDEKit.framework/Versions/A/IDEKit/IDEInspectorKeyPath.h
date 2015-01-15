//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IDEInspectorKeyPath : NSObject <NSCopying>
{
    NSString *_observationKeyPath;
    NSString *_applicationKeyPath;
}

+ (id)keyPathWithApplicationKeyPath:(id)arg1;
@property(readonly) NSString *applicationKeyPath; // @synthesize applicationKeyPath=_applicationKeyPath;
@property(readonly) NSString *observationKeyPath; // @synthesize observationKeyPath=_observationKeyPath;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationKeyPath:(id)arg1;

@end

