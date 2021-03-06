//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REEnvelopeOpenedViewDelegate.h"
#import "REEnvelopePreViewDelegate.h"

@class GiftPublicDetailResult, NSDictionary, NSString, REDataEngine, REEnvelopeView, UIViewController;

@interface RESocialDataManager : NSObject <REEnvelopePreViewDelegate, REEnvelopeOpenedViewDelegate>
{
    REEnvelopeView *_envelopView;
    REDataEngine *_dataEngine;
    GiftPublicDetailResult *_result;
    _Bool _isResume;
    UIViewController *_lastVCInProgress;
    NSDictionary *_launchOptions;
    NSDictionary *_extendOptions;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSDictionary *extendOptions; // @synthesize extendOptions=_extendOptions;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)doAppCallBack;
- (void)openLinkUrl:(id)arg1;
- (void)checkIfExitApp;
- (void)hiddenProgressHD;
- (void)showProgressHD;
- (void)openedEnvelopeDidDismiss:(id)arg1;
- (void)linkTextDidClicked:(id)arg1 andLink:(id)arg2;
- (void)buttonClicked:(id)arg1;
- (void)linkTextClicked:(id)arg1 andLink:(id)arg2;
- (void)clickOpenButton:(id)arg1;
- (void)envelopeDidDismiss:(id)arg1;
- (void)requestDataRPC;
- (void)resetMgr;
- (void)handleWidthOptions:(id)arg1 withResume:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

