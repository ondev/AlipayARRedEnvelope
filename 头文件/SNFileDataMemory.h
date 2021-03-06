//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSOperationQueue;

@interface SNFileDataMemory : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableDictionary *_memoryMap;
    NSOperationQueue *_queue;
}

+ (id)safeReadDataWithPath:(id)arg1;
+ (void)syncMainQueue:(CDUnknownBlockType)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *memoryMap; // @synthesize memoryMap=_memoryMap;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)dealloc;
- (void)memoryWarning:(id)arg1;
- (id)getDecodeString:(id)arg1;
- (id)loadMemory:(id)arg1 biz:(id)arg2 path:(id)arg3;
- (void)reciveDataChanged:(id)arg1;
- (id)init;

@end

