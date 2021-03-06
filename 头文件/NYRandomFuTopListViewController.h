//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEEFunctionTableController.h"

#import "NYRandomFuTopListCellDelegate.h"

@class APCustomNavigationView, NSMutableArray, NSString, UIImageView;

@interface NYRandomFuTopListViewController : BEEFunctionTableController <NYRandomFuTopListCellDelegate>
{
    _Bool _hasNextPage;
    _Bool _defaultShowFrendList;
    NSString *_cardId;
    NSMutableArray *_dataArray;
    long long _pageNo;
    APCustomNavigationView *_navView;
    UIImageView *_pageBgView;
}

@property(retain, nonatomic) UIImageView *pageBgView; // @synthesize pageBgView=_pageBgView;
@property(retain, nonatomic) APCustomNavigationView *navView; // @synthesize navView=_navView;
@property(nonatomic) _Bool defaultShowFrendList; // @synthesize defaultShowFrendList=_defaultShowFrendList;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (void)back;
- (long long)customStatusBarStytle;
- (_Bool)autohideNavigationBar;
- (id)customNavigationBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)pressEmptyButton;
- (id)emptyView;
- (void)showDefaultTopList;
- (void)loadRpcException:(id)arg1;
- (_Bool)shouldSkipRpcSaveToCache:(id)arg1;
- (id)emptyText;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadBegan;
- (id)mergeLocalFrendsData:(id)arg1;
- (id)getLocalFrendByUserIdArray:(id)arg1;
- (void)didPressTakeButton:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

