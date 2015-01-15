//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, SGAsset, SGOffsetDictionary;

@interface SGFlightData : NSObject
{
    id <SGSeekable> _flightsFh;
    SGOffsetDictionary *_flightDataOffsets;
    SGAsset *_flightsUpdateAsset;
    id <SGSeekable> _flightsUpdateFh;
    SGOffsetDictionary *_flightUpdateDataOffsets;
    id <SGSeekable> _airportsFh;
    SGOffsetDictionary *_airportDataOffsets;
    SGAsset *_airportsUpdateAsset;
    id <SGSeekable> _airportsUpdateFh;
    SGOffsetDictionary *_airportUpdateDataOffsets;
    NSDictionary *_carrierNames;
    NSDictionary *_carrierCodesByName;
    SGAsset *_carrierUpdateAsset;
    NSDictionary *_carrierUpdateNames;
    NSDictionary *_carrierUpdateCodesByName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)airportCodeForAirportName:(id)arg1 flightCarrier:(id)arg2 flightNumber:(unsigned short)arg3;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2;
- (id)airportsServicedByCarrier:(id)arg1 flightNumber:(unsigned short)arg2 withDataOffset:(id)arg3 andFileHandle:(id)arg4;
- (id)nameForCarrier:(id)arg1;
- (id)carrierIataCodeForCarrierName:(id)arg1;
- (id)carrierIataCodes;
- (id)latitudeAndLongitudeForAirport:(id)arg1;
- (id)latitudeAndLongitudeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)timezoneOlsonCodeForAirport:(id)arg1;
- (id)timezoneOlsonCodeForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)namesForAirport:(id)arg1;
- (id)namesForAirport:(id)arg1 withDataOffset:(id)arg2 andFileHandle:(id)arg3;
- (id)airportIataCodes;
- (id)airportIataCodesForDataOffset:(id)arg1;
- (void)updateCarriers;
- (void)updateAirports;
- (void)updateFlights;
- (id)init;

@end

