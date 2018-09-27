

#import <UIKit/UIKit.h>

@interface SZCalendarPicker : UIView<UICollectionViewDelegate , UICollectionViewDataSource>
@property (nonatomic , strong) NSDate *date;
@property (nonatomic , strong) NSDate *today;
@property (nonatomic, copy) void(^calendarBlock)(NSInteger day, NSInteger month, NSInteger year);

+ (instancetype)showOnView:(UIView *)view;
@end
