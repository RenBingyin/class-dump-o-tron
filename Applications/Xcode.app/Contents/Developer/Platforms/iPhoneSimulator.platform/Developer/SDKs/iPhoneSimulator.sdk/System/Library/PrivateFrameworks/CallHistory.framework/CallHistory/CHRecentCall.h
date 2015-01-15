//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSMutableArray, NSNumber, NSString;

@interface CHRecentCall : CHSynchronizedLoggable <NSSecureCoding, NSCopying>
{
    _Bool _read;
    _Bool _callerIdIsBlocked;
    _Bool _multiCall;
    _Bool _callerIdIsFormatted;
    _Bool _answered;
    _Bool _mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callType;
    unsigned int _callStatus;
    NSString *_callerNetworkName;
    NSString *_uniqueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSDate *_date;
    double _duration;
    NSNumber *_bytesOfDataUsed;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    unsigned long long _unreadCount;
    NSMutableArray *_callOccurrences;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_callerName;
    id <CHPhoneBookManagerProtocol> _phoneBookManager;
}

+ (_Bool)supportsSecureCoding;
+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
@property _Bool mobileOriginated; // @synthesize mobileOriginated=_mobileOriginated;
@property _Bool answered; // @synthesize answered=_answered;
@property(retain) id <CHPhoneBookManagerProtocol> phoneBookManager; // @synthesize phoneBookManager=_phoneBookManager;
@property _Bool callerIdIsFormatted; // @synthesize callerIdIsFormatted=_callerIdIsFormatted;
@property _Bool multiCall; // @synthesize multiCall=_multiCall;
@property(copy, nonatomic) NSString *callerName; // @synthesize callerName=_callerName;
@property(copy, nonatomic) NSString *addressBookCallerIDMultiValueId; // @synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId;
@property(copy, nonatomic) NSString *addressBookRecordId; // @synthesize addressBookRecordId=_addressBookRecordId;
@property(retain, nonatomic) NSMutableArray *callOccurrences; // @synthesize callOccurrences=_callOccurrences;
@property unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(copy, nonatomic) NSString *callerIdLocation; // @synthesize callerIdLocation=_callerIdLocation;
@property(copy, nonatomic) NSString *callerIdLabel; // @synthesize callerIdLabel=_callerIdLabel;
@property(copy) NSString *callerNetworkSecondName; // @synthesize callerNetworkSecondName=_callerNetworkSecondName;
@property(copy) NSString *callerNetworkFirstName; // @synthesize callerNetworkFirstName=_callerNetworkFirstName;
@property _Bool callerIdIsBlocked; // @synthesize callerIdIsBlocked=_callerIdIsBlocked;
@property(copy, nonatomic) NSNumber *disconnectedCause; // @synthesize disconnectedCause=_disconnectedCause;
@property(copy) NSString *mobileNetworkCode; // @synthesize mobileNetworkCode=_mobileNetworkCode;
@property(copy) NSString *mobileCountryCode; // @synthesize mobileCountryCode=_mobileCountryCode;
@property(copy) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(copy, nonatomic) NSNumber *bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSDate *date; // @synthesize date=_date;
@property unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property unsigned int callType; // @synthesize callType=_callType;
@property(copy) NSString *callerId; // @synthesize callerId=_callerId;
@property(copy) NSString *devicePhoneId; // @synthesize devicePhoneId=_devicePhoneId;
@property(copy) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)callOccurrencesAsStringSync;
- (id)description;
- (_Bool)isAddressBookContactASuggestion;
- (_Bool)isAddressBookContactASuggestionSync;
- (_Bool)representsCallAtDate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)callerIdSubStringForDisplay;
- (id)callerIdLocationSync;
- (id)callerIdLabelSync;
- (id)callerIdForDisplay;
- (id)callerIdForDisplaySync;
- (id)callerNameForDisplay;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerNameSync;
@property(copy, nonatomic) NSString *callerNetworkName; // @synthesize callerNetworkName=_callerNetworkName;
@property(nonatomic) unsigned int callerIdAvailability; // @synthesize callerIdAvailability=_callerIdAvailability;
- (_Bool)callerIdIsEmailAddress;
- (_Bool)callerIdIsEmailAddressSync;
- (id)addressBookCallerIDMultiValueIdSync;
- (id)addressBookRecordIdSync;
- (void)fetchAndSetAddressBookIdsSync;
@property(nonatomic) _Bool read; // @synthesize read=_read;
- (void)createOccurrenceArraySync;
- (id)callOccurrencesSync;
- (unsigned long long)numberOfOccurrences;
- (unsigned long long)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (_Bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)coalescingHash;
- (_Bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (_Bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (_Bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (void)addressBookChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

