//
//  QueuePopupBar.h
//  Cyanide
//
//  Sileo-style persistent popup bar sitting above the tab bar. Visible when
//  the package queue is non-empty.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface QueuePopupBar : UIView

@property (nonatomic, copy, nullable) void (^onTap)(void);

// When YES the bar stays hidden regardless of queue state (e.g. while a
// full-screen pushed view like the Process Viewer is on top). Setting it back
// to NO re-evaluates the queue and restores previous visibility.
@property (nonatomic, assign) BOOL suppressed;

// Refreshes the count label and animates show/hide based on the queue state.
- (void)refreshFromQueueAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
