//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface APSHOPCENTERHomePageRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *cityCode; // @dynamic cityCode;
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(readonly) _Bool hasCityCode; // @dynamic hasCityCode;
@property(readonly) _Bool hasCountryCode; // @dynamic hasCountryCode;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;

@end

