//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, SWLoadingAlert;

@interface ImmPayDevAuthSession : NSObject
{
    _Bool _needUI;
    long long _type;
    NSString *_action;
    NSString *_challenge;
    NSString *_keyOfAuthData;
    NSString *_title;
    NSString *_skipAuth;
    NSNumber *_onlyAuth;
    NSString *_loadingTxt;
    SWLoadingAlert *_loadingAlert;
    NSString *_thirdAuthData;
    long long _result;
    NSString *_errMsg;
    NSString *_authData;
}

@property(copy, nonatomic) NSString *authData; // @synthesize authData=_authData;
@property(copy, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *thirdAuthData; // @synthesize thirdAuthData=_thirdAuthData;
@property(retain, nonatomic) SWLoadingAlert *loadingAlert; // @synthesize loadingAlert=_loadingAlert;
@property(nonatomic) _Bool needUI; // @synthesize needUI=_needUI;
@property(retain, nonatomic) NSString *loadingTxt; // @synthesize loadingTxt=_loadingTxt;
@property(readonly, copy, nonatomic) NSNumber *onlyAuth; // @synthesize onlyAuth=_onlyAuth;
@property(readonly, copy, nonatomic) NSString *skipAuth; // @synthesize skipAuth=_skipAuth;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *keyOfAuthData; // @synthesize keyOfAuthData=_keyOfAuthData;
@property(readonly, copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *afterAction; // @dynamic afterAction;
- (void)parseAppauth:(id)arg1;
- (void)parseOperation:(id)arg1;
- (void)parseScan:(id)arg1;
- (void)parseAuthOp:(id)arg1;
- (void)dealloc;
- (id)initWithAuthOperation:(id)arg1;

@end

