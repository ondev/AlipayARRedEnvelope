//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSString;

@interface APABTestConfigItem : NSObject <NSCoding>
{
    NSString *_configItemId;
    NSString *_status;
    NSString *_groupName;
    NSString *_testName;
    NSString *_bucketName;
    long long _beginTime;
    long long _endTime;
    NSString *_extParam;
    NSArray *_viewIds;
    NSArray *_spms;
    NSDictionary *_abBucketInfo;
}

@property(retain, nonatomic) NSDictionary *abBucketInfo; // @synthesize abBucketInfo=_abBucketInfo;
@property(retain, nonatomic) NSArray *spms; // @synthesize spms=_spms;
@property(retain, nonatomic) NSArray *viewIds; // @synthesize viewIds=_viewIds;
@property(readonly, nonatomic) NSString *extParam; // @synthesize extParam=_extParam;
@property(readonly, nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(readonly, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) NSString *configItemId; // @synthesize configItemId=_configItemId;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfigItemId:(id)arg1 status:(id)arg2 groupName:(id)arg3 testName:(id)arg4 bucketName:(id)arg5 beginTime:(long long)arg6 endTime:(long long)arg7 extParam:(id)arg8 viewIds:(id)arg9 spms:(id)arg10 abBucketInfo:(id)arg11;

@end

