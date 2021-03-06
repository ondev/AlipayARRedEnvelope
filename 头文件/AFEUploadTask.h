//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFEBaseTask.h"

#import "DataCenterDelegate.h"

@class AFEScanParallelTask, AFEUploadView, APBAlertController, NSString;

@interface AFEUploadTask : AFEBaseTask <DataCenterDelegate>
{
    AFEUploadView *_uploadView;
    AFEScanParallelTask *_scanTask;
    APBAlertController *_alert;
}

@property(retain, nonatomic) APBAlertController *alert; // @synthesize alert=_alert;
@property(nonatomic) __weak AFEScanParallelTask *scanTask; // @synthesize scanTask=_scanTask;
@property(retain, nonatomic) AFEUploadView *uploadView; // @synthesize uploadView=_uploadView;
- (void).cxx_destruct;
- (void)onUploadFailed;
- (void)onRemoteCommand:(long long)arg1;
- (void)FaceFailAlertWithScene:(id)arg1;
- (void)onFaceFail;
- (void)exitWithResult:(int)arg1 failReason:(id)arg2;
- (void)reset;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)invokeWithPipeInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

