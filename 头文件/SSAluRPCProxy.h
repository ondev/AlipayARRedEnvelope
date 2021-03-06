//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "aluRPCProxy.h"

@class DTRpcAsyncCaller, NSDictionary, NSString;

@interface SSAluRPCProxy : NSObject <aluRPCProxy>
{
    _Bool _cancelledBeforeRpcAsyncCallerCreated;
    NSString *_operationType;
    id _param;
    id _resultClass;
    id _result;
    NSDictionary *_headerDic;
    DTRpcAsyncCaller *_rpcAsyncCaller;
}

@property(nonatomic) _Bool cancelledBeforeRpcAsyncCallerCreated; // @synthesize cancelledBeforeRpcAsyncCallerCreated=_cancelledBeforeRpcAsyncCallerCreated;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcAsyncCaller; // @synthesize rpcAsyncCaller=_rpcAsyncCaller;
@property(retain, nonatomic) NSDictionary *headerDic; // @synthesize headerDic=_headerDic;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) id resultClass; // @synthesize resultClass=_resultClass;
@property(retain, nonatomic) id param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
- (void).cxx_destruct;
- (void)monitorUnifyLoginClientCode:(id)arg1;
- (_Bool)isCancelled;
- (void)cancel;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)configWith:(id)arg1 param:(id)arg2 resultClass:(id)arg3 extraInfo:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

