/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardGroupItem, UIColor, UIView;

@interface ABContactCell : UITableViewCell {
    ABCardGroupItem *_cardGroupItem;
    float _leftContentMargin;
    float _rightContentMargin;
    UIColor *_separatorColor;
    UIView *_separatorView;
    BOOL _showSeparator;
}

@property(retain) ABCardGroupItem * cardGroupItem;
@property float leftContentMargin;
@property float rightContentMargin;
@property(retain) UIColor * separatorColor;
@property(readonly) UIView * separatorView;
@property BOOL showSeparator;

- (id)cardGroupItem;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)leftContentMargin;
- (void)performAccessoryAction;
- (void)performDefaultAction;
- (float)rightContentMargin;
- (id)separatorColor;
- (id)separatorView;
- (void)setCardGroupItem:(id)arg1;
- (void)setLeftContentMargin:(float)arg1;
- (void)setRightContentMargin:(float)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setShowSeparator:(BOOL)arg1;
- (BOOL)shouldPerformAccessoryAction;
- (BOOL)shouldPerformDefaultAction;
- (BOOL)showSeparator;

@end
