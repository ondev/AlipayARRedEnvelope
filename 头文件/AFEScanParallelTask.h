//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFEBaseTask.h"

#import "EyePrintDelegate.h"

@class AFEBehavLogManager, AFEDataCenter, AFEEyeWrapper, AFEFaceWrapper, AFERemoteConfig, BisClientConfigContent, NSDate, NSString;

@interface AFEScanParallelTask : AFEBaseTask <EyePrintDelegate>
{
    _Bool _isBusy;
    id <ScanDelegate> _scanDelegate;
    id <DataCenterDelegate> _rpcDelegate;
    AFEFaceWrapper *_faceDetector;
    AFEEyeWrapper *_eyeDetecor;
    BisClientConfigContent *_protocol;
    AFERemoteConfig *_remoteConfig;
    AFEBehavLogManager *_behavLogManager;
    AFEDataCenter *_dataCenter;
    NSDate *_startTime;
}

@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AFEDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(nonatomic) __weak AFEBehavLogManager *behavLogManager; // @synthesize behavLogManager=_behavLogManager;
@property(nonatomic) __weak AFERemoteConfig *remoteConfig; // @synthesize remoteConfig=_remoteConfig;
@property(nonatomic) __weak BisClientConfigContent *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) AFEEyeWrapper *eyeDetecor; // @synthesize eyeDetecor=_eyeDetecor;
@property(retain, nonatomic) AFEFaceWrapper *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(nonatomic) __weak id <DataCenterDelegate> rpcDelegate; // @synthesize rpcDelegate=_rpcDelegate;
@property(nonatomic) __weak id <ScanDelegate> scanDelegate; // @synthesize scanDelegate=_scanDelegate;
- (void).cxx_destruct;
- (id)eyeContentFromCaptured:(struct eyeverify_capture_t *)arg1;
- (id)faceContentFromFrame:(id)arg1;
- (void)onUploadNotification:(id)arg1;
- (void)onDistanceChanged:(double)arg1;
- (void)onEyeCoordinateChanged:(struct CGRect)arg1 right:(struct CGRect)arg2;
- (void)onEyeStatusChanged:(long long)arg1;
- (void)onLightStatusChanged:(long long)arg1 brightness:(double)arg2;
- (void)onStepFinished:(int)arg1 withCaptured:(struct eyeverify_capture_t *)arg2;
- (void)stepCompleted;
- (void)reset;
- (void)invokeWithPipeInfo:(id)arg1;
- (void)resume;
- (void)pause;
- (void)setCaptureView:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

