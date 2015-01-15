//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFDAStreamingContentConsumer.h"

@class DAMailMessage, NSMutableData, NSString;

@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>
{
    int _requestedFormat;
    id <MFCollectingDataConsumer> _dataConsumer;
    id <MFCollectingDataConsumer> _alternatePartConsumer;
    id <MFMessageDataConsumerFactory> _consumerFactory;
    _Bool _triedCreatingAlternatePartConsumer;
    _Bool _didBeginStreaming;
    _Bool _succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
    DAMailMessage *_message;
}

@property(readonly, nonatomic) double timeOfLastActivity; // @synthesize timeOfLastActivity=_timeOfLastActivity;
@property(nonatomic) int requestedFormat; // @synthesize requestedFormat=_requestedFormat;
@property(retain, nonatomic) id <MFMessageDataConsumerFactory> consumerFactory; // @synthesize consumerFactory=_consumerFactory;
@property(readonly, retain, nonatomic) NSMutableData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, retain, nonatomic) DAMailMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) id <MFCollectingDataConsumer> alternatePartConsumer; // @synthesize alternatePartConsumer=_alternatePartConsumer;
@property(retain, nonatomic) id <MFCollectingDataConsumer> dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void)dealloc;
- (id)dataConsumerForPart:(id)arg1;
- (_Bool)didBeginStreaming;
- (_Bool)succeeded;
- (id)data;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (_Bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

