//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APFBaseTask.h"

#import "APBMotionServiceDelegate.h"
#import "APFCameraServiceDelegate.h"
#import "APFaceServiceDelegate.h"
#import "IStatusBarDelegate.h"

@class AFECircularView, APBMotionService, APFCameraService, APFaceService, MGLivenessDetectionFrame, NSDate, NSMutableArray, NSString, NSTimer;

@interface APFCherryDetectTask : APFBaseTask <APFaceServiceDelegate, APFCameraServiceDelegate, APBMotionServiceDelegate, IStatusBarDelegate>
{
    struct status_evaluator_t statusEvaluator;
    struct CBlinkEvaluator blinkAccumulator;
    struct frame_accumulator_t frameAccumulator;
    struct tip_evaluator_t tipEvaluator;
    struct mine_accumulator_t mineAccumulator;
    _Bool _isCheckFace;
    _Bool _isPoseOK;
    _Bool _isUploading;
    _Bool _isTaskPause;
    int _action;
    AFECircularView *_circularView;
    APFCameraService *_cameraService;
    APFaceService *_faceService;
    APBMotionService *_motionService;
    NSTimer *_logMonitorTimer;
    NSTimer *_imgMonitorTimer;
    NSTimer *_tipsTimer;
    NSDate *_startTime;
    MGLivenessDetectionFrame *_monitorFrame;
    double _poseFirst;
    NSMutableArray *_sensorCache;
    NSMutableArray *_allSensorCache;
    NSMutableArray *_nineShootCache;
    double _brightness;
    struct APBAttitude_t _attitude;
    CDStruct_31142d93 _acceleration;
    CDStruct_31142d93 _rotation;
    CDStruct_31142d93 _magnetic;
}

@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) _Bool isTaskPause; // @synthesize isTaskPause=_isTaskPause;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(nonatomic) struct APBAttitude_t attitude; // @synthesize attitude=_attitude;
@property(nonatomic) CDStruct_31142d93 magnetic; // @synthesize magnetic=_magnetic;
@property(nonatomic) CDStruct_31142d93 rotation; // @synthesize rotation=_rotation;
@property(nonatomic) CDStruct_31142d93 acceleration; // @synthesize acceleration=_acceleration;
@property(retain, nonatomic) NSMutableArray *nineShootCache; // @synthesize nineShootCache=_nineShootCache;
@property(retain, nonatomic) NSMutableArray *allSensorCache; // @synthesize allSensorCache=_allSensorCache;
@property(retain, nonatomic) NSMutableArray *sensorCache; // @synthesize sensorCache=_sensorCache;
@property(nonatomic) double poseFirst; // @synthesize poseFirst=_poseFirst;
@property(nonatomic) _Bool isPoseOK; // @synthesize isPoseOK=_isPoseOK;
@property(nonatomic) _Bool isCheckFace; // @synthesize isCheckFace=_isCheckFace;
@property(retain, nonatomic) MGLivenessDetectionFrame *monitorFrame; // @synthesize monitorFrame=_monitorFrame;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSTimer *tipsTimer; // @synthesize tipsTimer=_tipsTimer;
@property(retain, nonatomic) NSTimer *imgMonitorTimer; // @synthesize imgMonitorTimer=_imgMonitorTimer;
@property(retain, nonatomic) NSTimer *logMonitorTimer; // @synthesize logMonitorTimer=_logMonitorTimer;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) APBMotionService *motionService; // @synthesize motionService=_motionService;
@property(retain, nonatomic) APFaceService *faceService; // @synthesize faceService=_faceService;
@property(retain, nonatomic) APFCameraService *cameraService; // @synthesize cameraService=_cameraService;
@property(retain, nonatomic) AFECircularView *circularView; // @synthesize circularView=_circularView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onButtonCancel;
- (void)attitudeDidUpdate:(struct APBAttitude_t)arg1;
- (void)magneticDidUpdate:(CDStruct_31142d93)arg1;
- (void)gyrometerDidUpdate:(CDStruct_31142d93)arg1;
- (void)accelerationDidUpdate:(CDStruct_31142d93)arg1;
- (id)StructToArrayWithXValue:(float)arg1 yValue:(float)arg2 zValue:(float)arg3;
- (void)cameraControllerCaptureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (int)onDetectionSuccess:(id)arg1;
- (void)onDetectionFailed:(int)arg1;
- (void)onTipTimer;
- (void)onImgTimer;
- (void)onLogTimer;
- (id)generateBehavTask;
- (void)detectSelfResearchBlink:(id)arg1;
- (void)detectNoliveness:(id)arg1;
- (void)handleNineShootFrames;
- (void)handleAccumulatedFrames;
- (void)resumeTimerAndService;
- (void)pauseTimerAndServices;
- (void)exitWithResult:(int)arg1 failReason:(id)arg2;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)adjustScreenBrightness;
- (void)invokeWithPipeInfo:(id)arg1;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

