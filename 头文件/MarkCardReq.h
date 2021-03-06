//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface MarkCardReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasFeedId;
    _Bool _hasBizNo;
    _Bool _hasOperation;
    _Bool _hasExt;
    _Bool _hasSceneCode;
    _Bool _hasBizType;
    NSString *_feedId;
    NSString *_bizNo;
    NSString *_operation;
    NSString *_ext;
    NSString *_sceneCode;
    NSString *_bizType;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasSceneCode; // @synthesize hasSceneCode=_hasSceneCode;
@property(readonly) _Bool hasExt; // @synthesize hasExt=_hasExt;
@property(readonly) _Bool hasOperation; // @synthesize hasOperation=_hasOperation;
@property(readonly) _Bool hasBizNo; // @synthesize hasBizNo=_hasBizNo;
@property(readonly) _Bool hasFeedId; // @synthesize hasFeedId=_hasFeedId;
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

