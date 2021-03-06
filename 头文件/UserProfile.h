//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCopying.h"

@class NSString;

@interface UserProfile : APPBGeneratedMessage <NSCopying, GeneratedMessageProtocol>
{
    _Bool _hasUserId;
    _Bool _hasLogonid;
    _Bool _hasIconUrl;
    _Bool _hasNickName;
    _Bool _hasDistance;
    _Bool _hasIsRealFriends;
    _Bool _isRealFriends;
    NSString *_userId;
    NSString *_logonid;
    NSString *_iconUrl;
    NSString *_nickName;
    double _distance;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool isRealFriends; // @synthesize isRealFriends=_isRealFriends;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *logonid; // @synthesize logonid=_logonid;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly) _Bool hasIsRealFriends; // @synthesize hasIsRealFriends=_hasIsRealFriends;
@property(readonly) _Bool hasDistance; // @synthesize hasDistance=_hasDistance;
@property(readonly) _Bool hasNickName; // @synthesize hasNickName=_hasNickName;
@property(readonly) _Bool hasIconUrl; // @synthesize hasIconUrl=_hasIconUrl;
@property(readonly) _Bool hasLogonid; // @synthesize hasLogonid=_hasLogonid;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

