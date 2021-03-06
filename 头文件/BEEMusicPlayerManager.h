//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APXMMusicPlayerDelegate.h"

@class APXMMusicPlayer, BEEMusicView, NSMutableArray, NSString;

@interface BEEMusicPlayerManager : NSObject <APXMMusicPlayerDelegate>
{
    NSMutableArray *_musicViews;
    APXMMusicPlayer *_musicPlayer;
    unsigned long long _currentSongState;
    double _curProgress;
    BEEMusicView *_playingMusicView;
}

+ (id)sharInstance;
@property(retain, nonatomic) BEEMusicView *playingMusicView; // @synthesize playingMusicView=_playingMusicView;
@property(nonatomic) double curProgress; // @synthesize curProgress=_curProgress;
@property(nonatomic) unsigned long long currentSongState; // @synthesize currentSongState=_currentSongState;
@property(readonly, nonatomic) APXMMusicPlayer *musicPlayer; // @synthesize musicPlayer=_musicPlayer;
- (void).cxx_destruct;
- (void)postNotification:(unsigned long long)arg1;
- (void)musicPlayerFailedWithError:(id)arg1;
- (void)musicPlayerStateChangedTo:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)viewsForCurrentPlaying;
- (id)viewForSongId:(id)arg1;
- (void)removeMusicView:(id)arg1;
- (void)checkNeedResetPlayingView;
- (void)addMusicView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

