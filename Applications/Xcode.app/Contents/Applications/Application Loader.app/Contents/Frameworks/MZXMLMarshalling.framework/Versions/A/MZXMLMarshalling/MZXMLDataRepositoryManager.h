//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface MZXMLDataRepositoryManager : NSObject
{
    NSMutableDictionary *_repositories;
    NSMutableArray *_repositoryNames;
}

+ (void)flushDefaultManager;
+ (id)defaultManager;
- (id)description;
- (id)repositoryForDataNamed:(id)arg1;
- (id)repositoryForDocumentNamed:(id)arg1;
- (id)dataForName:(id)arg1 error:(id *)arg2;
- (id)documentNamed:(id)arg1 error:(id *)arg2;
- (void)setPersistentRepository:(id)arg1;
- (id)persistentRepository;
- (void)setVolatileRepository:(id)arg1;
- (id)volatileRepository;
- (void)setRepository:(id)arg1 name:(id)arg2;
- (void)addRepository:(id)arg1 name:(id)arg2;
- (id)repositoryForName:(id)arg1;
- (void)setRepositoryNames:(id)arg1;
- (id)repositoryNames;
- (void)dealloc;
- (id)init;

@end

