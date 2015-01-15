//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAContext;

@interface FBSSceneContext : NSObject
{
    unsigned int _identifier;
    double _level;
    CAContext *_context;
    id <FBSSceneContextDelegate> _delegate;
    _Bool _shouldObserveContext;
}

+ (id)contextWithCAContext:(id)arg1;
@property(nonatomic) id <FBSSceneContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) CAContext *CAContext; // @synthesize CAContext=_context;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) double level; // @synthesize level=_level;
- (void)dealloc;
- (id)initWithIdentifier:(unsigned int)arg1 level:(double)arg2;
- (id)initWithCAContext:(id)arg1;

@end

