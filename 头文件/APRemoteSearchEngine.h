//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTRpcAsyncCaller, NSString;

@interface APRemoteSearchEngine : NSObject
{
    NSString *_searchParamas;
    DTRpcAsyncCaller *_caller;
    DTRpcAsyncCaller *_suggestCaller;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) __weak DTRpcAsyncCaller *suggestCaller; // @synthesize suggestCaller=_suggestCaller;
@property(nonatomic) __weak DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(retain, nonatomic) NSString *searchParamas; // @synthesize searchParamas=_searchParamas;
- (void).cxx_destruct;
- (id)getSearchArgs:(id)arg1;
- (void)suggestSearch:(id)arg1 actionSrc:(id)arg2 currentCity:(id)arg3 location:(id)arg4 searchSessionId:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)remoteSearchText:(id)arg1 localGroupConfigs:(id)arg2 remoteGroups:(id)arg3 launchSource:(id)arg4 searchSource:(id)arg5 searchSessionId:(id)arg6 searchMenuInfo:(id)arg7 location:(id)arg8 startIndex:(long long)arg9 count:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)dealloc;

@end

