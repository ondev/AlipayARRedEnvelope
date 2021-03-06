//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface ProtoPrincipalData : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPrincipalIdType;
    _Bool _hasPrincipalId;
    _Bool _hasNotCheckPrincipal;
    _Bool _notCheckPrincipal;
    int _principalIdType;
    NSString *_principalId;
    NSMutableArray *_bizSyncData;
    NSMutableArray *_bucketSyncData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *bucketSyncData; // @synthesize bucketSyncData=_bucketSyncData;
@property(nonatomic) _Bool notCheckPrincipal; // @synthesize notCheckPrincipal=_notCheckPrincipal;
@property(retain, nonatomic) NSMutableArray *bizSyncData; // @synthesize bizSyncData=_bizSyncData;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalIdType; // @synthesize principalIdType=_principalIdType;
@property(readonly) _Bool hasNotCheckPrincipal; // @synthesize hasNotCheckPrincipal=_hasNotCheckPrincipal;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalIdType; // @synthesize hasPrincipalIdType=_hasPrincipalIdType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addBucketSyncData:(id)arg1;
- (void)setBucketSyncDataArray:(id)arg1;
- (void)addBizSyncData:(id)arg1;
- (void)setBizSyncDataArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

