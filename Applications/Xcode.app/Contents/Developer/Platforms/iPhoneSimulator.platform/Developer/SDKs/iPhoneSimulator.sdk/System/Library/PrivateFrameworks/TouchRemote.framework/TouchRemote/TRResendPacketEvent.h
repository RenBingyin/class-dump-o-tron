//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@class NSArray;

@interface TRResendPacketEvent : TRPacketEvent
{
    NSArray *_resendPacketEventClasses;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) NSArray *resendPacketEventClasses; // @synthesize resendPacketEventClasses=_resendPacketEventClasses;
- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithResendPacketEventClasses:(id)arg1;

@end

