//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LSErrorInfo, LSHomeDataManager, LSLiveShowInfo, LSOptionInfo, LSStatisticInfo, NSString;

@protocol LSHomeDataManagerDelegate <NSObject>
- (void)dataManager:(LSHomeDataManager *)arg1 pickedExistLiveFail:(LSErrorInfo *)arg2;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedExistLive:(LSLiveShowInfo *)arg2 memoInfo:(NSString *)arg3;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedStatisticInfoFail:(LSErrorInfo *)arg2;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedLiveShowFail:(LSErrorInfo *)arg2;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedOptionInfo:(LSOptionInfo *)arg2;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedLiveStatisticsInfo:(LSStatisticInfo *)arg2;
- (void)dataManager:(LSHomeDataManager *)arg1 pickedLiveShowInfo:(LSLiveShowInfo *)arg2 memoInfo:(NSString *)arg3;
@end

