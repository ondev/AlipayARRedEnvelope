//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSAFToString.h"

#import "FavBizItemProtocol.h"

@class NSDictionary, NSString;

@interface MOBILECSAFCollectShopInfo : MOBILECSAFToString <FavBizItemProtocol>
{
    int _state;
    double _orderNo;
    NSString *_shopId;
    NSString *_cityName;
    NSString *_shopName;
    NSString *_address;
    NSString *_coverUrl;
    double _score;
    NSString *_averagePrice;
    NSString *_categoryDesc;
    NSString *_distance;
    NSString *_thirdAreaInfo;
    NSDictionary *_ext;
}

+ (Class)extElementClass;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *thirdAreaInfo; // @synthesize thirdAreaInfo=_thirdAreaInfo;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(retain, nonatomic) NSString *averagePrice; // @synthesize averagePrice=_averagePrice;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) double orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (id)getChatSendingMessageWithToUid:(id)arg1 userType:(id)arg2;
- (id)objId;
- (id)type;
- (Class)cellClass;
- (id)localId;
- (_Bool)shareable;
- (id)formartAveragePrice;
- (id)otherInfos;
- (id)link;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

