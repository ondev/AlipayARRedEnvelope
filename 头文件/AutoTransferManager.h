//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AutoTransferManager : NSObject
{
}

+ (int)ruleStatus:(id)arg1;
+ (void)commitAutoTransferIn:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)deleteRuleForAutoTransferIn:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferInRuleResult:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferInNewRuleData:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferInRuleList:(CDUnknownBlockType)arg1;
+ (void)queryAutoTransferInData:(CDUnknownBlockType)arg1;
+ (void)commitAutoTransferOut:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferOutNextDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)deleteRuleForAutoTransferOut:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferOutRuleResult:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferOutNewRuleData:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)queryAutoTransferOutRuleList:(CDUnknownBlockType)arg1;
+ (void)queryAutoTransferOutData:(CDUnknownBlockType)arg1;

@end

