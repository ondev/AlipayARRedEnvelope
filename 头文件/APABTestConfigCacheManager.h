//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APABTestConfig, APLRUDiskCache;

@interface APABTestConfigCacheManager : NSObject
{
    APABTestConfig *_memoryCachedConfig;
    APLRUDiskCache *_internalDiskCache;
}

@property(retain, nonatomic) APLRUDiskCache *internalDiskCache; // @synthesize internalDiskCache=_internalDiskCache;
@property(retain, nonatomic) APABTestConfig *memoryCachedConfig; // @synthesize memoryCachedConfig=_memoryCachedConfig;
- (void).cxx_destruct;
- (void)saveCache:(id)arg1;
- (void)clearCache;
- (void)loadDefaultConfig;
- (void)readConfigFromCache;
- (void)checkMemoryCacheConfigIsValid;
- (id)cachedConfig;
- (id)initWithName:(id)arg1;
- (id)init;

@end

