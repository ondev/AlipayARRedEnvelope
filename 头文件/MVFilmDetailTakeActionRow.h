//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVShowModel;

@interface MVFilmDetailTakeActionRow : MVTableRow
{
    _Bool _isNowPlayingShow;
    MVShowModel *_showModel;
}

+ (id)rowWithShowModel:(id)arg1;
@property(retain, nonatomic) MVShowModel *showModel; // @synthesize showModel=_showModel;
@property(nonatomic) _Bool isNowPlayingShow; // @synthesize isNowPlayingShow=_isNowPlayingShow;
- (void).cxx_destruct;
- (void)commentFilm:(id)arg1;
- (void)likeFilm:(id)arg1;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;

@end

