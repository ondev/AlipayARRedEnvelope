//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCoding.h"

@class Community, NSMutableArray, NSString;

@interface QueryCommunityResp : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasResultStatus;
    _Bool _hasMemo;
    _Bool _hasHasJoined;
    _Bool _hasBaseInfo;
    _Bool _hasLastFeedId;
    _Bool _hasMemberNum;
    _Bool _hasNickName;
    _Bool _hasAdmin;
    _Bool _hasShowMember;
    _Bool _hasShowQuit;
    _Bool _hasMenuDisplayType;
    _Bool _hasHasMore;
    _Bool _hasAppRows;
    _Bool _hasRedirectUrl;
    _Bool _hasSubscribed;
    _Bool _hasShowSettings;
    _Bool _hasSubTitle;
    _Bool _hasCanPublish;
    _Bool _hasRefusePublishTip;
    _Bool _hasNoDisturb;
    _Bool _hasAuditTip;
    _Bool _hasAuditSchema;
    _Bool _hasJoined;
    _Bool _admin;
    _Bool _showMember;
    _Bool _showQuit;
    _Bool _hasMore;
    _Bool _subscribed;
    _Bool _showSettings;
    _Bool _canPublish;
    _Bool _noDisturb;
    int _memberNum;
    int _menuDisplayType;
    int _appRows;
    NSString *_resultStatus;
    NSString *_memo;
    Community *_baseInfo;
    NSMutableArray *_feeds;
    NSString *_lastFeedId;
    NSString *_nickName;
    NSMutableArray *_adminList;
    NSMutableArray *_stickFeeds;
    NSString *_redirectUrl;
    NSString *_subTitle;
    NSString *_refusePublishTip;
    NSMutableArray *_extDict;
    NSMutableArray *_communityMembers;
    NSMutableArray *_configItems;
    NSString *_auditTip;
    NSString *_auditSchema;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *auditSchema; // @synthesize auditSchema=_auditSchema;
@property(retain, nonatomic) NSString *auditTip; // @synthesize auditTip=_auditTip;
@property(retain, nonatomic) NSMutableArray *configItems; // @synthesize configItems=_configItems;
@property(retain, nonatomic) NSMutableArray *communityMembers; // @synthesize communityMembers=_communityMembers;
@property(retain, nonatomic) NSMutableArray *extDict; // @synthesize extDict=_extDict;
@property(nonatomic) _Bool noDisturb; // @synthesize noDisturb=_noDisturb;
@property(retain, nonatomic) NSString *refusePublishTip; // @synthesize refusePublishTip=_refusePublishTip;
@property(nonatomic) _Bool canPublish; // @synthesize canPublish=_canPublish;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool showSettings; // @synthesize showSettings=_showSettings;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(nonatomic) int appRows; // @synthesize appRows=_appRows;
@property(retain, nonatomic) NSMutableArray *stickFeeds; // @synthesize stickFeeds=_stickFeeds;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int menuDisplayType; // @synthesize menuDisplayType=_menuDisplayType;
@property(nonatomic) _Bool showQuit; // @synthesize showQuit=_showQuit;
@property(nonatomic) _Bool showMember; // @synthesize showMember=_showMember;
@property(nonatomic) _Bool admin; // @synthesize admin=_admin;
@property(retain, nonatomic) NSMutableArray *adminList; // @synthesize adminList=_adminList;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) int memberNum; // @synthesize memberNum=_memberNum;
@property(retain, nonatomic) NSString *lastFeedId; // @synthesize lastFeedId=_lastFeedId;
@property(retain, nonatomic) NSMutableArray *feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) Community *baseInfo; // @synthesize baseInfo=_baseInfo;
@property(nonatomic) _Bool hasJoined; // @synthesize hasJoined=_hasJoined;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *resultStatus; // @synthesize resultStatus=_resultStatus;
@property(readonly) _Bool hasAuditSchema; // @synthesize hasAuditSchema=_hasAuditSchema;
@property(readonly) _Bool hasAuditTip; // @synthesize hasAuditTip=_hasAuditTip;
@property(readonly) _Bool hasNoDisturb; // @synthesize hasNoDisturb=_hasNoDisturb;
@property(readonly) _Bool hasRefusePublishTip; // @synthesize hasRefusePublishTip=_hasRefusePublishTip;
@property(readonly) _Bool hasCanPublish; // @synthesize hasCanPublish=_hasCanPublish;
@property(readonly) _Bool hasSubTitle; // @synthesize hasSubTitle=_hasSubTitle;
@property(readonly) _Bool hasShowSettings; // @synthesize hasShowSettings=_hasShowSettings;
@property(readonly) _Bool hasSubscribed; // @synthesize hasSubscribed=_hasSubscribed;
@property(readonly) _Bool hasRedirectUrl; // @synthesize hasRedirectUrl=_hasRedirectUrl;
@property(readonly) _Bool hasAppRows; // @synthesize hasAppRows=_hasAppRows;
@property(readonly) _Bool hasHasMore; // @synthesize hasHasMore=_hasHasMore;
@property(readonly) _Bool hasMenuDisplayType; // @synthesize hasMenuDisplayType=_hasMenuDisplayType;
@property(readonly) _Bool hasShowQuit; // @synthesize hasShowQuit=_hasShowQuit;
@property(readonly) _Bool hasShowMember; // @synthesize hasShowMember=_hasShowMember;
@property(readonly) _Bool hasAdmin; // @synthesize hasAdmin=_hasAdmin;
@property(readonly) _Bool hasNickName; // @synthesize hasNickName=_hasNickName;
@property(readonly) _Bool hasMemberNum; // @synthesize hasMemberNum=_hasMemberNum;
@property(readonly) _Bool hasLastFeedId; // @synthesize hasLastFeedId=_hasLastFeedId;
@property(readonly) _Bool hasBaseInfo; // @synthesize hasBaseInfo=_hasBaseInfo;
@property(readonly) _Bool hasHasJoined; // @synthesize hasHasJoined=_hasHasJoined;
@property(readonly) _Bool hasMemo; // @synthesize hasMemo=_hasMemo;
@property(readonly) _Bool hasResultStatus; // @synthesize hasResultStatus=_hasResultStatus;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addConfigItems:(id)arg1;
- (void)setConfigItemsArray:(id)arg1;
- (void)addCommunityMembers:(id)arg1;
- (void)setCommunityMembersArray:(id)arg1;
- (void)addExtDict:(id)arg1;
- (void)setExtDictArray:(id)arg1;
- (void)addStickFeeds:(id)arg1;
- (void)setStickFeedsArray:(id)arg1;
- (void)addAdminList:(id)arg1;
- (void)setAdminListArray:(id)arg1;
- (void)addFeeds:(id)arg1;
- (void)setFeedsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

