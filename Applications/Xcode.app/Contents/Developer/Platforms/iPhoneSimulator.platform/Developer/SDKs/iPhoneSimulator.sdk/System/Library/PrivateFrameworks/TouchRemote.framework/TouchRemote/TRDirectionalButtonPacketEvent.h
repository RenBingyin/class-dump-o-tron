//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent
{
    long long _buttonType;
    long long _gestureState;
    long long _gestureType;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) long long gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) long long gestureState; // @synthesize gestureState=_gestureState;
@property(readonly, nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithButtonType:(long long)arg1 gestureType:(long long)arg2 gestureState:(long long)arg3;

@end

