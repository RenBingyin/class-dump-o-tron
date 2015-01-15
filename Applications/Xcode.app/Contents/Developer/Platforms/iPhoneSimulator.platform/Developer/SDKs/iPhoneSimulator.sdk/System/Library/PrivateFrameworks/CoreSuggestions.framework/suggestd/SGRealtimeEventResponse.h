//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SGCuratedEventKey, SGPipelineEntity;

@interface SGRealtimeEventResponse : NSObject
{
    int _state;
    SGPipelineEntity *_entity;
    SGCuratedEventKey *_duplicateEventKey;
    NSString *_templateShortName;
}

@property(readonly, nonatomic) NSString *templateShortName; // @synthesize templateShortName=_templateShortName;
@property(readonly, nonatomic) SGCuratedEventKey *duplicateEventKey; // @synthesize duplicateEventKey=_duplicateEventKey;
@property(readonly, nonatomic) SGPipelineEntity *entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)initCancellationOfCuratedEvent:(id)arg1 templateShortName:(id)arg2 entity:(id)arg3;
- (id)initUpdatedEventWithEntity:(id)arg1 curatedEventKey:(id)arg2;
- (id)initDuplicateOfCuratedEvent:(id)arg1;
- (id)initNewEventWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 state:(int)arg2 duplicateEventKey:(id)arg3 templateShortName:(id)arg4;

@end

