//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APLimitView.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, NSArray, NSString, TTTAttributedLabel, UILabel, UIView;

@interface H5AuthView : APLimitView <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate>
{
    _Bool _isShowing;
    int _authTextLineNumber;
    CDUnknownBlockType _actionButtonBlock;
    CDUnknownBlockType _closeButtonBlock;
    APTableView *_listView;
    NSArray *_listData;
    UIView *_showInView;
    double _listViewHeight;
    UILabel *_listTipLabel;
    NSString *_appName;
    UIView *_topBackgroundView;
    NSArray *_agreementsDatas;
    UILabel *_aggrementLabel;
    TTTAttributedLabel *_aggrementDetailLabel;
}

+ (id)sharedInstance;
+ (id)showInSuperview:(id)arg1 title:(id)arg2 data:(id)arg3;
@property(nonatomic) int authTextLineNumber; // @synthesize authTextLineNumber=_authTextLineNumber;
@property(retain, nonatomic) TTTAttributedLabel *aggrementDetailLabel; // @synthesize aggrementDetailLabel=_aggrementDetailLabel;
@property(retain, nonatomic) UILabel *aggrementLabel; // @synthesize aggrementLabel=_aggrementLabel;
@property(retain, nonatomic) NSArray *agreementsDatas; // @synthesize agreementsDatas=_agreementsDatas;
@property(retain, nonatomic) UIView *topBackgroundView; // @synthesize topBackgroundView=_topBackgroundView;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UILabel *listTipLabel; // @synthesize listTipLabel=_listTipLabel;
@property(nonatomic) double listViewHeight; // @synthesize listViewHeight=_listViewHeight;
@property(nonatomic) __weak UIView *showInView; // @synthesize showInView=_showInView;
@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) APTableView *listView; // @synthesize listView=_listView;
@property(copy, nonatomic) CDUnknownBlockType closeButtonBlock; // @synthesize closeButtonBlock=_closeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType actionButtonBlock; // @synthesize actionButtonBlock=_actionButtonBlock;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onClickActionButton;
- (void)onClickCloseButton;
- (void)dismiss;
- (void)setLinkBtnContent;
- (void)createLinkButton;
- (void)setupBackgroundView;
- (void)changeToMaxHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSuperview:(id)arg1 title:(id)arg2 data:(id)arg3;
- (double)getListViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

