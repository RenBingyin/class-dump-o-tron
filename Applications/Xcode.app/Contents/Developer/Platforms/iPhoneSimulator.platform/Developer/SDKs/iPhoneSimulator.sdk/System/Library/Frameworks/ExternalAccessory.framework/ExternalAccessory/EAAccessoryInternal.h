//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface EAAccessoryInternal : NSObject
{
    _Bool _connected;
    unsigned int _connectionID;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_serialNumber;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    NSString *_macAddress;
    NSString *_preferredApp;
    int _classType;
    NSDictionary *_audioPorts;
    unsigned int _capabilities;
    _Bool _notPresentInIAPAccessoriesArray;
    NSMutableArray *_sessionsList;
    NSArray *_eqNames;
    int _locationSentenceTypesMask;
    NSDictionary *_vehicleInfoSupportedTypes;
    NSDictionary *_vehicleInfoInitialData;
    NSDictionary *_protocols;
    id <EAAccessoryDelegate> _delegate;
    NSString *_bonjourName;
    _Bool _hasIPConnection;
    _Bool _isAvailableOverBonjour;
    unsigned int _eqIndex;
}

@property(nonatomic) int locationSentenceTypesMask; // @synthesize locationSentenceTypesMask=_locationSentenceTypesMask;
@property(nonatomic) _Bool isAvailableOverBonjour; // @synthesize isAvailableOverBonjour=_isAvailableOverBonjour;
@property(nonatomic) _Bool hasIPConnection; // @synthesize hasIPConnection=_hasIPConnection;
@property(copy, nonatomic) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property(nonatomic) id <EAAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) NSDictionary *vehicleInfoInitialData; // @synthesize vehicleInfoInitialData=_vehicleInfoInitialData;
@property(retain, nonatomic) NSDictionary *vehicleInfoSupportedTypes; // @synthesize vehicleInfoSupportedTypes=_vehicleInfoSupportedTypes;
@property(nonatomic) unsigned int eqIndex; // @synthesize eqIndex=_eqIndex;
@property(retain, nonatomic) NSArray *eqNames; // @synthesize eqNames=_eqNames;
@property(nonatomic) _Bool notPresentInIAPAccessoriesArray; // @synthesize notPresentInIAPAccessoriesArray=_notPresentInIAPAccessoriesArray;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property(retain, nonatomic) NSDictionary *audioPorts; // @synthesize audioPorts=_audioPorts;
@property(nonatomic) int classType; // @synthesize classType=_classType;
@property(copy, nonatomic) NSString *preferredApp; // @synthesize preferredApp=_preferredApp;
@property(copy, nonatomic) NSString *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSString *hardwareRevision; // @synthesize hardwareRevision=_hardwareRevision;
@property(copy, nonatomic) NSString *firmwareRevision; // @synthesize firmwareRevision=_firmwareRevision;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) unsigned int connectionID; // @synthesize connectionID=_connectionID;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(readonly, nonatomic) NSArray *sessionsList;
- (void)removeSession:(id)arg1;
- (void)addSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end

