//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction, NSDate, NSString, TSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface TSDCanvasAnimation : NSObject
{
    NSString *_animationID;
    void *_context;
    id _delegate;
    SEL _willStartSelector;
    SEL _didStopSelector;
    double _duration;
    double _delay;
    NSDate *_startDate;
    CAMediaTimingFunction *_timingFunction;
    float _repeatCount;
    _Bool _repeatAutoreverses;
    TSUNoCopyDictionary *_animationDictionariesForLayers;
    CDUnknownBlockType _completionBlock;
    unsigned int _outstandingAnimationCount;
    _Bool _firstAnimationDidStart;
    _Bool _allAnimationsFinishedBeforeStopping;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool repeatAutoreverses; // @synthesize repeatAutoreverses=_repeatAutoreverses;
@property(nonatomic) float repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) SEL didStopSelector; // @synthesize didStopSelector=_didStopSelector;
@property(nonatomic) SEL willStartSelector; // @synthesize willStartSelector=_willStartSelector;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) void *context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) NSString *animationID; // @synthesize animationID=_animationID;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithAnimationID:(id)arg1 context:(void *)arg2;

@end

