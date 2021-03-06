//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface VoiceToTextRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasAudioId;
    _Bool _hasAudioType;
    _Bool _hasBizType;
    _Bool _hasUuid;
    NSString *_audioId;
    NSString *_audioType;
    NSString *_bizType;
    NSString *_uuid;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *audioType; // @synthesize audioType=_audioType;
@property(retain, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(readonly) _Bool hasUuid; // @synthesize hasUuid=_hasUuid;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
@property(readonly) _Bool hasAudioType; // @synthesize hasAudioType=_hasAudioType;
@property(readonly) _Bool hasAudioId; // @synthesize hasAudioId=_hasAudioId;
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

