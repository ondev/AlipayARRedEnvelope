//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EyeVerifyDelegate.h"

@class EVAuthenticator, NSString;

@interface EyeVerify : NSObject <EyeVerifyDelegate>
{
    EVAuthenticator *_evAuthenticator;
    NSString *_currentLicenseCertificate;
    CDUnknownBlockType _RemoteCompletionBlock;
    CDUnknownBlockType _EnrollmentCompletionBlock;
    CDUnknownBlockType _VerificationCompletionBlock;
}

+ (id)getVersion;
@property(copy, nonatomic) CDUnknownBlockType VerificationCompletionBlock; // @synthesize VerificationCompletionBlock=_VerificationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType EnrollmentCompletionBlock; // @synthesize EnrollmentCompletionBlock=_EnrollmentCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType RemoteCompletionBlock; // @synthesize RemoteCompletionBlock=_RemoteCompletionBlock;
@property(retain, nonatomic) NSString *currentLicenseCertificate; // @synthesize currentLicenseCertificate=_currentLicenseCertificate;
@property(retain, nonatomic) EVAuthenticator *evAuthenticator; // @synthesize evAuthenticator=_evAuthenticator;
- (void).cxx_destruct;
- (void)setSpoofDetectionLevel:(long long)arg1;
- (void)targetMovementCompleted:(_Bool)arg1 atPoint:(struct CGPoint)arg2 animationDuration:(double)arg3;
- (void)setCaptureView:(id)arg1;
- (void)setEVAuthSessionDelegate:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)getEnrolledUsers;
- (_Bool)isUserEnrolled:(id)arg1;
- (void)cancel;
- (void)takeDarkCapture;
- (void)continueSession;
- (void)verificationCompleted:(_Bool)arg1 userKey:(id)arg2 error:(id)arg3;
- (void)enrollmentCompleted:(_Bool)arg1 error:(id)arg2;
- (void)continueAuth;
- (void)removeAllUsers;
- (void)removeUser:(id)arg1;
- (_Bool)verifyUser:(id)arg1 localCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)enrollUser:(id)arg1 userKey:(id)arg2 localCompletionBlock:(CDUnknownBlockType)arg3;
- (id)randomStringWithLength:(long long)arg1;
@property(readonly, nonatomic) _Bool isBusy;
- (void)_releaseResources;
- (void)releaseResources;
- (void)_resume;
- (void)resume;
- (void)_pause;
- (void)pause;
- (void)_finish:(int)arg1 data:(id)arg2;
- (void)finish:(int)arg1 data:(id)arg2;
- (void)finish:(int)arg1;
- (void)_start:(long long)arg1 userName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)start:(long long)arg1 userName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)start:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithSettings:(id)arg1 assetsDirectory:(id)arg2 remoteCallback:(CDUnknownFunctionPointerType)arg3 objectPtr:(void *)arg4 error:(id *)arg5;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

