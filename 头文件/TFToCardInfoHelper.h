//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller;

@interface TFToCardInfoHelper : NSObject
{
    DTRpcAsyncCaller *_checkCardBinCaller;
    DTRpcAsyncCaller *_queryCardInfoCaller;
}

- (void).cxx_destruct;
- (void)queryCardInfoWithBizNo:(id)arg1 loadingInView:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)clearAll;

@end

