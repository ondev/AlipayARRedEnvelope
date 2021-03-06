//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

@class AAMSMobileAuthDetailRes, AAMSMobileSecurityResult, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface ALPAuthorizeDetailController : DTViewController
{
    _Bool _expanded;
    id <ALPAuthorizeDetailDelegate> _delegate;
    AAMSMobileAuthDetailRes *_result;
    AAMSMobileSecurityResult *_baseResult;
    UIView *_rootView;
    UITableView *_tableView;
    UIView *_header;
    UIView *_footer;
    UIView *_buttonContainer;
    UIImageView *_iconView;
    UILabel *_targetTitleLabel;
    UILabel *_stateLabel;
    UIButton *_expandButton;
    UILabel *_authDateLabel;
    UILabel *_expireDateLabel;
    UIView *_middleSeperator;
    UIView *_bottomSeperator;
    struct CGRect _headerFrameBeforeExpanded;
}

@property(nonatomic) __weak UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(nonatomic) __weak UIView *middleSeperator; // @synthesize middleSeperator=_middleSeperator;
@property(nonatomic) __weak UILabel *expireDateLabel; // @synthesize expireDateLabel=_expireDateLabel;
@property(nonatomic) __weak UILabel *authDateLabel; // @synthesize authDateLabel=_authDateLabel;
@property(nonatomic) struct CGRect headerFrameBeforeExpanded; // @synthesize headerFrameBeforeExpanded=_headerFrameBeforeExpanded;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(nonatomic) __weak UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(nonatomic) __weak UILabel *targetTitleLabel; // @synthesize targetTitleLabel=_targetTitleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *rootView; // @synthesize rootView=_rootView;
@property(retain, nonatomic) AAMSMobileSecurityResult *baseResult; // @synthesize baseResult=_baseResult;
@property(retain, nonatomic) AAMSMobileAuthDetailRes *result; // @synthesize result=_result;
@property(nonatomic) __weak id <ALPAuthorizeDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onExpandButtonClicked:(id)arg1;
- (void)handle1005;
- (void)deleteAuthorization;
- (void)deleteButtonClicked;
- (struct CGSize)sizeWithText:(id)arg1 forLabel:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)request;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

