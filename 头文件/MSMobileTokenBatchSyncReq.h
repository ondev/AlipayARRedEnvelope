//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSMobileTokenBatchSyncReq : MSToString
{
    NSString *_logonIdList;
    NSString *_tid;
    NSString *_imei;
    NSString *_imsi;
    NSString *_sePubKey;
    NSString *_location;
}

@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *sePubKey; // @synthesize sePubKey=_sePubKey;
@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *logonIdList; // @synthesize logonIdList=_logonIdList;
- (void).cxx_destruct;

@end

