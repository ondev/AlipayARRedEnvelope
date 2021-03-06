//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APMTaskScheduler, NSMutableDictionary;

@interface APResourceLoaderTaskScheduler : NSObject
{
    NSMutableDictionary *_referenceCount;
    APMTaskScheduler *_taskScheduler;
    struct _opaque_pthread_mutex_t _refCountLock;
}

+ (id)shareResourceLoaderTaskScheduler;
@property(retain, nonatomic) APMTaskScheduler *taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(nonatomic) struct _opaque_pthread_mutex_t refCountLock; // @synthesize refCountLock=_refCountLock;
@property(retain, nonatomic) NSMutableDictionary *referenceCount; // @synthesize referenceCount=_referenceCount;
- (void).cxx_destruct;
- (void)removeTask:(id)arg1;
- (void)addReferenceCountWithTaskId:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)addTask:(id)arg1;
- (id)init;

@end

