//
//  SliderGraphView.h
//  eqMac2
//
//  Created by Roman on 06/03/2016.
//  Copyright © 2016 bitgapp. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>
#import "Utilities.h"

@interface SliderGraphView : NSView

-(void)animateBandsToValues:(NSArray*)values;
-(NSArray*)getBandValues;
-(NSArray*)getSliderXPosition;
-(void)setNSliders:(int)number;
-(void)forceRedraw;
@end
