//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableArray, NSString, VISZClientDataManager, VITaskManager;

@interface VITask : NSObject
{
    _Bool _isNotFirstModule;
    _Bool _didEnterBackground;
    NSString *_token;
    NSString *_verifyId;
    NSString *_verifyType;
    VITaskManager *_taskManager;
    NSDictionary *_extParams;
    NSString *_bizRequestData;
    double _timeoutInterval;
    unsigned long long _initTaskRPCInterval;
    unsigned long long _taskCreateTime;
    NSDictionary *_keyParams;
    NSMutableArray *_modules;
    NSDate *_startDate;
    CDUnknownBlockType _onComplete;
    VISZClientDataManager *_safeZoneDataManager;
    id <VIVersionStrategy> _strategyContext;
    unsigned long long _moduleCreateTime;
    NSMutableArray *_taskObservers;
}

@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
@property(retain, nonatomic) NSMutableArray *taskObservers; // @synthesize taskObservers=_taskObservers;
@property(nonatomic) unsigned long long moduleCreateTime; // @synthesize moduleCreateTime=_moduleCreateTime;
@property(nonatomic) _Bool isNotFirstModule; // @synthesize isNotFirstModule=_isNotFirstModule;
@property(retain, nonatomic) id <VIVersionStrategy> strategyContext; // @synthesize strategyContext=_strategyContext;
@property(retain, nonatomic) VISZClientDataManager *safeZoneDataManager; // @synthesize safeZoneDataManager=_safeZoneDataManager;
@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete=_onComplete;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSDictionary *keyParams; // @synthesize keyParams=_keyParams;
@property(nonatomic) unsigned long long taskCreateTime; // @synthesize taskCreateTime=_taskCreateTime;
@property(nonatomic) unsigned long long initTaskRPCInterval; // @synthesize initTaskRPCInterval=_initTaskRPCInterval;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSString *bizRequestData; // @synthesize bizRequestData=_bizRequestData;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(nonatomic) __weak VITaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain, nonatomic) NSString *verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)monitorQuitSDKWithCallbackParams:(id)arg1;
- (void)monitorQuitModuleWithResponse:(id)arg1;
- (void)monitorStartModuleWithResponse:(id)arg1;
- (void)monitorStartFirstModuleByResponse:(id)arg1;
- (void)dealloc;
- (void)invokeObserverForKey:(unsigned long long)arg1;
- (void)addTaskObserver:(id)arg1;
- (id)currentModule;
- (void)cancel;
- (void)invalidate;
- (void)callbackWithParams:(id)arg1;
- (_Bool)isLiving;
- (void)finishWithParams:(id)arg1;
- (void)finishWithResponse:(id)arg1;
- (void)handleModuleResponse:(id)arg1;
- (void)verifyNextModule:(id)arg1;
- (void)updateTaskContext;
- (void)startTask;
- (void)initSafeZoneCompletion:(CDUnknownBlockType)arg1;
- (void)execute;
- (id)initWithKeyParams:(id)arg1 extParams:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)initWithExtParams:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)didEnterBackgroundHandler;
- (void)removeCompletionCallback;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

