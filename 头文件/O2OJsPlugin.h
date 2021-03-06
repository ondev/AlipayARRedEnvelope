//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSDPluginProtocol.h"
#import "TLRewardOptionUIDelegate.h"

@class NSString, TLRewardOptionUI;

@interface O2OJsPlugin : NSObject <TLRewardOptionUIDelegate, PSDPluginProtocol>
{
    TLRewardOptionUI *_rewardUI;
    CDUnknownBlockType _responseCallbackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType responseCallbackBlock; // @synthesize responseCallbackBlock=_responseCallbackBlock;
@property(retain, nonatomic) TLRewardOptionUI *rewardUI; // @synthesize rewardUI=_rewardUI;
- (void).cxx_destruct;
- (void)rewardDidFinish:(id)arg1 plumpRewardOption:(id)arg2;
- (void)prepardRewardDidFail:(id)arg1 failMemo:(id)arg2;
- (void)rewardDidCancel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)handleEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

