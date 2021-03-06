//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APSearchBarDelegate.h"
#import "PPFollowListProviderDelegate.h"
#import "PPFollowTableViewDelegate.h"
#import "PPSearchDisplayDelegateImplDelegate.h"
#import "PromotionCenterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APSearchDisplayController, NSCondition, NSMutableArray, NSString, PPEmptyView, PPFollowListProvider, PPFollowTableView, PPMainTabViewController, PPSearchDisplayDelegateImpl, UIImage, UIView;

@interface PPHomeViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, PPFollowTableViewDelegate, PPFollowListProviderDelegate, PPSearchDisplayDelegateImplDelegate, PromotionCenterDelegate, APSearchBarDelegate>
{
    _Bool _hasAd;
    _Bool _isInReloading;
    _Bool _isInPublicPlatform;
    NSString *_publicIconUrl;
    NSMutableArray *_sessionList;
    NSString *_homeType;
    UIImage *_cellDefaultImage;
    PPFollowTableView *_tableView;
    PPSearchDisplayDelegateImpl *_searchDelegateImpl;
    PPFollowListProvider *_sessionService;
    APSearchDisplayController *_searchController;
    NSCondition *_condition;
    PPEmptyView *_emptyView;
    UIView *_sessionEmptyView;
    PPMainTabViewController *_containerViewController;
    double _sessionCellHeight;
    double _sessionSplitCellHeight;
}

@property(nonatomic) double sessionSplitCellHeight; // @synthesize sessionSplitCellHeight=_sessionSplitCellHeight;
@property(nonatomic) double sessionCellHeight; // @synthesize sessionCellHeight=_sessionCellHeight;
@property(nonatomic) __weak PPMainTabViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(retain, nonatomic) UIView *sessionEmptyView; // @synthesize sessionEmptyView=_sessionEmptyView;
@property(retain, nonatomic) PPEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) _Bool isInPublicPlatform; // @synthesize isInPublicPlatform=_isInPublicPlatform;
@property(nonatomic) _Bool isInReloading; // @synthesize isInReloading=_isInReloading;
@property(retain, nonatomic) NSCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) APSearchDisplayController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) PPFollowListProvider *sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) PPSearchDisplayDelegateImpl *searchDelegateImpl; // @synthesize searchDelegateImpl=_searchDelegateImpl;
@property(retain, nonatomic) PPFollowTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImage *cellDefaultImage; // @synthesize cellDefaultImage=_cellDefaultImage;
@property(retain, nonatomic) NSString *homeType; // @synthesize homeType=_homeType;
@property(nonatomic) _Bool hasAd; // @synthesize hasAd=_hasAd;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=_sessionList;
@property(copy, nonatomic) NSString *publicIconUrl; // @synthesize publicIconUrl=_publicIconUrl;
- (void).cxx_destruct;
- (void)promotionViewDidFinishLoading:(id)arg1;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)showView:(int)arg1;
- (id)targetSearchBar;
- (id)targetAutoCompleteTableView;
- (id)targetSearchResultTableView;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)followListRequestCanceld;
- (void)followListRequestError:(id)arg1;
- (void)followListShouldReload;
- (id)nameOfWarningText:(id)arg1;
- (id)nameOfTopButtonText:(id)arg1;
- (void)setTopButtonTaped:(id)arg1;
- (void)deleteButtonTaped:(id)arg1;
- (int)cellForEditType:(id)arg1;
- (_Bool)shouldShowAlert:(id)arg1;
- (_Bool)canGestureOpretaion;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configSessionCell:(id)arg1 atIndexPath:(id)arg2;
- (id)createSessionCell;
- (void)initVariables;
- (id)getSessionList;
- (void)initTableView;
- (void)initSearch;
- (void)initSessionService;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)notifyReceiveLifeRefresh;
- (void)notifyDeleteOjbect:(id)arg1;
- (void)refreshFollowListImmediately;
- (void)showLifeSessionEmptyView:(_Bool)arg1;
- (void)showSessionEmptyView:(_Bool)arg1;
- (id)cellAtIndexPath:(id)arg1;
- (id)sessionOnlyCellAtIndexPath:(id)arg1;
- (id)fetchLastFeedsPublicIconUrl;
- (void)showEmptyView:(_Bool)arg1;
- (void)reloadTableViewData;
- (void)updateUIDisplay;
- (void)dealloc;
- (void)setupViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)back;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gotoAdd;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (id)initWithType:(id)arg1;
- (id)initWithContainerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

