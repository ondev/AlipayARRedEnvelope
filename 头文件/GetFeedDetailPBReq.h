//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface GetFeedDetailPBReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSceneCode;
    _Bool _hasBizType;
    _Bool _hasBizNo;
    NSString *_sceneCode;
    NSString *_bizType;
    NSString *_bizNo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(readonly) _Bool hasBizNo; // @synthesize hasBizNo=_hasBizNo;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasSceneCode; // @synthesize hasSceneCode=_hasSceneCode;
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

