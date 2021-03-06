//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class APButton, APExceptionView, APTableView, NSMutableArray, NSString, TTTAttributedLabel, TZBTransferQueryModel, UILabel, UITextField, UIView;

@interface TZBTransformInDetailViewController : DTViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, TTTAttributedLabelDelegate>
{
    _Bool _amountIsEditable;
    _Bool _isInYEB;
    APTableView *_tableView;
    NSMutableArray *_sectionShouldShowList;
    NSString *_externAmount;
    CDUnknownBlockType _confirmHandler;
    APExceptionView *_exceptView;
    UILabel *_insuranceLabel;
    UITextField *_amountInputView;
    APButton *_confirmBtn;
    UIView *_confirmFooterView;
    TTTAttributedLabel *_amountTipLabel;
    TTTAttributedLabel *_confirmTipLabel;
    NSString *_lastInputAmount;
    TZBTransferQueryModel *_queryModel;
}

@property(retain, nonatomic) TZBTransferQueryModel *queryModel; // @synthesize queryModel=_queryModel;
@property(retain, nonatomic) NSString *lastInputAmount; // @synthesize lastInputAmount=_lastInputAmount;
@property(retain, nonatomic) TTTAttributedLabel *confirmTipLabel; // @synthesize confirmTipLabel=_confirmTipLabel;
@property(retain, nonatomic) TTTAttributedLabel *amountTipLabel; // @synthesize amountTipLabel=_amountTipLabel;
@property(retain, nonatomic) UIView *confirmFooterView; // @synthesize confirmFooterView=_confirmFooterView;
@property(retain, nonatomic) APButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UITextField *amountInputView; // @synthesize amountInputView=_amountInputView;
@property(retain, nonatomic) UILabel *insuranceLabel; // @synthesize insuranceLabel=_insuranceLabel;
@property(nonatomic) _Bool isInYEB; // @synthesize isInYEB=_isInYEB;
@property(retain, nonatomic) APExceptionView *exceptView; // @synthesize exceptView=_exceptView;
@property(copy, nonatomic) CDUnknownBlockType confirmHandler; // @synthesize confirmHandler=_confirmHandler;
@property(nonatomic) _Bool amountIsEditable; // @synthesize amountIsEditable=_amountIsEditable;
@property(retain, nonatomic) NSString *externAmount; // @synthesize externAmount=_externAmount;
@property(retain, nonatomic) NSMutableArray *sectionShouldShowList; // @synthesize sectionShouldShowList=_sectionShouldShowList;
@property(readonly, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)resignFirstResponder:(id)arg1;
- (void)updateLimitStatus:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (double)lastFooterHeight;
- (id)createConfirmCell;
- (id)createAmountCell;
- (id)createChannelCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getTotalAmountString:(id)arg1 totalAmount:(id)arg2;
- (id)getLimitAmountString:(id)arg1 limitAmount:(id)arg2 dayLimit:(id)arg3 monthLimit:(id)arg4;
- (id)titleWithString:(id)arg1;
- (void)refreshView;
- (void)transferInSuccess:(id)arg1;
- (void)veriftyIdentity:(id)arg1;
- (void)onConfirmButtonClick:(id)arg1;
- (void)hideTapToLoad;
- (void)showTapToLoad;
- (void)refreshData;
- (void)setupTableView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithInfo;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

