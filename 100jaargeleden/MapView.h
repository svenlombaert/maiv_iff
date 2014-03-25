//
//  MapView.h
//  100jaargeleden
//
//  Created by Sven Lombaert on 25/03/14.
//  Copyright (c) 2014 Sven Lombaert. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RMMapView.h>

#import "MapViewDelegate.h"

@interface MapView : UIView <UIGestureRecognizerDelegate>


@property (nonatomic, strong) RMMapView *mapView;
@property (nonatomic, weak) id<MapViewDelegate> delegate;

@end