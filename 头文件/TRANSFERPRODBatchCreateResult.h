//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRANSFERPRODRPCResponse.h"

@class NSString;

@interface TRANSFERPRODBatchCreateResult : TRANSFERPRODRPCResponse
{
    NSString *_batchNo;
    NSString *_token;
    NSString *_redirectUrl;
    NSString *_redirectText;
}

@property(retain, nonatomic) NSString *redirectText; // @synthesize redirectText=_redirectText;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *batchNo; // @synthesize batchNo=_batchNo;
- (void).cxx_destruct;

@end

