//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCRPCDataManager : NSObject
{
}

+ (void)monitorAppClickWith:(id)arg1 withAppId:(id)arg2;
+ (void)confirmPhoneNumberWith:(id)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)isEmptyString:(id)arg1;
+ (id)toArrayOrNSDictionary:(id)arg1;
+ (id)buttonTitleArray:(id)arg1;
+ (id)findLogoImagebyResutl:(id)arg1;
+ (id)securityCheckToken;
+ (id)currentUserId;
+ (id)getSecData;
+ (void)requestSecurityCheckResultWithToken:(id)arg1 virusLevel:(long long)arg2 dangerLevel:(long long)arg3 callBack:(CDUnknownBlockType)arg4;

@end

