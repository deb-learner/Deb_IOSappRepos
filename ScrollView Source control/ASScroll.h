//
//  ASScroll.h
//  ScrollView Source control
//
//  Created by Cestar Admin on 21/7/14.
//  Copyright (c) 2014 Cestar Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASScroll : UIView<UIScrollViewDelegate>
{
    float previousTouchPoint;
    UIPageControl *pageControl;
    UIScrollView * scrollview ;
    BOOL didEndAnimate;
}
@property (retain ,nonatomic) NSMutableArray *arrOfImages;


@end
