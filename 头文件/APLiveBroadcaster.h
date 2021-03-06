//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMLiveBroadcaster.h"

#import "APMLiveBroadcasterDelegate.h"

@class NSDictionary, NSString;

@interface APLiveBroadcaster : APMLiveBroadcaster <APMLiveBroadcasterDelegate>
{
    id <APLiveBroadcasterDelegate> _delegate;
    NSDictionary *_statusStateDic;
}

@property(retain, nonatomic) NSDictionary *statusStateDic; // @synthesize statusStateDic=_statusStateDic;
@property(nonatomic) __weak id <APLiveBroadcasterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)APMLiveBroadcastStatusChangedTo:(unsigned long long)arg1 liveID:(id)arg2 error:(id)arg3;
- (void)APMLiveBroadcastOnEnterForeground;
- (void)APMLiveBroadcastOnEnterBackground;
- (void)APMLiveBroadcastPreviewFocusTap:(struct CGPoint)arg1;
- (void)APMLiveBroadcastNetStatusChangedFromStatus:(long long)arg1 toStatus:(long long)arg2;
- (void)APMLiveBroadcast:(id)arg1 livedCurrentTime:(double)arg2;
- (double)generateTimeBy:(unsigned long long)arg1;
- (id)generateTraceID;
- (void)logWithStatus:(unsigned long long)arg1 liveID:(id)arg2 error:(id)arg3;
- (void)handleLiveStatusChangedTo:(unsigned long long)arg1 liveID:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

