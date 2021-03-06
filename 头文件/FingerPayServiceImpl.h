//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FingerPayService.h"
#import "SafePayDelegate.h"

@class NSString, UIViewController;

@interface FingerPayServiceImpl : NSObject <FingerPayService, SafePayDelegate>
{
    _Bool _isMobile;
    _Bool _isOpened;
    UIViewController *_currentViewController;
    CDUnknownBlockType _statusBlock;
}

@property(copy, nonatomic) CDUnknownBlockType statusBlock; // @synthesize statusBlock=_statusBlock;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) _Bool isMobile; // @synthesize isMobile=_isMobile;
@property(retain, nonatomic) UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (void)complete:(_Bool)arg1;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (void)enableFingerprintPay:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (void)updateOpenStatus:(CDUnknownBlockType)arg1;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

