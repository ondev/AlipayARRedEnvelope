//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface LFCPBFeed : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFeedId;
    _Bool _hasClientId;
    _Bool _hasCreateTime;
    _Bool _hasSceneCode;
    _Bool _hasBizType;
    _Bool _hasBizNo;
    _Bool _hasTemplateId;
    _Bool _hasTemplateData;
    _Bool _hasExt;
    _Bool _hasPraiseCount;
    _Bool _hasRewardCount;
    _Bool _hasReplyCount;
    _Bool _hasUserId;
    _Bool _hasOfficalRewardCount;
    int _praiseCount;
    int _rewardCount;
    int _replyCount;
    int _officalRewardCount;
    NSString *_feedId;
    NSString *_clientId;
    long long _createTime;
    NSString *_sceneCode;
    NSString *_bizType;
    NSString *_bizNo;
    NSString *_templateId;
    NSString *_templateData;
    NSString *_ext;
    NSMutableArray *_praiseList;
    NSMutableArray *_rewardList;
    NSMutableArray *_replyList;
    NSString *_userId;
    NSMutableArray *_officalRewardList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int officalRewardCount; // @synthesize officalRewardCount=_officalRewardCount;
@property(retain, nonatomic) NSMutableArray *officalRewardList; // @synthesize officalRewardList=_officalRewardList;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) int replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) NSMutableArray *replyList; // @synthesize replyList=_replyList;
@property(nonatomic) int rewardCount; // @synthesize rewardCount=_rewardCount;
@property(retain, nonatomic) NSMutableArray *rewardList; // @synthesize rewardList=_rewardList;
@property(nonatomic) int praiseCount; // @synthesize praiseCount=_praiseCount;
@property(retain, nonatomic) NSMutableArray *praiseList; // @synthesize praiseList=_praiseList;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(readonly) _Bool hasOfficalRewardCount; // @synthesize hasOfficalRewardCount=_hasOfficalRewardCount;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasReplyCount; // @synthesize hasReplyCount=_hasReplyCount;
@property(readonly) _Bool hasRewardCount; // @synthesize hasRewardCount=_hasRewardCount;
@property(readonly) _Bool hasPraiseCount; // @synthesize hasPraiseCount=_hasPraiseCount;
@property(readonly) _Bool hasExt; // @synthesize hasExt=_hasExt;
@property(readonly) _Bool hasTemplateData; // @synthesize hasTemplateData=_hasTemplateData;
@property(readonly) _Bool hasTemplateId; // @synthesize hasTemplateId=_hasTemplateId;
@property(readonly) _Bool hasBizNo; // @synthesize hasBizNo=_hasBizNo;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasSceneCode; // @synthesize hasSceneCode=_hasSceneCode;
@property(readonly) _Bool hasCreateTime; // @synthesize hasCreateTime=_hasCreateTime;
@property(readonly) _Bool hasClientId; // @synthesize hasClientId=_hasClientId;
@property(readonly) _Bool hasFeedId; // @synthesize hasFeedId=_hasFeedId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addOfficalRewardList:(id)arg1;
- (void)setOfficalRewardListArray:(id)arg1;
- (void)addReplyList:(id)arg1;
- (void)setReplyListArray:(id)arg1;
- (void)addRewardList:(id)arg1;
- (void)setRewardListArray:(id)arg1;
- (void)addPraiseList:(id)arg1;
- (void)setPraiseListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (void)feedToContentCard:(id)arg1 withPraiseArr:(id)arg2 withRewardArr:(id)arg3 withCommArr:(id)arg4 rpcDate:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

