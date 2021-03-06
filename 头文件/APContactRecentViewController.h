//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "APCommonSelectDelegate.h"
#import "APCustomNavigationBarProtocol.h"

@class APGSearchDetailViewController, APRecentContact, APRecentSelectView, APSearchBar, APTableViewCell, DTNavigationController, DTRpcAsyncCaller, MPBadgeView, NSDate, NSMutableArray, NSString, NSTimer, UIActivityIndicatorView, UIButton, UIView;

@interface APContactRecentViewController : DTViewController <APCommonSelectDelegate, APCustomNavigationBarProtocol>
{
    _Bool _didScroll;
    _Bool _isShowingError;
    _Bool _isFirstTimeReload;
    _Bool _viewDidShow;
    _Bool _hasSetSearchBarOffset;
    _Bool _isStartingApplication;
    _Bool _isLongLinkFindingData;
    _Bool _isShowing;
    _Bool _userHasFriend;
    _Bool _didUpdateUnread;
    _Bool _needUpdate;
    int _stateOfHavingFriends;
    APGSearchDetailViewController *_searchDetailVC;
    double _currentY;
    APSearchBar *_searchBar;
    NSTimer *_checkStartingTimer;
    UIView *_footerView;
    UIButton *_footerPhonebookBtn;
    APRecentContact *_nwFriendRecentContact;
    MPBadgeView *_leftBarItemBadgeView;
    DTRpcAsyncCaller *_rpcCaller_getStatus;
    DTRpcAsyncCaller *_rpcCaller_setStatus;
    DTNavigationController *_guideNavVC;
    APTableViewCell *_noNetworkCell;
    UIActivityIndicatorView *_indView;
    APRecentSelectView *_selectView;
    NSMutableArray *_recentContact;
    NSDate *_date;
    NSDate *_totalDate;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needUpdate; // @synthesize needUpdate=_needUpdate;
@property(nonatomic) _Bool didUpdateUnread; // @synthesize didUpdateUnread=_didUpdateUnread;
@property(retain, nonatomic) NSDate *totalDate; // @synthesize totalDate=_totalDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool userHasFriend; // @synthesize userHasFriend=_userHasFriend;
@property(retain, nonatomic) NSMutableArray *recentContact; // @synthesize recentContact=_recentContact;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) APRecentSelectView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIActivityIndicatorView *indView; // @synthesize indView=_indView;
@property(retain, nonatomic) APTableViewCell *noNetworkCell; // @synthesize noNetworkCell=_noNetworkCell;
@property(retain, nonatomic) DTNavigationController *guideNavVC; // @synthesize guideNavVC=_guideNavVC;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller_setStatus; // @synthesize rpcCaller_setStatus=_rpcCaller_setStatus;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller_getStatus; // @synthesize rpcCaller_getStatus=_rpcCaller_getStatus;
@property(retain, nonatomic) MPBadgeView *leftBarItemBadgeView; // @synthesize leftBarItemBadgeView=_leftBarItemBadgeView;
@property(retain, nonatomic) APRecentContact *nwFriendRecentContact; // @synthesize nwFriendRecentContact=_nwFriendRecentContact;
@property(retain, nonatomic) UIButton *footerPhonebookBtn; // @synthesize footerPhonebookBtn=_footerPhonebookBtn;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSTimer *checkStartingTimer; // @synthesize checkStartingTimer=_checkStartingTimer;
@property(nonatomic) _Bool isLongLinkFindingData; // @synthesize isLongLinkFindingData=_isLongLinkFindingData;
@property(nonatomic) _Bool isStartingApplication; // @synthesize isStartingApplication=_isStartingApplication;
@property(retain, nonatomic) APSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) double currentY; // @synthesize currentY=_currentY;
@property(retain, nonatomic) APGSearchDetailViewController *searchDetailVC; // @synthesize searchDetailVC=_searchDetailVC;
@property(nonatomic) _Bool hasSetSearchBarOffset; // @synthesize hasSetSearchBarOffset=_hasSetSearchBarOffset;
@property(nonatomic) _Bool viewDidShow; // @synthesize viewDidShow=_viewDidShow;
@property(nonatomic) _Bool isFirstTimeReload; // @synthesize isFirstTimeReload=_isFirstTimeReload;
@property(nonatomic) _Bool isShowingError; // @synthesize isShowingError=_isShowingError;
@property(nonatomic) _Bool didScroll; // @synthesize didScroll=_didScroll;
@property(nonatomic) int stateOfHavingFriends; // @synthesize stateOfHavingFriends=_stateOfHavingFriends;
- (void).cxx_destruct;
- (id)getSPMID;
- (void)logPageSPMID;
- (id)rightCustomNavigationBarButtonItem;
- (void)languageChanged:(id)arg1;
- (void)fireToRefreshStartingState;
- (void)didSelectItems:(id)arg1 commonView:(id)arg2;
- (void)commonView:(id)arg1 didSelectCustomRowAtIndexPath:(id)arg2;
- (id)commonView:(id)arg1 cellForCustomRowAtIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 heightForRowInCustomIndexPath:(id)arg2;
- (long long)commonView:(id)arg1 numberOfRowInCustomSection:(long long)arg2;
- (long long)numberOfCustomSectionInCommonView:(id)arg1;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (void)addToBlackListWithRecentContact:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)commonView:(id)arg1 didClickLeftMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (void)didSelectContactInfo:(id)arg1;
- (void)enterTimeLine;
- (void)didSelectRecentContactInfo:(id)arg1;
- (int)displayModeForCommonView:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)registerReloadNotification;
- (void)deleteAllPrivateMessages;
- (void)deleteRecentContactWithAPRecentContact:(id)arg1;
- (void)deleteChatRoomSetWithAPRecentContact:(id)arg1;
- (void)deleteAllStranger;
- (void)scrollToTargedIndex:(long long)arg1;
- (void)tabBarDoubleClick:(id)arg1;
- (void)checkToScrollToFirstSession;
- (void)updateUnread;
- (void)reloadUI;
- (void)reloadRecentContact:(id)arg1;
- (void)loadContact;
- (void)setupRightBarBtnItem;
- (void)adjustFrames;
- (void)userDidLogin:(id)arg1;
- (void)onPhonebookContacts:(id)arg1;
- (void)onContactNotify:(id)arg1;
- (void)handleResult:(id)arg1;
- (void)judgeToShowPhoneBookEntry;
- (void)deSelectAllCells;
- (void)checkToLoadMobileContact;
- (void)cancelLoading;
- (void)textSizeDidChange:(id)arg1;
- (void)receiveStatusNoti:(id)arg1;
- (void)refreshTitle;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterforeground:(id)arg1;
- (void)checkNavigationBar;
- (void)setupSearchBar;
- (void)setupSelectView;
- (void)setupUI;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)redPoint;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)registerNotification;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

