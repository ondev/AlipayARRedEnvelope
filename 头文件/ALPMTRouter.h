//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALPMTRootController, MVOrderAppBiz, NSDictionary;

@interface ALPMTRouter : NSObject
{
    MVOrderAppBiz *_orderBiz;
    _Bool _isNoHome;
    _Bool _isPushVc;
    int _tabFilmList;
    int _tabCinemaList;
    int _tabDiscovery;
    int _tabMine;
    int _tabPerformance;
    NSDictionary *_startupDictOption;
    ALPMTRootController *_rootVC;
}

@property(retain, nonatomic) ALPMTRootController *rootVC; // @synthesize rootVC=_rootVC;
@property(readonly, nonatomic) NSDictionary *startupDictOption; // @synthesize startupDictOption=_startupDictOption;
@property(readonly, nonatomic) int tabPerformance; // @synthesize tabPerformance=_tabPerformance;
@property(readonly, nonatomic) int tabMine; // @synthesize tabMine=_tabMine;
@property(readonly, nonatomic) int tabDiscovery; // @synthesize tabDiscovery=_tabDiscovery;
@property(readonly, nonatomic) int tabCinemaList; // @synthesize tabCinemaList=_tabCinemaList;
@property(readonly, nonatomic) int tabFilmList; // @synthesize tabFilmList=_tabFilmList;
- (void).cxx_destruct;
- (void)pushMineH5Page:(id)arg1;
- (id)createDateFromString:(id)arg1;
- (id)filterDictionaryFromString:(id)arg1;
- (id)viewControllFromOptions:(id)arg1;
- (_Bool)routeShouldSupport:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (void)performRouter:(id)arg1 isResume:(_Bool)arg2;
- (_Bool)routeViewController:(id)arg1 withOptions:(id)arg2;
- (id)init;

@end

