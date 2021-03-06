//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString, ResultData;

@interface ReportResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultData;
    _Bool _hasExtResultData;
    _Bool _success;
    NSString *_resultCode;
    ResultData *_resultData;
    NSString *_extResultData;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extResultData; // @synthesize extResultData=_extResultData;
@property(retain, nonatomic) ResultData *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasExtResultData; // @synthesize hasExtResultData=_hasExtResultData;
@property(readonly) _Bool hasResultData; // @synthesize hasResultData=_hasResultData;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
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

