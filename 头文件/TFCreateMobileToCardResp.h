//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TFBaseRespVO.h"

@class NSString;

@interface TFCreateMobileToCardResp : TFBaseRespVO
{
    NSString *_transferNo;
    NSString *_bizType;
    NSString *_bizSubType;
}

@property(retain, nonatomic) NSString *bizSubType; // @synthesize bizSubType=_bizSubType;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *transferNo; // @synthesize transferNo=_transferNo;
- (void).cxx_destruct;

@end

