//
//  QDListView.h
//  StampApp
//
//  Created by LTMacMini on 15/11/16.
//
//

#import <UIKit/UIKit.h>

@class ZCGListView;
@class ZCGRightContentTableViewCell;
@protocol ZCGListViewDelegate <NSObject>
@optional

- (void)listView:(ZCGListView*)listView didSelectCellAtIndexPath:(NSIndexPath*)indexPath;

- (CGFloat)listView:(ZCGListView*)listView heightForRowIndexPath:(NSIndexPath *)indexPath;


@end


@interface ZCGListView : UIView

@property (nonatomic, strong) NSMutableArray *listData;
@property (nonatomic, weak) id<ZCGListViewDelegate> delegate;
@property (nonatomic, strong) UIView* leftHeadView;
@property (nonatomic, strong) UILabel* leftLabel;
@property (nonatomic, strong) UIView* rightHeadView;
@property (nonatomic, strong) UITableView* leftContentTableView;
@property (nonatomic, strong) UITableView* rightContentTableView;

@property (nonatomic, assign) CGFloat rightColumnWidth;
@property (nonatomic, assign) CGFloat leftColumnWidth;
@property (nonatomic, assign) CGFloat headerViewheight;

@property (nonatomic, assign) CGFloat leftFontSize;
@property (nonatomic, assign) CGFloat rightFontSize;
@property (nonatomic, assign) CGFloat headerFontSize;

@property (nonatomic, strong) UIColor *headerTextColor;
@property (nonatomic, strong) UIColor *leftTextColor;
@property (nonatomic, strong) UIColor *rightTextColor;

@property (nonatomic, assign) NSTextAlignment rightTextAlign;
@property (nonatomic, assign) NSTextAlignment leftTextAlign;
@property (nonatomic, assign) NSTextAlignment headerTextAlign;

@property (nonatomic, strong) UIColor *headerViewBackgroundColor;
@property (nonatomic, strong) UIColor *leftViewBackgroundColor;
@property (nonatomic, strong) UIColor *rightViewBackgroundColor;
@property (nonatomic, strong) UIColor *viewBgColor;

@property (nonatomic, assign) UITableViewCellSelectionStyle cellSelectionStyle;

- (instancetype)initWithFrame:(CGRect)frame titles:(NSArray*)titles listData:(NSMutableArray*)data;

- (void)listViewReloadData;

- (void)setSeparateLineWidth:(CGFloat)width Color:(UIColor*)color;

- (void)listViewRightCell:(ZCGRightContentTableViewCell*)cell changeColumnColorWithTag:(NSInteger)tag color:(UIColor *)color;

@end