//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSSetMobilePayPwdReq : NSObject
{
    _Bool _prisonBreak;
    NSString *_loginId;
    NSString *_tid;
    NSString *_cellID;
    NSString *_pwd;
    NSString *_regid;
    NSString *_businessMobileValidateStatus;
    NSString *_imei;
    NSString *_imsi;
}

@property(retain, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(retain, nonatomic) NSString *businessMobileValidateStatus; // @synthesize businessMobileValidateStatus=_businessMobileValidateStatus;
@property(retain, nonatomic) NSString *regid; // @synthesize regid=_regid;
@property(retain, nonatomic) NSString *pwd; // @synthesize pwd=_pwd;
@property(nonatomic) _Bool prisonBreak; // @synthesize prisonBreak=_prisonBreak;
@property(retain, nonatomic) NSString *cellID; // @synthesize cellID=_cellID;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;

@end

