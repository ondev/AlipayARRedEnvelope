//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface SecurityCheckRequestPb : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasToken;
    _Bool _hasUserId;
    _Bool _hasSecData;
    _Bool _hasVirusLevel;
    _Bool _hasDangerLevel;
    int _virusLevel;
    int _dangerLevel;
    NSString *_token;
    NSString *_userId;
    NSString *_secData;
    NSMutableArray *_externParam;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *externParam; // @synthesize externParam=_externParam;
@property(nonatomic) int dangerLevel; // @synthesize dangerLevel=_dangerLevel;
@property(nonatomic) int virusLevel; // @synthesize virusLevel=_virusLevel;
@property(retain, nonatomic) NSString *secData; // @synthesize secData=_secData;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly) _Bool hasDangerLevel; // @synthesize hasDangerLevel=_hasDangerLevel;
@property(readonly) _Bool hasVirusLevel; // @synthesize hasVirusLevel=_hasVirusLevel;
@property(readonly) _Bool hasSecData; // @synthesize hasSecData=_hasSecData;
@property(readonly) _Bool hasUserId; // @synthesize hasUserId=_hasUserId;
@property(readonly) _Bool hasToken; // @synthesize hasToken=_hasToken;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExternParam:(id)arg1;
- (void)setExternParamArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

