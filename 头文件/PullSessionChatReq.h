//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface PullSessionChatReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSessionId;
    _Bool _hasUserId;
    _Bool _hasUserType;
    _Bool _hasPoolNew;
    _Bool _hasMsgId;
    NSString *_sessionId;
    NSString *_userId;
    NSString *_userType;
    NSString *_poolNew;
    long long _msgId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *poolNew; // @synthesize poolNew=_poolNew;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly) _Bool hasMsgId; // @synthesize hasMsgId=_hasMsgId;
@property(readonly) _Bool hasPoolNew; // @synthesize hasPoolNew=_hasPoolNew;
@property(readonly) _Bool hasUserType; // @synthesize hasUserType=_hasUserType;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasSessionId; // @synthesize hasSessionId=_hasSessionId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

